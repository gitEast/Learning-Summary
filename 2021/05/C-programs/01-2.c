/*
 * @Author: your name
 * @Date: 2021-05-01 13:25:28
 * @LastEditTime: 2021-05-01 15:25:46
 * @LastEditors: Please set LastEditors
 * @Description: �������ж�
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-2.c
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  int flag = 0;
  char str[100];
  printf("������һ����������");
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
    printf("%s���ǻ�����", str);
  }
  else
  {
    printf("%sȷʵ�ǻ�����", str);
  }
  return 0;
}

/** �ܽ�
 * 1. ����char str[];���룬�޷���ȡ�����ַ���
 * 2. ��ȡ���Ķ�Ӧ�±꣬Ӧ����len-1-i
 */
