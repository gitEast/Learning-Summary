/*
 * @Author: your name
 * @Date: 2021-04-23 21:20:38
 * @LastEditTime: 2021-04-23 21:28:00
 * @LastEditors: Please set LastEditors
 * @Description: 一元二次方程求解
 * @FilePath: \Learning-Summary\2021\04\C-programs\23-equation.c
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
  int a = 1;
  int b = 2;
  int c = 1;
  float delta; // 是被开根号的那个数
  float x1;
  float x2;

  delta = b * b - 4 * a * c;
  if (delta > 0)
  {
    // 有两个解
    delta = sqrt(delta);
    x1 = (-b + delta) / (2 * a);
    x2 = (-b - delta) / (2 * a);
    printf("该一元二次方程有两个解，x1 = %f，x2 = %f\n", x1, x2);
  }
  else if (delta == 0)
  {
    // 只有一个解
    x1 = (-b) / (2 * a);
    x2 = x1;
    printf("该一元二次方程只有一个解，x = %f\n", x1);
  }
  else
  {
    printf("抱歉，该一元二次方程没有解");
  }
}
