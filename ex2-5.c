/*

문제5. 아래 출력예와 같이 출력하는 C프로그램을 작성하여 보시오. 
단, 영문대문자를 입력하면 소문자로 영문소문자로 입력하면 대문자로 
변환하여 출력함.
- 출력예 -
영문자를 입력하세요 : A(b)
입력한 영문자는 A(b)이며 소문자(대문자)로 변환하면 a(B)입니다.
*/
#include <stdio.h>

void main()
{
  char inChar, result[10];
  char lowA = 'a';
  char lowZ = 'z';
  char upA = 'A';
  char upZ = 'Z';
  printf("%d ~ %d / %d ~ %d\n", lowA, lowZ, upA, upZ);

  printf("영문자를 입력하세요 : ");
  scanf("%c", &inChar);

  // lower char 97~122 (a to z)
  if (inChar >= 97 && inChar <= 122)
  {
    printf("입력한 영문자는 %c이며 대문자로 변환하면 %c입니다.\n", inChar, inChar - 32);
  }
  // Upper char 65~90 (A to Z)
  else if (inChar >= 65 && inChar <= 90)
  {
    printf("입력한 영문자는 %c이며 소문자로 변환하면 %c입니다.\n", inChar, inChar + 32);
  }
}