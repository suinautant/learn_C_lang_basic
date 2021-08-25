/*
문제3. 출판사에서 서적에 대한 정보를 저장하기 위한 구조체를 선언하고 
구조체 배열을 이용하여 데이터를 입력 받은 후 출력하는 C프로그램을 
작성하여 보시오. 단, 구조체의 이름은 book으로 하고 
도서명(bookname), 저자(author), 페이지수(pages), 가격(price)를 멤버로 하여 
최대 50권까지 입력할 수 있으며 도서명에 "끝"를 입력하면 입력을 중지하시오.
*/

#include <stdio.h>
#include <string.h>
#define NUM 50

struct books
{
  char bookname[50];
  char author[10];
  int pages;
  int price;
};

int main(int argc, char const *argv[])
{
  struct books bookList[NUM];

  int i;
  for (i = 0; i < NUM; i++)
  {
    fflush(stdin); // 버퍼를 비운다.
    printf("%d번째 도서 입력\n\n", i + 1);
    printf("도서명 : ");
    // scanf("%[^\n]s", bookList[i].bookname);
    // gets(bookList[i].bookname);
    fgets(bookList[i].bookname, sizeof(bookList[i].bookname), stdin);
    if (strstr(bookList[i].bookname, "end") != NULL)
      break;
    printf("저자명 : ");
    fgets(bookList[i].author, sizeof(bookList[i].author), stdin);
    printf("페이지수 : ");
    scanf("%d", &bookList[i].pages);
    printf("가격 : ");
    scanf("%d", &bookList[i].price);
    printf("\n");
  }

  printf("\n\n도서 정보 출력\n\n");

  for (i = 0; i < NUM; i++)
  {
    if (strstr(bookList[i].bookname, "end") != NULL)
      break;
    printf("%d번째 도서 출력\n", i);
    printf("도서명 : %s\n", bookList[i].bookname);
    printf("저자명 : %s\n", bookList[i].author);
    printf("페이지수 : %d\n", bookList[i].pages);
    printf("가격 : %d\n", bookList[i].price);
    printf("==================\n\n");
  }

  return 0;
}
