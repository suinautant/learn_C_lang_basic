/*
문제11. B감귤농장에서 재배하는 감귤을 등급별로 나누어 분류하는 C프로그램을 작성하여 보시오. 
단, 등급은 크기별로 A, B, C로 나뉘며 어느 등급이더라도 10개가 되면 무한반복문을 종료시킨다.
- 출력예 -
감귤의 크기를 입력하세요 (A, B, C) : A
현재 A등급의 감귤은 1개입니다.
감귤의 크기를 입력하세요 (A, B, C) : C
현재 C등급의 감귤은 1개입니다.
*/

#include <stdio.h>

void main()
{
  int aGrade = 0;
  int bGrade = 0;
  int cGrade = 0;

  char grade;
  char tmp;

  while (1)
  {
    printf("감귤의 크기를 입력하세요 (A, B, C) : ");
    scanf(" %c", &grade);
    printf("\n");

    switch (grade)
    {
    case 'A':
      aGrade++;
      printf("현재 A등급의 감귤은 %d개입니다.\n", aGrade);
      break;
    case 'B':
      bGrade++;
      printf("현재 B등급의 감귤은 %d개입니다.\n", bGrade);
      break;
    case 'C':
      cGrade++;
      printf("현재 C등급의 감귤은 %d개입니다.\n", cGrade);
      break;
    }
    if (aGrade == 10 || bGrade == 10 || cGrade == 10)
    {
      printf("A등급 : %d / B등급 : %d / C등급 : %d \n", aGrade, bGrade, cGrade);
      break;
    }
  }
}