/* 문제7.아래와 같이 출력하는 C프로그램을 작성하시오.
- 출력예 -
    키(cm) 를 입력하세요 : 180 
    몸무게(kg) 를 입력하세요 : 75 
    
    입력하신 키는 180cm이고 몸무게는 75kg입니다. */
#include <stdio.h>

void main()
{
  int height;
  int weight;

  printf("키(cm) : ");
  scanf("%d", &height);
  printf("몸무게(kg) : ");
  scanf("%d", &weight);
  printf("입력하신 키는 %d이며 몸무게는 %dkg입니다.", height, weight);
}