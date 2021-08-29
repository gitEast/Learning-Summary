/*
 * @Author: your name
 * @Date: 2021-08-29 13:46:00
 * @LastEditTime: 2021-08-29 15:16:49
 * @LastEditors: Please set LastEditors
 * @Description: 尝试在命令行使用 Babel
 * @FilePath: \02_Learn_Webpack\03_babel\src\index.js
 */
// const a = 1,
//   b = 2;

// const sum = (a, b) => {
//   return a + b;
// };

// const c = sum(a, b);
// console.log(c);

/** Vue 源码打包 */
import { createApp } from "vue/dist/vue.esm-bundler";

createApp({
  template: `
    <div>
      <h2>Hello, Vue!</h2>
    </div>
  `,
}).mount("#app");
