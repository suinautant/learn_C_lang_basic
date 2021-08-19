/*
문제3. 5명의 성적을 차례대로 입력받아 평균점수, 최고점수, 최저점수를 
출력하는 C프로그램을 작성하여 보시오. ★★★★★
- 출력예 -
5명의 성적을 차례대로 입력하세요 : 60 50 100 90 70
5명의 평균점수 : 74.0점 / 최고점수 : 100점 / 최저점수 : 50점
*/

#include <stdio.h>
#define NUM 5

int main()
{
  int score[NUM], sum = 0, max = 0, min = 100, i;
  double avg;

  printf("5명의 성적을 차례대로 입력하세요 : ");

  for (i = 0; i < NUM; i++)
  {
    scanf("%d", &score[i]);
    sum += score[i];
    if (min > score[i])
      min = score[i];
    if (max < score[i])
      max = score[i];
  }
  avg = (double)sum / NUM;
  printf("\n");
  printf("5명의 평균점수 : %.1lf점 / 최고점수 : %d점 / 최저점수 : %d점", avg, max, min);

  return 0;
}