<!--
 * @Author: East Wind
 * @Date: 2021-07-04 20:28:49
 * @LastEditTime: 2021-07-19 06:59:07
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

## HTML5简介
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

## HTML标签 上
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
   7. 图像标签
      1. `<img src="图像url" />` 单标签
      2. src为该标签的必须属性，用于指定图像文件的路径和文件名
      3. alt为图片无法加载时的说明文字
      4. title为鼠标hover图片时显示的文字
      5. width
      6. height
      7. border：设置图片边框，黑色，一般使用CSS解决
   8. 超链接标签
      1. `<a href="跳转目标" target="目标窗口的弹出方式">文本或图像</a>`
      2. target: _self为默认值，_blank为在新标签页中打开
      3. 链接分类：
         1. 外部链接：以http开头
         2. 内部链接：网站内部
         3. 空链接：`<a href="#"></a>`
         4. 下载链接：如果href里面地址是一个文件或者压缩包，则会下载这个文件
         5. 网页元素链接：`<a href="链接地址"><img src="某张图片" /></a>`
         6. 锚点链接：`<a href="#id"></a>`
   9. 注释标签：`<!-- 注释 -->`
   10. 特殊字符
      1. 空格：`&nbsp;`
4. <strong>路径</strong>
   1. 目录文件夹
   2. 根目录
   3. 路径区别
      1. 相对路径
      2. 绝对路径

## HTML标签 下
### 表格标签
1. 表格的主要作用：显示、展示数据，把繁杂的数据表现得很有条理
2. 基本语法
   ```javascript
     <table>
       <tr>
         <td>单元格内的文字</td>
         ...
       </tr>
       ...
     </table>
   ```
3. 表头单元格标签 `<th>`
   1. 加粗
   2. 居中
4. 表格属性：实际开发时不常用，一般通过CSS来设置
   1. align：left、center、right，文字对齐方式
   2. border："1"或""，1像素或无
   3. cellpadding：规定单元边沿与其内容之间的空白
   4. cellspacing：单元格之间的空白距离
   5. width：表格宽度
   6. height：表格高度
5. 表格结构标签
   1. 表头：`<thead>`
   2. 主体：`<tbody>`
6. 合并单元格
   1. 跨行合并：rowspan
   2. 跨列合并：colspan
   3. 合并单元格三部曲
      1. 确定 跨行 or 跨列
      2. 在目标单元格写上合并方式
      3. 删除多余的单元格

### 列表标签
1. 作用：用于布局，整齐、整洁、有序
2. 列表类型
   1. 无序列表（重点）
      1. 语法：
         ```javascript
           <ul>
             <li></li>
             <li></li>
             <li></li>
           </ul>
         ```
      2. 无序列表有自己的样式，但实际上会使用CSS修改
   2. 有序列表：`ol>li*n`
   3. 自定义列表
      1. 语法：
         ```javascript
           <dl>
             <dt>名词1</dt>
             <dd>名词1解释1</dd>
             <dd>名词1解释2</dd>
           </dl>
         ```
      2. 作用：常用于描述各个项目

### 表单标签
1. 为什么需要表单：收集用户信息
2. 表单组成
   1. 表单域
   2. 表单控件（表单元素）
   3. 提示信息
3. 表单域
   1. 定义：包含表单元素的区域
   2. `<form>`：会把它范围内的表单元素信息提交给服务器
   3. 语法：
      ```html
      <form action="url地址" method="提交方式" name="表单域名称">
         各种表单元素
      </form>
      ```
4. 表单元素
   1. `<input>`，各种type
      1. text：文本框
      2. password： 密码
      3. radio：name -> 单选按钮
      4. checkbox：复选框
      5. submit：提交按钮
      6. reset：重置按钮
      7. 其他属性：name，value，maxLength，checked
   2. `<label>`
      1. 使用for绑定一个`<input>`的id
   3. `<select>`
      1. 子标签：`<option></option>`，至少一对
      2. `selected="selected"`默认选中
   4. `<textarea>`
      1. 用于多行文本
      2. 语法
         ```html
           <textarea rows="3" cols="5">
              文本内容
           </textarea>
         ```
      3. 实际开发不用rows和cols属性

### 查阅文档
+ MDN网站


## CSS 层叠样式表
### 简介
1. 作用：美化场景
2. HTML的局限性：只关注内容的语义
3. CSS的价值：结构与样式相分离

### 语法规范
1. 组成部分
   1. 选择器
   2. 一条或多条声明，键值对形式，以分号分割不同声明

### 代码风格
1. 样式格式风格
   1. 紧凑格式
   2. 展开格式 √
2. 样式大小写：小写
3. 空格规范：冒号与属性值之间有一个空格，选择器与花括号之间也有一个空格

