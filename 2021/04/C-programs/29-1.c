/*
 * @Author: your name
 * @Date: 2021-04-29 22:19:46
 * @LastEditTime: 2021-04-29 22:42:58
 * @LastEditors: Please set LastEditors
 * @Description: �ɼ��ȼ�
 * @FilePath: \Learning-Summary\2021\04\C-programs\29-1.c
 */
#include <stdio.h>

int main(void)
{
  int score;
  printf("���������ķ�����");
  scanf("%d", &score);
  if (score > 100)
  {
    printf("How could it happened!\n");
  }
  else if (score >= 90)
  {
    printf("Wonderful!\n");
  }
  else if (score >= 80)
  {
    printf("Good!\n");
  }
  else if (score >= 70)
  {
    printf("Fine.\n");
  }
  else if (score >= 60)
  {
    printf("Ok, ok.\n");
  }
  else
  {
    printf("No, nope.");
  }
  return 0;
}
/**
 * �ܽ�
 *   1. ����ĺ����棬UTF-8�ı����ʽ���ҵ���������������⣬Ӣ�Ĵ�д��ĸҲ�����⣬��һ���������UTF-8
 *   2. Ȼ���һ�����GBK�����ˣ��ļ��е����������룬�Ҹ��ˣ������У�û�¶���
 *   3. �ٻ���UTF-8���ļ��е������ٴ����룬�ٸģ�Ӣ�Ĵ�д��ĸû���⣬�����������������
 *   4. ���ˣ�����ˣ�UTF-8��Ȼ����GBK������
 */