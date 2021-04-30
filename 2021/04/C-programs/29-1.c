/*
 * @Author: your name
 * @Date: 2021-04-29 22:19:46
 * @LastEditTime: 2021-04-29 22:42:58
 * @LastEditors: Please set LastEditors
 * @Description: 成绩等级
 * @FilePath: \Learning-Summary\2021\04\C-programs\29-1.c
 */
#include <stdio.h>

int main(void)
{
  int score;
  printf("请输入您的分数：");
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
 * 总结
 *   1. 就真的很神奇，UTF-8的编码格式，我的中文输出出了问题，英文大写字母也出问题，这一定不是真的UTF-8
 *   2. 然后我换成了GBK，绝了，文件中的中文乱了码，我改了，再运行，没事儿了
 *   3. 再换回UTF-8，文件中的中文再次乱码，再改，英文大写字母没问题，但是中文输出有问题
 *   4. 绝了，真绝了，UTF-8居然不如GBK？？？
 */