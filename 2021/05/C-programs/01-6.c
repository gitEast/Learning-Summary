/*
 * @Author: your name
 * @Date: 2021-05-01 22:52:06
 * @LastEditTime: 2021-05-01 22:56:03
 * @LastEditors: Please set LastEditors
 * @Description: 1到100之间的奇数之和、奇数个数、奇数的平均数
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-6.c
 */
#include <stdio.h>

int main(void)
{
  int sum = 0, count = 0, average = 0;
  for (int i = 1; i < 101; i++)
  {
    if (i % 2 == 1)
    {
      sum += i;
      count++;
    }
  }
  average = sum / count;
  printf("1到100之间的奇数之和为%d，奇数个数为%d，奇数的平均数为%d", sum, count, average);
  return 0;
}
