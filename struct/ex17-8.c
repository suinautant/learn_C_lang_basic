#include <stdio.h>

struct address
{
  int a;
  int b;
  int c;
};

void print_list(struct address arr[]);

int main(int argc, char const *argv[])
{
  struct address list[5] = {
      {
          1,
          1,
          1,
      },
      {
          2,
          2,
          2,
      },
      {
          3,
          3,
          3,
      },
      {
          4,
          4,
          4,
      },
      {
          5,
          5,
          5,
      },
  };

  print_list(list);

  return 0;
}

void print_list(struct address arr[])
{
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("%5d%5d%5d\n", arr[i].a, arr[i].b, arr[i].c);
  }
}
