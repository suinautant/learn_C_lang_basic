/*
����2.�������� �Է������� Ȧ��, ¦���� �Ǻ��ϴ� C���α׷��� �ۼ��Ͻÿ�.
- ��¿� -
 �������� �Է��ϼ��� : 20(15)
 �Է��Ͻ� ���ڴ� 20(15)�̸� ¦��(Ȧ��) �Դϴ�.
*/

#include <stdio.h>
#include <string.h>

void main()
{
  int num;
  char result[20];

  printf("�������� �Է��ϼ��� : ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    strcpy(result, "¦��");
  }
  else
  {
    strcpy(result, "Ȧ��");
  }
  printf("�Է��Ͻ� ���ڴ� %d�̸� %s�Դϴ�.", num, result);
}