/*
 * @Author: your name
 * @Date: 2021-04-29 22:43:22
 * @LastEditTime: 2021-04-29 22:48:09
 * @LastEditors: Please set LastEditors
 * @Description: 求最大�?
 * @FilePath: \Learning-Summary\2021\04\C-programs\29-2.c
 */
#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  printf("���������������Կո����");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b)
  {
    d = a;
  }
  else
  {
    d = b;
  }
  if (d < c)
  {
    d = c;
  }
  printf("���ֵΪ%d", d);
  return 0;
}