### 选择器
1. 作用
   1. 选择标签
   2. 为修改样式做准备
2. 分类
   1. 基础选择器：单个选择器
      1. 标签选择器
      2. 类选择器：`.类名 {}`
      3. id选择器：`#id {}`
      4. 通配符选择器：`* {}`
   2. 复合选择器
3. CSS字体属性
   1. `font-family`：字体，用逗号隔开，使用顺序 →
   2. `font-size`
      1. 单位：px
      2. 标题标签比较特殊，需要另外设定大小
   3. `font-weight`：加粗
   4. `font-style`：italic，normal
   5. 字体的复合属性：`font: font-style font-weight font-size/line-height font-family;`
4. CSS文本属性
   1. `color`：改变字体颜色
   2. `text-align`：水平对齐方式
   3. `text-decoration`：装饰文本，none | underline | overline | line-through
   4. `text-indent`：首行缩进，2em
   5. `line-height`：行间距 = 上间距 + 文本高度 + 下间距，改变的是上下间距
      1. 可以带单位也可以不带，可以是当前文字大小的倍数
5. CSS的引入方式
   1. 行内样式表
   2. 内部样式表：`<style>`标签中
   3. 外部样式表

### Emmet语法
1. 前身：Zen coding
2. 作用：提高html/css的编写速度
3. 快速生成语法
   1. HTML
   2. CSS
4. 快速格式化代码：右键 → `Format Document`

### CSS的复合选择器
1. 概念
   1. 作用：更准确更高效地选择目标元素（标签）
   2. 组成：由两个或多个基础选择器，通过不同的方式组合而成
   3. 常用的复合选择器：后代选择器、子选择器、并集选择器、伪类选择器等
2. 后代选择器
   1. 语法：`ol li {...}`，以空格隔开，后者可以是子孙元素
   2. 可以是任意基础选择器组合
3. 子选择器
   1. 只能选择子代元素，无法更下一代
   2. 语法：`.father>.son {...}`
4. 并集选择器
   1. 可以选择多组标签，同时为他们定义相同的样式，通常使用于集体声明
   2. 语法：`sister01, sister02, son {...}`
5. 伪类选择器
   1. 作用：给某些选择器添加特殊的效果
   2. 各类
      1. `:link`
      2. `:visited`
      3. `:hover`
      4. `:active`
      5. 顺序：lv ha
      6. `:focus`：一般用于`input`类表单元素

### CSS的元素显示模式
1. 什么是元素显示模式：元素以什么方式显示
   1. 块元素
   2. 行内元素
   3. 行内块元素
2. 块元素
   1. 典型：标题元素、p、ol、li、div...
   2. 特点
      1. 独占一行
      2. 宽高内外间距都可以控制
      3. 宽度默认是容器（父级宽度）的100%
      4. 是一个容器或盒子，可以在里面放行内元素或块级元素
   3. 注意：标题元素和 p 标签内不能再放其他块级元素
3. 行内元素
   1. span 是最典型的行内元素
   2. 特点
      1. 相邻行内元素在一行上，一行可以显示多个
      2. 宽高直接设置是无效的
      3. 默认宽度是它本身的宽度
      4. 行内元素只能容纳文本或者其他行内元素
4. 行内块元素
   1. 典型：img、input、td
   2. 特点
      1. 一行内可以有多个行内块元素
      2. 默认宽度是它本身的宽度
      3. 宽高内外间距都可设置
5. CSS的元素显示模式转换
   1. → 块级元素：`display: block;`
   2. → 行内元素：`display: inline;`
   3. → 行内块元素：`display: inline-block;`

### CSS背景
1. `background-color`：背景颜色， transparent(默认) | rgb | rgba | 十六进制
2. `background-image`：背景图片，none | url(图片路径)
3. `background-repeat`：背景平铺，repeat | no-repeat | repeat-x | repeat-y
4. `background-position: x y`：背景图片位置
   1. 参数代表 x 坐标和 y 坐标
   2. 参数值
      1. length：百分数 | 由浮点数 + 单位组成的长度值
      2. position：top | center | bottom | left | center | right，此时两个词的顺序不妨碍结果显示
      3. 可以 length 和 position 混合搭配，但一定是先 x 后 y
5. `background-attachment`：背景图像固定，scroll | fixed
6. 背景复合写法：背景中没有顺序要求，一般 color image repeat attachment position
7. CSS3 中背景颜色半透明：rgba写法

### CSS三大特性
1. 层叠性
   1. 选择就近属性，覆盖冲突样式
   2. 样式不冲突，不会层叠
2. 继承性
   1. 简化代码，降低CSS样式的复杂性
   2. 子元素可以继承父元素的样式（文字 + 颜色）
