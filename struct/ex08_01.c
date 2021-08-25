#include <stdio.h>
#include <string.h>
#define NUM 10

// 1. 구조체 선언
struct address
{
  char name[20];  // 이름
  char email[30]; // 전자우편주소
  char tel[20];   // 전화번호
  char addr[50];  // 주소
};

int main()
{
  // 2. 구조체 배열 선언
  struct address list[NUM];
  int i;

  // 3. 데이터 입력
  for (i = 0; i < NUM; i++)
  {
    printf("이름을 입력하세요 :");
    scanf("%s", list[i].name);
    if (strcmp(list[i].name, "quit") == 0)
      break;
    printf("전자우편 주소를 입력하세요 : ");
    scanf("%s", list[i].email);
    printf("전화번호를 입력하세요 : ");
    scanf("%s", list[i].tel);
    fflush(stdin); // 버퍼를 비운다.
    // getchar(); // 비쥬얼스튜디오2015 이후에서 버퍼를 비울 때 사용
    printf("주소를 입력하세요 : ");
    gets(list[i].addr);
    printf("\n");
  }
  printf("\n====== 주소록 출력 =====\n");
  // 4. 데이터 출력
  for (i = 0; i < NUM; i++)
  {
    if (strcmp(list[i].name, "quit") == 0)
      break;
    printf("%d. 이름 : %s\n", i + 1, list[i].name);
    printf("%d. 전자우편주소 : %s\n", i + 1, list[i].email);
    printf("%d. 전화번호 : %s\n", i + 1, list[i].tel);
    printf("%d. 주소 : %s\n", i + 1, list[i].addr);
    printf("\n");
  }

  return 0;
}