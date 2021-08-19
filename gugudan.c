// 구구단 2단~9단까지 출력하여 보시오

#include <stdio.h>

void main()
{
  for (int i = 2; i < 10; i++)
  {
    printf("=== %d단 ===\n", i);
    for (int j = 1; j < 10; j++)
    {
      printf("%d * %d = %d\n", i, j, i * j);
    }
    printf("\n");
  }
}