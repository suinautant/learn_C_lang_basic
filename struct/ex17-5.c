#include <stdio.h>

struct vision
{
  double left;
  double right;
};

struct vision exchange(struct vision r);

int main(int argc, char const *argv[])
{
  struct vision robot;
  printf("시력 입력 : ");
  scanf("%lf%lf", &robot.left, &robot.right);
  printf("[시력] 입력값 왼쪽 : %.1lf / 오른쪽 :  %.1lf\n", robot.left, robot.right);
  robot = exchange(robot);

  printf("[시력] 교환값 왼쪽 : %.1lf / 오른쪽 :  %.1lf\n", robot.left, robot.right);
  return 0;
}

struct vision exchange(struct vision r)
{
  double t;
  t = r.left;
  r.left = r.right;
  r.right = t;
  return r;
}