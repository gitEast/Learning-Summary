/*
 * @Author: your name
 * @Date: 2021-08-25 00:34:33
 * @LastEditTime: 2021-08-27 00:15:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \01_basic_webpack\src\index.js
 */
import sum from "./hooks/sum";

let sumNum = sum(2, 4);
console.log(sumNum);

import "./css/title.css";
import "./css/bgc.less";

const div = document.createElement("div");
div.innerHTML = "Hello Webpack";
div.className = "title";
document.body.appendChild(div);
