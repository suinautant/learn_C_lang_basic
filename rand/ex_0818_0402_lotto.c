#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
  srand(time(NULL));

  printf("로또 번호 입니다.\n");
  for (size_t i = 0; i < 6; i++)
  {
    printf("%d\t", rand() % 45 + 1);
    Sleep(1000);
  }

  return 0;
}
