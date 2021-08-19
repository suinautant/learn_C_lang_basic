/*
문제5. for 반복문을 사용하여 아래 출력예와 같이 C프로그램을 작성하여 보시오.
- 출력예 -
1부터 10까지의 홀수의 곱은 945입니다.
*/

#include <stdio.h>

void main()
{
  int mul = 1;
  int n;
  printf("1에서 n까지 곱할 값을 입력하세요 n: ");
  scanf("%d", &n);
  for (size_t i = 1; i <= n; i++)
  {
    if (i % 2 == 1)
      mul *= i;
  }
  printf("1 ~ %d까지 홀수의 곱은 %d입니다.\n", n, mul);
}