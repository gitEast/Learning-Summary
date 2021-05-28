/*
 * @Author: your name
 * @Date: 2021-05-28 21:19:10
 * @LastEditTime: 2021-05-28 21:56:47
 * @LastEditors: Please set LastEditors
 * @Description: 创造div
 * @FilePath: \Learning-Summary\2021\Vue\02_Learn_Webpack\02_webpack_css\src\js\element.js
 */
import '../css/style.css'
import '../css/title.less'

const divEl = document.createElement('div')
divEl.className = 'title'
divEl.innerHTML = 'Hello, East Wind'

document.body.appendChild(divEl)
