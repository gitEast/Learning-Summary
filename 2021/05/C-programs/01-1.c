/*
 * @Author: your name
 * @Date: 2021-05-01 13:07:27
 * @LastEditTime: 2021-05-01 13:24:58
 * @LastEditors: Please set LastEditors
 * @Description: �����ж�
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-1.c
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
  int n;
  int flag = 0;
  printf("������һ����������");
  scanf("%d", &n);
  int sqrtn = (int)(sqrt(n)) + 1;
  for (int i = 2; i < sqrtn; i++)
  {
    // �ж��ܷ�sqrtn�����µ�������
    if (n % i == 0)
    {
      // ���Ա�����
      flag = 1;
      break;
    }
  }
  if (flag)
  {
    printf("%d����������", n);
  }
  else
  {
    printf("%dȷʵ������", n);
  }
  return 0;
}

/** �ܽ�
 * 1. �ж��Ƿ�Ϊ���������ÿ�ƽ�������㣬����һ��ļ�����
 * 2. C�����޷�����string��bool���ͣ�����ô���ǵã�������
 * 3. ��������Ҫ��2��ʼ����Ȼ1��Զ��Ϊ�����������������ֶ��Ƿ�����
 */
