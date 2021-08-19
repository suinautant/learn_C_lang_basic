/*
문제4. 아래 출력예와 같이 숫자 맞추기 게임 프로그램을 작성하시오. 
단, 1~100까지의 난수를 사용하되 난수는 출력하지 않고 메시지만 보고 무한반복시켜 정답을 맞추시오.
- 출력예 -
***********************
*  숫자 맞추기 게임  *
***********************
1부터 100까지 사이의 숫자를 입력하세요 : 50
입력한 정수는 50이며 정답보다 작은 수입니다. 
1부터 100까지 사이의 숫자를 입력하세요 : 80
입력한 정수는 80이며 정답보다 큰 수입니다.
1부터 100까지 사이의 숫자를 입력하세요 : 70

축하합니다! 입력한 정수는 70이며 정답입니다!
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  int sum = 0;
  int number;
  int suggest;
  srand(time(NULL));

  printf("************************\n");
  printf("*   숫자 맞추기 게임   *\n");
  printf("************************\n");

  number = rand() % 100 + 1;
  printf("number 값은 %d\n", number);

  while (1)
  {
    printf("\n1부터 100까지 사이의 숫자를 입력하세요 : ");
    scanf(" %d", &suggest);
    printf("\n");

    if (number == suggest)
    {
      printf("축하합니다! 입력한 정수는 %d이며 정답입니다!", suggest);
      break;
    }
    else if (number < suggest)
      printf("입력한 정수는 %d이며 정답보다 큰 수입니다.\n", suggest);
    else
      printf("입력한 정수는 %d이며 정답보다 작은 수입니다.\n", suggest);
  }
  return 0;
}
