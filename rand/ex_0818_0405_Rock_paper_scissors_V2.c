/*
문제5. 아래 출력예와 같이 컴퓨터와 가위바위보 게임을 하는 프로그램을 작성하시오. 
단, 가위=1, 바위=2, 보=3으로 하여 프로그램을 작성하고 이외의 정수를 입력하면 
"다시 입력하세요"라고 출력하시오. 그리고, 가위바위보 게임은 무한반복시키며 승무패를 기록하시오.
- 출력예 -
***  가위바위보 게임  ***
가위(1), 바위(2), 보(3), 종료(4)를 입력하세요 : 2
컴퓨터는 보를 내었고 사용자는 바위를 내어 졌습니다. (0승 0무 1패)

가위(1), 바위(2), 보(3), 종료(4)를 입력하세요 : 1
컴퓨터는 가위를 내었고 사용자는 가위를 내어 비겼습니다. (0승 1무 1패)

가위(1), 바위(2), 보(3), 종료(4)를 입력하세요 : 4 
프로그램이 종료되었으며 지금까지의 전적은 0승 1무 1패입니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  int com, user;
  int const win = 0, draw = 1, lose = 2;
  int result[3] = {0, 0, 0};
  char desc[3][10] = {"가위", "바위", "보"};
  srand(time(NULL));

  printf("***********************\n");
  printf("*   가위바위보 게임   *\n");
  printf("***********************\n");

  while (1)
  {
    com = rand() % 3;

    printf("\n\n가위(1), 바위(2), 보(3), 종료(4)를 입력하세요 : ");
    scanf(" %d", &user);
    // 종료
    if (user == 4)
      exit(0);

    // 원하는 입력 아닐 경우 재입력 요구
    if (user < 1 || user > 4)
      continue;

    // 배열 사용 위해 1 감소
    // 가위 0 바위 1 보 2
    user--;

    // 비긴 경우
    if (com == user)
    {
      result[draw]++;
      printf("컴퓨터는 %s를 내었고 사용자는 %s를 내어 비겼습니다. (%d승 %d무 %d패)",
             desc[com], desc[user], result[win], result[draw], result[lose]);
    }
    // 이긴 경우
    else if ((com == 0 && user == 1) || (com == 1 && user == 2) || (com == 2 && user == 0))
    {
      result[win]++;
      printf("컴퓨터는 %s를 내었고 사용자는 %s를 이겼습니다. (%d승 %d무 %d패)",
             desc[com], desc[user], result[win], result[draw], result[lose]);
    }
    // 진 경우
    else
    {
      result[lose]++;
      printf("컴퓨터는 %s를 내었고 사용자는 %s를 내어 졌습니다. (%d승 %d무 %d패)",
             desc[com], desc[user], result[win], result[draw], result[lose]);
    }
  }
  return 0;
}