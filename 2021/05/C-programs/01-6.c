/*
 * @Author: your name
 * @Date: 2021-05-01 22:52:06
 * @LastEditTime: 2021-05-01 22:56:03
 * @LastEditors: Please set LastEditors
 * @Description: 1��100֮�������֮�͡�����������������ƽ����
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
  printf("1��100֮�������֮��Ϊ%d����������Ϊ%d��������ƽ����Ϊ%d", sum, count, average);
  return 0;
}
