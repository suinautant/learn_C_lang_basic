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
  int solution, suggest;
  int menu;
  int win = 0, draw = 0, lose = 0;
  srand(time(NULL));

  printf("***********************\n");
  printf("*   가위바위보 게임   *\n");
  printf("***********************\n");

  while (1)
  {
    solution = rand() % 3 + 1;

    printf("\n\n가위(1), 바위(2), 보(3), 종료(4)를 입력하세요 : ");
    scanf(" %d", &menu);
    switch (menu)
    {
    case 1:
      if (solution == 1)
      {
        draw++;
        printf("컴퓨터는 가위를 내었고 사용자는 가위를 내어 비겼습니다. (%d승 %d무 %d패)", win, draw, lose);
      }
      if (solution == 2)
      {
        lose++;
        printf("컴퓨터는 바위를 내었고 사용자는 가위를 내어 졌습니다. (%d승 %d무 %d패)", win, draw, lose);
      }
      if (solution == 3)
      {
        win++;
        printf("컴퓨터는 보를 내었고 사용자는 가위를 이겼습니다. (%d승 %d무 %d패)", win, draw, lose);
      }

      break;
    case 2:
      if (solution == 1)
      {
        win++;
        printf("컴퓨터는 가위를 내었고 사용자는 바위를 내어 이겼습니다. (%d승 %d무 %d패)", win, draw, lose);
      }
      if (solution == 2)
      {
        draw++;
        printf("컴퓨터는 바위를 내었고 사용자는 바위를 비겼습니다. (%d승 %d무 %d패)", win, draw, lose);
      }
      if (solution == 3)
      {
        lose++;
        printf("컴퓨터는 보를 내었고 사용자는 바위를 졌습니다. (%d승 %d무 %d패)", win, draw, lose);
      }

      break;
    case 3:
      if (solution == 1)
      {
        lose++;
        printf("컴퓨터는 가위를 내었고 사용자는 보를 내어 졌습니다. (%d승 %d무 %d패)", win, draw, lose);
      }
      if (solution == 2)
      {
        win++;
        printf("컴퓨터는 바위를 내었고 사용자는 보를 이겼습니다. (%d승 %d무 %d패)", win, draw, lose);
      }
      if (solution == 3)
      {
        draw++;
        printf("컴퓨터는 보를 내었고 사용자는 보를 비겼습니다. (%d승 %d무 %d패)", win, draw, lose);
      }
      break;
    case 4:
      printf("프로그램이 종료되었으며 지금까지의 전적은 %d승 %d무 %패입니다.", win, draw, lose);
      return 0;
    }
  }

  return 0;
}
