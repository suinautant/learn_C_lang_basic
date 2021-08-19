/*
문제2.정수값을 입력했을때 홀수, 짝수를 판별하는 C프로그램을 작성하시오.
- 출력예 -
 정수값을 입력하세요 : 20(15)
 입력하신 숫자는 20(15)이며 짝수(홀수) 입니다.
*/

#include <stdio.h>
#include <string.h>

void main()
{
  int num;
  char result[20];

  printf("정수값을 입력하세요 : ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    strcpy(result, "짝수");
  }
  else
  {
    strcpy(result, "홀수");
  }
  printf("입력하신 숫자는 %d이며 %s입니다.", num, result);
}