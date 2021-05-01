/*
 * @Author: your name
 * @Date: 2021-05-01 13:07:27
 * @LastEditTime: 2021-05-01 13:24:58
 * @LastEditors: Please set LastEditors
 * @Description: 素数判断
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-1.c
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
  int n;
  int flag = 0;
  printf("请输入一个正整数：");
  scanf("%d", &n);
  int sqrtn = (int)(sqrt(n)) + 1;
  for (int i = 2; i < sqrtn; i++)
  {
    // 判断能否被sqrtn及以下的数整除
    if (n % i == 0)
    {
      // 可以被整除
      flag = 1;
      break;
    }
  }
  if (flag)
  {
    printf("%d并不是素数", n);
  }
  else
  {
    printf("%d确实是素数", n);
  }
  return 0;
}

/** 总结
 * 1. 判断是否为素数可以用开平方数计算，少了一半的计算量
 * 2. C语言无法定义string与bool类型（我怎么不记得？？？）
 * 3. 素数计算要从2开始，不然1永远作为因数，导致所有数字都是非素数
 */
