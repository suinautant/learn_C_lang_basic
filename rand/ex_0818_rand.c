#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  srand(time(NULL));

  // 0~9 난수
  printf("\n0~9 난수\n");
  for (size_t i = 0; i < 10; i++)
  {
    printf("%d\t", rand() % 10);
  }
  // 1~10 난수
  printf("\n0~9 난수\n");
  for (size_t i = 0; i < 10; i++)
  {
    printf("%d\t", rand() % 10 + 1);
  }

  printf("\n1~100 난수\n");
  for (size_t i = 0; i < 10; i++)
  {
    printf("%d\t", rand() % 100 + 1);
  }

  printf("\n100~500 난수\n");
  for (size_t i = 0; i < 10; i++)
  {
    printf("%d\t", rand() % 401 + 101);
  }

  return 0;
}
