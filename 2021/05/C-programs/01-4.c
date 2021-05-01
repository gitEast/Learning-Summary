/*
 * @Author: your name
 * @Date: 2021-05-01 16:05:14
 * @LastEditTime: 2021-05-01 16:35:20
 * @LastEditors: Please set LastEditors
 * @Description: 奇位数组成的新数字
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-4.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n;
  char str[100];
  char newStr[100] = "";
  printf("请输入一个数字：");
  scanf("%d", &n);
  // 将数字转换成字符串
  itoa(n, str, 10);
  int len = strlen(str);
  int i = 0;
  while (i < len)
  {
    newStr[i] = str[2 * i];
    i++;
  }
  printf("奇位数上的数字拼接成的数字为：%s", newStr);
  return 0;
}

/** 总结
 * 1. itoa()函数将数字转为字符串
 * 2. 虽然无法更改字符串，但是可以对字符串中的某一个下标对应值进行更改
 */