3. 优先级
   1. 当同一个元素指定多个选择器，就会有优先级的产生
      1. 选择器相同，则执行层叠性
      2. 选择器不同，则根据<ins><strong>选择器权重</strong></ins>执行
   2. 权重计算
      <table>
         <tr>
            <th>选择器</th>
            <th>选择器权重</th>
         </tr>
         <tr>
            <td>元素选择器</td>
            <td>0, 0, 0, 1</td>
         </tr>
         <tr>
            <td>类选择器，伪类选择器</td>
            <td>0, 0, 1, 0</td>
         </tr>
         <tr>
            <td>ID选择器</td>
            <td>0, 1, 0, 0</td>
         </tr>
         <tr>
            <td>行内样式 style=""</td>
            <td>1, 0, 0, 0</td>
         </tr>
         <tr>
            <td>!important</td>
            <td>+∞</td>
         </tr>
      </table>
      
      1. 权重由四组数据组成，但不会有进位
      2. 等级判断：从左到右依次比较
      3. 继承的权重为0

### 盒子模型
1. 看透网页布局的本质：利用CSS摆盒子
2. Box Model 组成
   1. 外边距 margin
      1. 外间距合并（塌陷）：① 为父元素定义上边框；② 为父元素定义上内边距；③ 为父元素添加 `overflow: hidden;`
   2. 边框 border
      1. `border-width`：单位px
      2. `border-style`：none | hidden | dotted | dashed | solid | double | groove | ridge | outset | inset
      3. `border-color`
      4. 边框简写没有顺序
      5. border-top | border-bottom | border-left | border-right
      6. 表格的细线边框：
         ```css
           table, td, th {
             border-collapse: collapse; /* 合并相邻的边框 */
           }
         ```
      7. `border-radius`：数值 | 百分比，`border-top-left-radius, border-top-right-radius, border-bottom-left-radius, border-bottom-right-radius`
   3. 内边距 padding
   4. 内容 content
   5. 清除内外边距
      1. 网页元素很多都带有默认的内外边距
      2. 解决办法：（ CSS 第一行代码）
         ```css
           * {
              margin: 0;
              padding: 0;
           }
         ```
      3. 行内元素尽量只设置左右内外边距
   6. 盒子阴影：`box-shadow: h-shadow v-shadow blur spread color inset`
     1. `h-shadow`：必填，水平，可负
     2. `v-shadow`：必填，垂直，可负
     3. `blur`：模糊距离（虚实）
     4. `spread`：阴影大小
     5. `color`：rgba
     6. `inset`：可以改成内阴影，默认外阴影（不可写）

#### 文字阴影 text-shadow
1. 语法：`text-shadow: h-shadow v-shadow blur color`

### CSS 浮动
1. 传统网页布局三种方式（ PC 端）
   1. 标准流（普通流 / 文档流）
      1. 多个块级元素<strong>纵向</strong>排列找<ins>标准流</ins>
   2. 浮动
      1. 多个块级元素<strong>横向</strong>排列找<ins>浮动</ins>
   3. 定位
2. 浮动 `float`
   1. 定义：用于创建浮动框，将其移动到一边，直到<strong>左边缘或右边缘</strong>触及<strong>包含块或另一个浮动框</strong>的边缘
   2. 值：left | none | right
3. 浮动特性
   1. 浮动元素会脱离标准流（脱标），不再保留原先的位置
   2. 浮动的元素会一行显示并且元素顶部对齐
   3. 浮动的元素会具有<strong>行内块元素</strong>的特性
4. 为约束浮动元素位置，一般采取策略
   1. 先用标准流的父元素排列上下位置
   2. 之后内部元素采用浮动排列左右位置
5. 浮动布局注意点
   1. (4)
   2. 浮动的盒子只会影响盒子后面的标准流，不会影响前面的标准流
   3. 子元素脱标，父元素不设置高度时高度变为0 → 清除浮动
      1. 本质：清除浮动元素造成的影响
      2. 结果：清除浮动之后，父级就会根据浮动的子盒子自动检测高度，父级有了高度，就不会影响下面的标准流了
      3. 语法：`clear: left | right | both;`
      4. 策略：闭合浮动
      5. 方法：
         + 父级添加 overflow 属性
         + 父级添加 after 伪元素
         + 父级添加双伪元素




### 垂直居中
1. 文字垂直居中：line-height = 盒子的高度
2. 块级盒子实现水平居中：
   1. 盒子必须指定宽度
   2. 盒子左右外边距都设置为 auto
3. 行内元素 or 行内块级元素居中对齐：`text-align: center;`

### 去除一行中的行内 or 行内块元素排列的空隙
1. 使用 float：`float: left;`
