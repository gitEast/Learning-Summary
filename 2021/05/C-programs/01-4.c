/*
 * @Author: your name
 * @Date: 2021-05-01 16:05:14
 * @LastEditTime: 2021-05-01 16:35:20
 * @LastEditors: Please set LastEditors
 * @Description: ��λ����ɵ�������
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
  printf("������һ�����֣�");
  scanf("%d", &n);
  // ������ת�����ַ���
  itoa(n, str, 10);
  int len = strlen(str);
  int i = 0;
  while (i < len)
  {
    newStr[i] = str[2 * i];
    i++;
  }
  printf("��λ���ϵ�����ƴ�ӳɵ�����Ϊ��%s", newStr);
  return 0;
}

/** �ܽ�
 * 1. itoa()����������תΪ�ַ���
 * 2. ��Ȼ�޷������ַ��������ǿ��Զ��ַ����е�ĳһ���±��Ӧֵ���и���
 */
