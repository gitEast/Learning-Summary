/*
 * @Author: your name
 * @Date: 2021-05-01 15:26:02
 * @LastEditTime: 2021-05-01 15:58:22
 * @LastEditors: Please set LastEditors
 * @Description: 十进制数字的二进制形式
 * @FilePath: \Learning-Summary\2021\05\C-programs\01-3.c
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  int i;
  char str[100] = "";
  char temp[10] = "1";
  printf("请输入一个十进制数字：");
  scanf("%d", &i);
  while (i != 1)
  {
    if (i % 2 == 1)
    {
      // 奇数
      strcpy(temp, "1"); // 将"1"赋值给temp
      strcat(temp, str); // 将temp与str字符串拼接，返回的值存储在temp中
      strcpy(str, temp); // 将temp的值赋值给string
      i -= 1;
    }
    else
    {
      // 偶数
      strcpy(temp, "0");
      strcat(temp, str);
      strcpy(str, temp);
    }
    i /= 2;
  }
  strcpy(temp, "1");
  strcat(temp, str);
  strcpy(str, temp);
  printf("%d的二进制写法：%s\n", i, str);
  return 0;
}

/** 总结
 * 1. C语言中字符串不可更改，只能通过string.h库中的函数进行修改（应该是可以改的，但我不知道)
 * 2. strcpy()函数用于赋值，strcat()函数用于拼接
 */
