
#include <stdio.h>
#include <string.h>

void main()
{
  int kor, eng, math;
  double avg;
  char result[30] = "���հ�";

  printf("����, ����, ���� ������ �Է��ϼ��� : ");
  scanf("%d%d%d", &kor, &eng, &math);
  avg = (double)(kor + eng + math) / 3;

  if (avg >= 60)
  {
    strcpy(result, "�հ�");
  }
  printf("%s : %.2f\n", result, avg);
}