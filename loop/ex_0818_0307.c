/*
문제7. for 반복문을 사용하여 1부터 100까지의 정수 중에서 4의 배수만 제외하고 
나머지 모두를 출력하는 C프로그램을 작성하여 보시오. 
*/

#include <stdio.h>

void main()
{
  for (size_t i = 1; i <= 100; i++)
  {
    if (i % 4 != 0)
      printf("%d\t", i);
  }
}