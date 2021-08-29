/*
 * @Author: your name
 * @Date: 2021-08-29 13:46:00
 * @LastEditTime: 2021-08-29 13:47:34
 * @LastEditors: Please set LastEditors
 * @Description: 尝试在命令行使用 Babel
 * @FilePath: \02_Learn_Webpack\03_babel\src\index.js
 */
const a = 1,
      b = 2;

const sum = (a, b) => {
  return a + b;
};

const c = sum(a, b);
console.log(c);