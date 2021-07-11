<!--
 * @Author: East Wind
 * @Date: 2021-07-04 20:28:49
 * @LastEditTime: 2021-07-12 06:36:29
 * @LastEditors: Please set LastEditors
 * @Description: pink的零基础html5+css3
 * @FilePath: \Learning-Summary\2021\html5+css3\summer.md
-->
# 目的
1. 品优购的静态网站
2. 精通网页布局，为学习JavaScript打下坚实基础

# 路线
1. HTML5 基础：20%
2. CSS3 基础： 50%
3. H5C3 提高： 10%
4. 项目-品优购电商网站： 20%

## LESSON01 HTML5简介
1. 网页的基本组成
   > 网站：多个网页的集合。网页：图片+文字+声音+视频等元素
2. 什么是HTML
   > HTML:超文本标记语言，not编程语言
     > 1. 加入图片、声音、动画、多媒体等内容
     > 2. 可以从一个文件跳转到另一个文件，与世界各地主机的文件连接（超级链接文本）
3. 网页的形成：前端人员开发代码 --> 浏览器显示代码（解析、渲染） --> 生成最后的Web页面
4. 常用的浏览器
   > Chrome, Firefox, IE, Microsoft Edge, Safari, Opera
     >> 浏览器内核（渲染引擎）：负责读取网页内容，整理讯息，计算网页的显示方式并显示页面
5. Web标准的三大组成部分
   1. 为什么需要Web标准？——浏览器不同，显示页面有偏差
   2. 标准构成：
      1. 结构：HTML，元素结构
      2. 表现：CSS，外观样式
      3. 行为：JavaScript，交互效果

## HTML标签
1. 标签的书写注意规范
   1. 尖括号包围关键词
   2. 双标签：成对出现
   3. 单标签
   4. 包含关系+并列关系
2. HTML骨架标签
   ```html
     <html>
       <head>
         <meta>
         <title>Title</title>
       </head>
       <body>
         <div>Content</div>
       </body>
     </html>
   ```
   1. `<!DOCTYPE>`标签
      1. 文档类型声明标签，告诉浏览器使用的HTML版本
      2. 位于文档最前面的位置
      3. 不是HTML标签
   2. lang语言
      1. language，当前文档显示的语言
      2. 英文：en； 中文：zh-CN
      3. 影响浏览器的自带翻译功能
      4. `<html lang="en">`
   3. charset字符集
      1. `<meta charset="UTF-8">`
      2. 规定HTML文档使用的字符编码类型
      3. GB2312：简体中文； BIG5：繁体中文； GBK：简体+繁体； UTF-8：万国码
3. 常用标签
   1. 标签语义：标签的含义or用途，使页面结构更清晰
   2. 标题标签：`<h1> - <h6>`
      1. 重要性递减
      2. 独占一行（块级元素），文字加粗
   3. 段落标签`<p>`
      1. 文本在一个段落中会根据浏览器窗口的大小自动换行
      2. 段落和段落之间保有空隙
   4. 换行标签`<br />`
      1. 单标签
      2. 强制换行，段落内另起一行，没有其他的间距
   5. 文本格式化标签
      1. <strong>加粗</strong>：`<strong></strong>`或者`<b></b>`，推荐使用前者
      2. <em>倾斜</em>：`<em></em>`或者`<i></i>`推荐使用前者
      3. <ins>下划线</ins>：`<ins></ins>`或者`<u></u>`，推荐使用前者
      4. <del>删除线</del>：`<del></del>`或者`<s></s>`，推荐使用前者
   6. `<div>`和`<span>`标签
      1. 没有语义，用于装内容的盒子
      2. `<div>`：独占一行，块级元素
      3. `<span>`：行内元素
3. 超链接标签
   1. `<a href="#">`
4. 写出图片标签，并说出alt和title的区别
   1. `<img src="#">`
   2. alt为图片无法加载时的说明文字
   3. title为鼠标hover图片时显示的文字
5. 相对路径的三种形式
