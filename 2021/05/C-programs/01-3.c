/*
 * @Author: your name
 * @Date: 2021-05-01 15:26:02
 * @LastEditTime: 2021-05-01 15:58:22
 * @LastEditors: Please set LastEditors
 * @Description: ʮ�������ֵĶ�������ʽ
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-3.c
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  int i;
  char str[100] = "";
  char temp[10] = "1";
  printf("������һ��ʮ�������֣�");
  scanf("%d", &i);
  while (i != 1)
  {
    if (i % 2 == 1)
    {
      // ����
      strcpy(temp, "1"); // ��"1"��ֵ��temp
      strcat(temp, str); // ��temp��str�ַ���ƴ�ӣ����ص�ֵ�洢��temp��
      strcpy(str, temp); // ��temp��ֵ��ֵ��string
      i -= 1;
    }
    else
    {
      // ż��
      strcpy(temp, "0");
      strcat(temp, str);
      strcpy(str, temp);
    }
    i /= 2;
  }
  strcpy(temp, "1");
  strcat(temp, str);
  strcpy(str, temp);
  printf("%d�Ķ�����д����%s\n", i, str);
  return 0;
}

/** �ܽ�
 * 1. C�������ַ������ɸ��ģ�ֻ��ͨ��string.h���еĺ��������޸ģ�Ӧ���ǿ��Ըĵģ����Ҳ�֪��)
 * 2. strcpy()�������ڸ�ֵ��strcat()��������ƴ��
 */
