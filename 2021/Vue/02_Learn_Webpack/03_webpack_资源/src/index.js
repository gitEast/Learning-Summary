/*
 * @Author: your name
 * @Date: 2021-05-27 20:22:08
 * @LastEditTime: 2021-05-28 21:22:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning-Summary\2021\Vue\02_Learn_Webpack\01_basic_webpack\src\index.js
 */
import {sum} from './js/math.js'
const { priceFormat } = require('./js/format.js')
import './js/element'

console.log(sum(20, 30));
console.log(priceFormat());
