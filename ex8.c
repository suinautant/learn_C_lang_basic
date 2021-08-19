정수 2개를 입력하세요 : 10 20 두 개의 정수 10과 20의 합은 30입니다. * /

#include <stdio.h>

    void main()
{
  int no1, no2;

  printf("정수 2개를 입력하세요 : ");
  scanf("%d %d", &no1, &no2);
  int sum = no1 + no2;

  printf("두 개의 정수 %d과 %d의 합은 %d입니다.", no1, no2, sum);
}