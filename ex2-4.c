/*
����4. �����Կ� Ű�� �Է¹޾� ��ü��������(BMI)�� ���ϴ� C���α׷��� 
�ۼ��Ͽ� ���ÿ�. ��, bmi = ������(kg)/Ű(m)�� �����̸� 
bmi�� 20.0 �̻��̰� 25.0 �̸��̸� "ǥ��ü���Դϴ�.", 
�� �ܿ��� "ü�߰����� �ʿ��մϴ�."��� �����.
- ��¿� -
�̸��� �Է��ϼ��� : ȫ�浿
�����Ը� �Է��ϼ��� (kg) : 45(70)
Ű�� �Է��ϼ��� (m) : 1.68(1.75)
ȫ�浿���� bmi�� 15.9(22.9)�̸� ü�߰����� �ʿ��մϴ�(ǥ��ü���Դϴ�).
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
  double weight, height, bmi;
  char name[10], result[20];

  printf("�̸��� �Է��ϼ��� : ");
  scanf("%s", &name);

  printf("�����Ը� �Է��ϼ��� (kg) : ");
  scanf("%lf", &weight);

  printf("Ű�� �Է��ϼ��� (m) : ");
  scanf("%lf", &height);

  bmi = weight / (height * height);

  if (20 <= bmi && bmi < 25)
  {
    strcpy(result, "ǥ��ü���Դϴ�.");
  }
  else
  {
    strcpy(result, "ü�߰����� �ʿ��մϴ�.");
  }
  printf("%s���� bmi�� %.1lf�̸� %s\n", name, bmi, result);
}