#include <stdio.h>

int main(int argc, char const *argv[])
{
  FILE *ifp, *ofp;
  char name[20];
  int kor, eng, math;
  int total;
  double avg;
  int res;

  ifp = fopen("a.txt", "r");
  if (ifp == NULL)
  {
    printf("입력 파일을 열지 못 했습니다.\n");
    return 1;
  }
  ofp = fopen("b.txt", "w");
  if (ofp == NULL)
  {
    printf("출력 파일을 열지 못 했습니다.\n");
    return 1;
  }

  while (1)
  {
    res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
    if (res == EOF)
    {
      break;
    }
    total = kor + eng + math;
    avg = total / 3.0;
    fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
  }

  fclose(ofp);
  fclose(ifp);

  return 0;
}