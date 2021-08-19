/*
문제6. for 반복문을 사용하여 3명의 점수를 입력받아 총점과 평균을 구하는 C프로그램을 작성하여 보시오.
- 출력예 -
1번 학생의 점수를 입력하세요 : 60
2번 학생의 점수를 입력하세요 : 70
3번 학생의 점수를 입력하세요 : 80
3명의 점수 합계는 210점이고 평균은 70.00점입니다.
*/

#include <stdio.h>

void main()
{
  int sum = 0;
  double avg;
  int countStudent = 0;
  int n;

  for (size_t i = 1; i <= 3; i++)
  {
    printf("%d번 학생의 점수를 입력하세요 : ", i);
    scanf("%d", &n);
    sum += n;
    countStudent++;
  }
  avg = (double)sum / countStudent;
  printf("%d명의 점수 합계는 %d이고 평균은 %.2lf점입니다", countStudent, sum, avg);
}