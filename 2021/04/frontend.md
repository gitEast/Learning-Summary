# Frontend基础知识

## Web标准
+ 定义：制作网页要遵循的规范。
+ 分三个方面：
  - 结构标准  HTML
  - 表现标准 CSS
  - 行为标准 JS

## 浏览器
+ 分成两大部分
  - 渲染引擎（即浏览器内核）
    * 解析HTML与CSS，决定浏览器如何显示网页的内容与页面的格式信息
    * 读取网页内容，计算网页的显示方式并显示在页面上
    * 是浏览器兼容性问题出现的根本原因
  - JS引擎（即JS解释器）
    * 浏览器本身并不会执行JS代码，通过内置JavaScript引擎来执行JS代码
    * 执行代码时逐行解释每一句源码，然后由计算机执行<!-- JavaScript是脚本语言 -->

## 编辑器
VS Code无脑吹，谢谢

## HTML概念
1. 全称：HyperText Markup Language，超文本标记语言
2. **注意**：HTML不是一种编程语言，而是一种描述性的标记语言
   1. 标记语言是一套标记标签。网页是由网页元素组成的，这些元素由HTML标签描述出来，然后通过浏览器解析，就可以展示给用户看了
   2. 编程语言是有编译过程的，而标记语言没有，HTML标签是直接由浏览器解析执行的
3. HTML是负责描述文档语义的语言
   1. 例：`<h1>`标签有什么用？给文本增加主标题的语义
4. 关于XHTML：Extensible Hypertext Markup Language，可扩展超文本标记语言。XHTML与HTML4.0的标记基本上一样，但它更严格、更纯净。

## HTML的专有名词
+ 网页：由各种标记组成的一个页面就叫网页
+ 主页（首页）：一个网站的起始页面或者导航页面
+ 标记：也叫标签，有开始标记和结束标记
+ 元素：`<p>1345</p>`称为元素
+ 属性：给每一个标签所做的辅助信息
+ XHTML：符合XML语法标准的HTML
+ DHTML：dynamic，动态的JavaScript + CSS + HTML合起来就是一个DHTML
+ HTTP：超文本传输协议。用来规定客户端浏览器和服务端交互时数据的一个格式。SMTP：邮件传输协议，FTP：文件传输协议

## HTML结构详解
1. 文档声明头 DocType Declaration：告知浏览器文档使用哪种HTML或XHTML规范
2. 页面语言 lang：`<html lang="en">`，英语，zh-CN为中文
3. 头标签 head
   1. 网页的head标签里面，表示的是页面配置，有什么配置？字符集、关键词、页面描述、页面标题、IE适配、视口、iPhone小图标等等
   2. 头标签内部常见的标签：
      1. `<title>`：标题
      2. `<base>`：为页面上的所有链接规定默认地址或默认目标
      3. `<meta>`：提供有关页面的基本信息
         1. 字符集charset：`<meta http-equiv="Content-Type" content="text/html;charset=UTF-8">`，网页编码方式
         2. 视口viewport：`<meta name="viewport" content="width=device-width, initial-scale=1.0">`，`width=device-width`表示视口宽度等于屏幕宽度
         3. 定义关键词：`<meta name="Keywords" content="网易,邮箱,游戏,新闻,体育,娱乐,女性,亚运,论坛,短信" />`，告诉搜索引擎这个网页是干嘛的，能够提供搜索命中率
         4. 定义页面描述：`<meta name="Description" content="网易是中国领先的互联网技术公司，为用户提供免费邮箱、游戏、搜索引擎服务，开设新闻、娱乐、体育等30多个内容频道，及博客、视频、论坛等互动交流，网聚人的力量。" />`，SEO搜索引擎优化
         5. 跳转：`<meta http-equiv="refresh" content="3;http://www.baidu.com">`，3秒后跳转到百度页面
      4. `<link>`：定义文档与外部资源的关系
      5. `<body>`：用于定义HTML文档所要显示的内容，也成为主题标签

## 计算机编码介绍
外文不管了，直接看中文：
+ UTF-8：字多，有各种国家的语言，但是保存尺寸大，文件臃肿
+ gb2312：字少，只用中文和少数外语和符号，但是尺寸小，文件小巧，速度快

## HTML的规范
+ HTML对换行不敏感，对tab不敏感，只在乎嵌套关系
+ 空白折叠现象
+ 标签要严格封闭

**以下正式进入HTML内容：**

### HTML标签等级
+ 文本级标签：p、span、a、b、i、u、em，只能放文字、图片、表单元素
+ 容器级标签：div、h系列、li、dt、dd，可以放任何东西

### 排版标签
+ 标题标签`<h1>`至`<h6>`：具有align属性，属性值为left、center、right
+ 段落标签`<p>`：具有align属性，属性值为left、center、right
+ 水平线标签`<hr />`：视觉上将文档分割各个部分，使得文档结构清晰、层次分明
  - align：left、center、right
  - size：设定线条粗细，以像素为单位，默认为1
  - width：设定线条长度，绝对值为像素，相对值为百分比
  - color：设置线条颜色
  - noshade：不要阴影，设定线条为平面，若没有这个属性则表明线条具阴影或立体
+ 换行标签`<br>`：强制换行
+ `<div>`：具有align属性，属性值为left、center、right
+ `<span>`
+ `<center>`：水平居中，HTML5不建议使用
+ 预定义（预格式化）标签`<pre>`：将保留标签内部所有的空白字符（空格、换行符），原封不动地输出结果（告诉浏览器不要忽略空格和空行）。

### 字体标签
+ 特殊字符（转义字符）
+ 上标`<sup>`
+ 下标`<sub>`

### 超链接
+ 外部链接：`<a href="http://www.baidu.com" target="_blank">点我点我</a>`
+ 锚链接：`<a href="a.html#name1">回到顶部</a>`
+ 邮件链接：`<a href="mailto:xxx@163.com">点击进入我的邮箱</a>`，点击之后，会弹出outlook，作用不大