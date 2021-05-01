/*
 * @Author: your name
 * @Date: 2021-04-29 22:43:22
 * @LastEditTime: 2021-05-01 13:08:44
 * @LastEditors: Please set LastEditors
 * @Description: 求最大值
 * @FilePath: \Learning-Summary\2021\04\C-programs\29-2.c
 */
#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  printf("请输入三个数，以空格隔开");
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
  printf("最大值为%d", d);
  return 0;
}
