/*
 * @Author: your name
 * @Date: 2021-05-28 21:19:10
 * @LastEditTime: 2021-05-30 10:00:33
 * @LastEditors: Please set LastEditors
 * @Description: 创造div
 * @FilePath: \Learning-Summary\2021\Vue\02_Learn_Webpack\02_webpack_css\src\js\element.js
 */
import '../css/style.css'
import '../css/title.less'
import img from '图片路径'
import '字体资源'

const divEl = document.createElement('div')
divEl.className = 'title'
divEl.innerHTML = 'Hello, East Wind'

// 设置背景图片
const bgDivEl = document.createElement('div')

// 设置img元素的src
const imgEl = document.createElement('img')
imgEl.src = img

// i元素
const iEl = document.createElement('div')
iEl.className = ''

document.body.appendChild(divEl)
document.body.appendChild(imgEl)
