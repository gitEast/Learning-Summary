/*
 * @Author: your name
 * @Date: 2021-05-01 13:25:28
 * @LastEditTime: 2021-05-01 15:25:46
 * @LastEditors: Please set LastEditors
 * @Description: 回文数判断
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-2.c
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  int flag = 0;
  char str[100];
  printf("请输入一个正整数：");
  scanf("%s", str);
  int len = strlen(str);
  for (int i = 0; i < (int)(len / 2 + 1); i++)
  {
    if (str[i] != str[len - i - 1])
    {
      flag = 1;
      break;
    }
  }
  if (flag)
  {
    printf("%s不是回文数", str);
  }
  else
  {
    printf("%s确实是回文数", str);
  }
  return 0;
}

/** 总结
 * 1. 单独char str[];代码，无法获取整个字符串
 * 2. 获取回文对应下标，应该是len-1-i
 */
