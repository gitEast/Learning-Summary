/*
 * @Author: your name
 * @Date: 2021-05-27 21:14:46
 * @LastEditTime: 2021-05-28 22:02:23
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
  },
  module: {
    rules: [
      {
        test: /\.css$/, // 正则表达式，匹配.css文件
        // loader: 'css-loader' // 简便方式
        // 完整方式
        use: [
          'style-loader',
          'css-loader'
        ]
      },
      {
        test: /\.less$/,
        use: [
          'style-loader',
          'css-loader',
          'less-loader'
        ]
      }
    ]
  }
}
