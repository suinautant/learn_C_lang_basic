/*
문제10. 사용자로부터 영문 소문자를 무한반복 입력받아서 영문 대문자로 
바꾸는 C프로그램을 작성하여 보시오. 
단, 사용자가 영문 소문자 'q'를 입력하면 반복문을 종료(break)하시오.
*/

#include <stdio.h>

void main()
{
  char c;
  char tmp;
  char test = 'c';
  char test2 = 'C';
  printf("c의 ASCII는 %d / C의 ASCII는 %d\n", test, test2);
  while (1)
  {
    printf("영문 소문자 입력하세요 : ");
    scanf("%c%c", &c, &tmp);
    if (c == 'q')
      break;
    printf("\n%c의 대문자는 %c입니다.\n", c, c - 32);
  }
}