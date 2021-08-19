/*
문제4. 몸무게와 키를 입력받아 신체질량지수(BMI)를 구하는 C프로그램을 
작성하여 보시오. 단, bmi = 몸무게(kg)/키(m)의 제곱이며 
bmi가 20.0 이상이고 25.0 미만이면 "표준체중입니다.", 
그 외에는 "체중관리가 필요합니다."라고 출력함.
- 출력예 -
이름을 입력하세요 : 홍길동
몸무게를 입력하세요 (kg) : 45(70)
키를 입력하세요 (m) : 1.68(1.75)
홍길동님의 bmi는 15.9(22.9)이며 체중관리가 필요합니다(표준체중입니다).
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
  double weight, height, bmi;
  char name[10], result[20];

  printf("이름을 입력하세요 : ");
  scanf("%s", &name);

  printf("몸무게를 입력하세요 (kg) : ");
  scanf("%lf", &weight);

  printf("키를 입력하세요 (m) : ");
  scanf("%lf", &height);

  bmi = weight / (height * height);

  if (20 <= bmi && bmi < 25)
  {
    strcpy(result, "표준체중입니다.");
  }
  else
  {
    strcpy(result, "체중관리가 필요합니다.");
  }
  printf("%s님의 bmi는 %.1lf이며 %s\n", name, bmi, result);
}