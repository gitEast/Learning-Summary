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

### img标签
+ 单标签语法：`<img src="URL">`
+ 能够插入的图片类型：
  - jpg(jpeg)
  - gif
  - png
  - bmp
  - ...
+ 不能往网页中插入的图片格式是：psd、ai等
+ HTML网页不是直接插入图片，而是插入图片的引用地址，所以要先把图片上传到服务器
+ src属性：
  - 相对路径
  - 绝对路径：本地路径、网络路径
+ width和height属性：如果设置图片等比例缩放，只需设置其中一个即可
+ alt属性：当图片无法显示时，代替图片显示的内容
+ title属性：提示性文本，鼠标悬停时出现
+ align属性：图片和周围文字的相对位置，属性值有center、top、bottom、left、right

### 列表标签
+ 无序列表`<ul>`
  - **强调**：ul的作用，并不是给文字增加小圆点，而是增加无序列表的语义。（别问我，我也没懂）
  - type：可选disc(实心圆点，默认)，square(实心方点)，circle(空心圆)
  - `list-style-position: inside`：给 ul 设置这个属性后，将小圆点包含在 li 元素的内部(CSS属性)
  - 应用场景：
    * 导航条
    * card
+ 有序列表`<ol>`
  - type：可选1、a、A、i、I
  - start：从几开始
+ 定义列表`<dl>`
  - `<dt>`：definition title，列表的标题，必需标签
  - `<dd>`：definition description，列表项，可加可不加
+ 列表之间可以相互嵌套 → markdown文件的+、-、*形式
+ **用什么标签，不是根据样子来决定，而是语义（语义本质上是结构）。**

### 表格标签`<title>`
[见链接](https://github.com/qianguyihao/Web/blob/master/01-HTML/07-html%E6%A0%87%E7%AD%BE%E5%9B%BE%E6%96%87%E8%AF%A6%E8%A7%A3%EF%BC%88%E4%BA%8C%EF%BC%89.md)

### 框架标签`<frameset>`、`<frame>`、`<iframe>`
[见链接](https://github.com/qianguyihao/Web/blob/master/01-HTML/07-html%E6%A0%87%E7%AD%BE%E5%9B%BE%E6%96%87%E8%AF%A6%E8%A7%A3%EF%BC%88%E4%BA%8C%EF%BC%89.md)

### 输入标签`<input>`
+ type属性：
  - `type="text"`：默认
  - `type="password"`：密码
  - `type="radio"`：单选按钮，相同name属性的单选按钮互斥，`checked`选中
  - `type="checkbox"`：多选按钮，相同name属性的多选按钮为一组，`checked`选中
  - `type="hidden"`：隐藏框，在表单中包含不希望用户看见的信息
  - `type="button"`：普通按钮
  - `type="submit"`：提交按钮，无需写value即有“提交”文字，点击后表单被提交到form标签的action属性指定的页面中
  - `type="reset"`：重置
  - `type="image"`：图片按钮，与提交按钮功能一致，但可以显示图片
  - `type="file"`：文件选择框。对文件上传需要进行安全检查，1扩展名的检查，2文件数据内容的检查
+ value属性：文本框里的默认内容
+ size属性：`size="50"`表示文本框内可以显示五十个字符
+ readonly：只读
+ disabled：只读

### 下拉列表标签`<select>`
+ `<select>`标签内部每一项都是`<option>`
  - `<option>`中的`select`属性：预选中
+ multiple属性：多选
+ size属性：`size="3"`，属性值>1，为滚动视图，默认值为1，下拉视图

### 多行文本输入框`<textarea>`
+ `rows="4"`：行数
+ `cols="20"`：列数
+ `readonly`：只读

### 表单
+ 语义化：`<fieldset>`与`<legend>`配合，区分必填信息与选填信息
+ `<label>`与其他标签结合使用，`for="id"`

### 多媒体标签
+ `<bgsound>`：
  - src：音乐文件的路径
  - loop：属性值代表播放次数，-1代表循环播放
  - 运行效果：在IE 8中播放正常，播放时网页上显示一片空白。在google浏览器中无法播放
+ `<embed>`：主要应用Netscape浏览器，不是W3C规范。视频格式可以支持 mp4、wav等，但不是所有视频格式都支持。
  - src：多媒体文件的路径
  - loop：属性值代表播放次数，-1代表循环播放
  - aotustart：默认值true
  - `volume="100"`：设置默认音量大小
  - width：指flash文件宽度
  - height：指flash文件的高度
  - quality：指flash的播放质量，质量有高有低，high与low
  - pluginspage：如果指定的flash插件不存在，则从pluginspage指定的地方进行下载
  - type：指定flash的文件格式类型
  - wmode：指定flash的背景是否可以透明，取值为transparent透明
+ `<video>`：HTML5新增
+ `<object>`：播放多媒体文件（音频、视频等）
+ `<marquee>`：滚动字幕标签

### HTML5介绍
+ 2002年的表格布局逐渐被淘汰，因为表格是用来承载数据的，不是用来划分网页结构的
#### 什么是HTML5
+ HTML5的广义概念：HTML5代表浏览器端技术的一个发展阶段，包括HTML5、CSS3、JavaScript API在内的一套技术组合。
  - 即HTML5 != HTML next version，HTML = HTML的升级版 + CSS的升级版 + JavaScript API的升级版
+ HTML5不仅只是作为HTML标记语言的一个新版本，更重要的是它制定了Web应用开发的一系列标准，成为第一个将Web作为应用开发平台的HTML语言
+ 定义了一系列新元素：新语义标签、智能表单、多媒体标签等
+ 提供一些JavaScript API，如地理定位、重力感应、硬件访问等
+ 总结：HTML5是新一代开发Web富客户端应用程序整体解决方案
  - 富客户端：具有很强的交互性和体验的客户端程序。比如说，博客、在线听歌网站、即时聊天网站

#### 语义化标签
+ 语义化的作用
  - 便于开发者阅读和写出更优雅的代码（其实就是规范——个人理解）
  - 让浏览器或是网络爬虫可以很好地解析，从而更好分析其中的内容
  - 更好的搜索引擎优化（SEO）
  - 总结：HTML的职责是描述一块内容是什么（或其意义），而不是它长什么样，它的外观应该由CSS来决定
+ 语义化的改进：
  - 增加了大量有意义的语义标签，使代码的内容更结构化、标签更语义化，更有利于搜索引擎或辅助设备理解HTML页面内容
  - 示例
  [!常见的css+div布局](../img/olderHTML.png)
  [!HTML5中的布局](../img/newHTML.png)
  - 新增的语义标签
    * `<section>`：区块
    * `<article>`：文章
    * `<header>`：页眉
    * `<footer>`：页脚
    * `<nav>`：导航
    * `<aside>`：侧边栏
    * `<figure>`：媒介内容分组
    * `<mark>`：标记
    * `<progress>`：进度
    * `<time>`：日期
+ IE8及以下版本的浏览器不支持H5和CSS3。解决办法：
  - 引入时，需要做if判断
  ```javascript
    <!--  条件注释 只有ie能够识别-->
    <!--[if lte ie 8]>
        <script src="html5shiv.min.js"></script>
    <![endif]-->
    // l：less 更小
    // t：than 比
    // e：equal 等于
    // g：great 更大
  ```