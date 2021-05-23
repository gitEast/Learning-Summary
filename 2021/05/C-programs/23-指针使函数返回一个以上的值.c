/*
 * @Author: your name
 * @Date: 2021-05-23 19:56:11
 * @LastEditTime: 2021-05-23 20:05:48
 * @LastEditors: Please set LastEditors
 * @Description: 通过被调函数，使得主函数中不止一个变量的值发生改变
 * @FilePath: \Learning-Summary\2021\05\C-programs\23-指针使函数返回一个以上的值.c
 */
#include <stdio.h>

void changeValue(int *i, int *j)
{
  *i = 1;
  *j = 2;
}

int main(void)
{
  int a = 100;
  int b = 200;

  changeValue(&a, &b);
  printf("a = %d, b = %d", a, b);
  return 0;
}
