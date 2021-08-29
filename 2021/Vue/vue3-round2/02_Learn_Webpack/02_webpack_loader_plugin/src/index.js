/*
 * @Author: your name
 * @Date: 2021-08-28 17:04:08
 * @LastEditTime: 2021-08-28 18:07:37
 * @LastEditors: Please set LastEditors
 * @Description: webpack 打包其他资源和插件使用
 * @FilePath: \02_webpack_loader_plugin\src\index.js
 */
// 图片
import nhlt from "./imgs/nhlt.jpg";
import zznh from "./imgs/zznh.png";
// import "./css/bgi.css";

const nhltImg = document.createElement("img");
nhltImg.src = nhlt;

// 设置为背景图片
// const zznhImg = document.createElement("div");
const zznhImg = document.createElement("img");
zznhImg.src = zznh;

document.body.appendChild(nhltImg);
document.body.appendChild(zznhImg);
