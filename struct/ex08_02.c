/*
문제2. 결혼정보회사에서 회원데이터를 저장하기 위한 구조체를 선언하고 
구조체 배열을 이용하여 데이터를 입력 받은 후 출력하는 C프로그램을 
작성하여 보시오. 단, 구조체의 이름은 marriage로 하고 
이름(name), 나이(age), 성별(gender), 키(height)를 멤버로 하여 
최대 100명까지 입력할 수 있으며 이름에 "quit"를 입력하면 입력을 중지하시오. 
*/

#include <stdio.h>
#include <string.h>
#define NUM 100

// 1. 구조체 선언
struct marriage
{
  char name[20];   // 이름
  int age;         // 나이
  char gender[10]; // 성별
  double height;   // 키
};

int main()
{
  // 2. 구조체 배열 선언
  struct marriage list[NUM];
  int i;

  // 3. 데이터 입력
  for (i = 0; i < NUM; i++)
  {
    printf("이름을 입력하세요 :");
    scanf("%s", list[i].name);
    if (strcmp(list[i].name, "quit") == 0)
      break;
    printf("나이를 입력하세요 : ");
    scanf(" %d", &list[i].age);
    printf("성별을 입력하세요 : ");
    scanf("%s", list[i].gender);
    printf("키를 입력하세요 : ");
    scanf(" %lf", &list[i].height);
    printf("\n");
    fflush(stdin); // 버퍼를 비운다.
    // getchar(); // 비쥬얼스튜디오2015 이후에서 버퍼를 비울 때 사용
  }
  printf("\n====== 결혼정보회사 회원 출력 =====\n");
  // 4. 데이터 출력
  for (i = 0; i < NUM; i++)
  {
    if (strcmp(list[i].name, "quit") == 0)
      break;
    printf("%d. 이름 : %s\n", i + 1, list[i].name);
    printf("%d. 나이 : %d\n", i + 1, list[i].age);
    printf("%d. 성별 : %s\n", i + 1, list[i].gender);
    printf("%d. 나이 : %.1lf\n", i + 1, list[i].height);
    printf("\n");
  }

  return 0;
}