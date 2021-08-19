/*

문제8. switch~case문을 사용하여 아래 출력예와 같이 C프로그램을 작성하여 보시오.
 단, 합격여부는 3과목 중 한 과목이라도 40점 미만이거나 평균점수가 
 60점 미만이면 불합격으로 출력하며 그 외에는 합격으로 출력하시오.
- 출력예 -
전기, 전자, 프로그래밍 3과목의 성적을 입력하세요 : 90 100 30
=== 메뉴 ===
(1) 총점계산 (2) 평균계산 (3) 합격여부
3
불합격입니다.
*/
#include <stdio.h>

int main()
{
  int jeongi, jeonja, pro;
  int choice;

  while (1)
  {
    printf("전기, 전자, 프로그래밍 3과목의 성적을 입력하세요 : ");
    scanf("%d%d%d", &jeongi, &jeonja, &pro);

    do
    {
      printf("=== 메뉴 ===\n");
      printf("(1) 총점 계산 (2) 평균 계산 (3) 합격여부 (9) 점수 재입력 (0) 종료\n");
      scanf("%d", &choice);

      int sum = jeongi + jeonja + pro;
      double avg = (double)(sum) / 3;

      switch (choice)
      {
      case 1:
        printf("총점은 %d입니다.\n\n", sum);
        break;
      case 2:
        printf("평균은 %.2lf입니다.\n\n", avg);
        break;
      case 3:
        if (jeongi < 40 || jeonja < 40 || pro < 40 || avg < 60)
        {
          printf("불합격입니다. \n\n");
        }
        else
        {
          printf("합격입니다.\n\n");
        }
        break;
      case 0:
        printf("종료합니다.\n\n");
        return 0;
        break;
      default:
        break;
      }
    } while (choice != 9);
  }
  return 0;
}