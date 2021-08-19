// 문제2. for 반복문을 사용하여 1부터 100까지의 합계를 구하여
// 출력하는 C프로그램을 작성하여 보시오.

#include <stdio.h>

void main()
{
  int sum = 0;
  for (size_t i = 1; i <= 100; i++)
  {
    sum += i;
  }
  printf("1 ~ 100 까지의 합계는 %d입니다.\n", sum);
}