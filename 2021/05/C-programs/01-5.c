/*
 * @Author: your name
 * @Date: 2021-05-01 16:39:01
 * @LastEditTime: 2021-05-01 16:42:42
 * @LastEditors: Please set LastEditors
 * @Description: ���ֵ�����
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-5.c
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[100];
  char newStr[100] = "";
  printf("������һ�����֣�");
  scanf("%s", str);
  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    newStr[i] = str[len - 1 - i];
  }
  printf("������������Ϊ��%s", newStr);
  return 0;
}
