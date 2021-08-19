/*
문제2. 배열을 이용하여 성적을 처리하는 C프로그램을 작성하시오. 
단, 문제는 10문제이며 정답은 배열에 초기화(1 3 3 4 2 3 1 2 3 4)시키시오.
- 출력예 -
답안을 입력하세요 : 1 2 3 4 2 3 4 1 3 4
채점결과 : (정답) 7개 (오답) 3개 / 70점
*/

#include <stdio.h>
#define NUM 10

int main(int argc, char const *argv[])
{
  int answer1[NUM], answer2[NUM] = {1, 3, 3, 4, 2, 3, 1, 2, 3, 4}; // 답안, 정답
  int correct = 0, incorrect = 0, i;                               // 정답수, 오답수, 제어변수

  printf("답안을 입력하세요 : ");
  for (i = 0; i < NUM; i++)
  {
    scanf("%d", &answer1[i]);

    // printf("%d / %d\n", answer1[i], answer2[i]);
    if (answer1[i] == answer2[i])
      correct++;
    else
      incorrect++;
  }

  printf("채점 결과 : (정답) %d개 (오답) %d개 / %d점", correct, incorrect, correct * 10);

  return 0;
}
