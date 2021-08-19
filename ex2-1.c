
#include <stdio.h>
#include <string.h>

void main()
{
  int kor, eng, math;
  double avg;
  char result[30] = "불합격";

  printf("국어, 영어, 수학 점수를 입력하세요 : ");
  scanf("%d%d%d", &kor, &eng, &math);
  avg = (double)(kor + eng + math) / 3;

  if (avg >= 60)
  {
    strcpy(result, "합격");
  }
  printf("%s : %.2f\n", result, avg);
}