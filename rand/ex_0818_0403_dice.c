/*
문제3. 아래 출력예와 같이 주사위 게임 프로그램을 작성하시오. 단, 난수는 1~6까지만 발생함.
- 출력예 -
***********************
*      주사위 게임     *
***********************
주사위 1의 값 : 4
주사위 2의 값 : 5
2개의 주사위 값의 합은 9입니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  int sum = 0;
  int n;
  srand(time(NULL));

  printf("*******************\n");
  printf("*   주사위 게임   *\n");
  printf("*******************\n");
  for (size_t i = 0; i < 2; i++)
  {
    n = rand() % 6 + 1;
    printf("주사위 %d의 값 : %d\n", i + 1, n);
    sum += n;
  }

  printf("2개의 주사위 값의 합은 %d입니다.\n", sum);

  return 0;
}
