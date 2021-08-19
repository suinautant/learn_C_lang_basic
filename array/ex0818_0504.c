/*
문제4. 연 강수량을 배열로 초기화시키고 평균 강수량을 소수점 둘째까지 출력하는 C프로그램을 작성하시오. 
단, 연 강수량의 초기값은 80 90 30 20 30 90 150 80 20 10 30 60으로 한다.
- 출력예 -
연 평균강수량은 57.50이며 평균강수량에 미치지 못하는 횟수는 6회입니다.
*/
#include <stdio.h>

int main()
{
  int rain[] = {80, 90, 30, 20, 30, 90, 150, 80, 20, 10, 30, 60};
  int i, size, count = 0, sum = 0;
  double avg;

  size = sizeof(rain) / sizeof(rain[0]);
  printf("rain : %d / rain[0] : %d\n", sizeof(rain), sizeof(rain[0]));

  for (i = 0; i < size; i++)
  {
    sum = sum + rain[i];
  }

  avg = sum / (double)size;

  for (i = 0; i < size; i++)
  {
    if (rain[i] < avg)
      count++;
  }

  printf("연 평균강수량은 %.2lf이며 평균강수량에 미치지 못하는 횟수는 %d회입니다.\n", avg, count);

  return 0;
}
