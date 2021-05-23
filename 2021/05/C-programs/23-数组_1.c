/*
 * @Author: your name
 * @Date: 2021-05-23 20:09:47
 * @LastEditTime: 2021-05-23 20:14:05
 * @LastEditors: Please set LastEditors
 * @Description: 数组认识
 * @FilePath: \Learning-Summary\2021\05\C-programs\23-数组_1.c
 */
#include <stdio.h>

int main(void)
{
  int a[5]; //a[0]是第一个元素
  // int a[3][4];
  int b[5];
  printf("%#X\n", &a[0]);
  printf("%#X\n", &a);

  return 0;
}
