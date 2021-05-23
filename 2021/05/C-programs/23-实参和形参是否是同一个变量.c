/*
 * @Author: your name
 * @Date: 2021-05-23 19:27:33
 * @LastEditTime: 2021-05-23 19:54:08
 * @LastEditors: Please set LastEditors
 * @Description: 交换数字
 * @FilePath: \Learning-Summary\2021\05\C-programs\23-实参和形参是否是同一个变量.c
 */
#include <stdio.h>

//swap_1函数调用完毕，i和j作为内部静态空间被释放
void swap_1(int a, int b)
{
  int t;
  t = a;
  a = b;
  b = t;
}

void swap_2(int *p, int *q)
{
  int *t;
  t = p;
  p = q;
  q = t;
}

void swap_3(int *i, int *j)
{
  int t;
  t = *i;
  *i = *j;
  *j = t;
}

int main(void)
{
  int a = 3;
  int b = 5;
  swap_1(a, b);
  printf("a = %d, b = %d\n", a, b);
  int p = 3;
  int q = 5;
  swap_2(&p, &q);
  printf("p = %d, q = %d\n", p, q);
  int i = 3;
  int j = 5;
  swap_3(&i, &j);
  printf("i = %d, j = %d\n", i, j);
  return 0;
}
