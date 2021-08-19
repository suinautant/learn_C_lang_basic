/*
문제3. for 반복문을 사용하여 1부터 입력한 숫자까지의 합계를 
구하는 C프로그램을 작성하여 보시오.
- 출력예 -
정수를 입력하세요 : 50
1부터 50까지의 합계는 1275입니다.
*/

#include <stdio.h>

void main()
{
  int sum = 0;
  int n;
  printf("1에서 n까지 더할 값을 입력하세요 n: ");
  scanf("%d", &n);
  for (size_t i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("1 ~ %d까지의 합계는 %d입니다.\n", n, sum);
}