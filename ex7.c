/* ����7.�Ʒ��� ���� ����ϴ� C���α׷��� �ۼ��Ͻÿ�.
- ��¿� -
    Ű(cm) �� �Է��ϼ��� : 180 
    ������(kg) �� �Է��ϼ��� : 75 
    
    �Է��Ͻ� Ű�� 180cm�̰� �����Դ� 75kg�Դϴ�. */
#include <stdio.h>

void main()
{
  int height;
  int weight;

  printf("Ű(cm) : ");
  scanf("%d", &height);
  printf("������(kg) : ");
  scanf("%d", &weight);
  printf("�Է��Ͻ� Ű�� %d�̸� �����Դ� %dkg�Դϴ�.", height, weight);
}