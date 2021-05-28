/*
 * @Author: your name
 * @Date: 2021-05-27 21:14:46
 * @LastEditTime: 2021-05-27 21:40:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning-Summary\2021\Vue\02_Learn_Webpack\01_basic_webpack\webpack.config.js
 */
const path = require('path')
// CommonJS
module.exports = {
  entry: './src/index.js',
  output: {
    path: path.resolve(__dirname + '/dist'),
    filename: 'main.js'
  }
}
