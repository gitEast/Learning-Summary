<!--
 * @Author: your name
 * @Date: 2021-05-10 20:09:09
 * @LastEditTime: 2021-05-13 23:01:19
 * @LastEditors: Please set LastEditors
 * @Description: coderwhy的Vue+TypeScript
 * @FilePath: \Learning-Summary\2021\Vue\vue3.md
-->
# Vue3

## 2021.05.10
### Vue项目通常需要掌握哪些技术栈？
1. Vue3全家桶
   1. Vue3核心语法
   2.Vue-Router路由
   3. Vuex状态管理
2. Vue3组件库
   1. AntDesign UI
   2. 
3. 可视化库
4. TypeScript
5. 其他技术栈

### 如何学习Vue3 + TypeScript
1. 官方文档
   1. 如何抓住重点
   2. 如何进行实战练习
   3. 更多作为查阅的手册
2. 看书学习 —— 你所不知道的JavaScript
   1. 书的质量必须很高
   2. 必须动手进行练习
   3. 遇到问题如何解决？
3. 开源项目
   1. 非常好的学习手段
   2. 需要具备一定的学习能力，需要一定的基础
4. 视频课程
   1. 比较适合大多数人
   2. 讲课人本身的能力
   3. 视频质量要高、听得懂、学得会

### 系统学习Vue3和TypeScript
1. 课程定位：基础 → 实战 → 原理（源码）
2. 课程核心内容
   1. Vue3核心知识深入解析
   2. Vue-Router4.x、Vuex4.x、Composition API等详细解析
   3. 基于Webpack5、Vite2分别搭建Vue3项目
   4. TypeScript基础、高级语法解析、应用、实战
   5. Vue3、Vue-Router、Vuex、Hooks、Element-Plus、Echarts、TypeScript、Axios、Less的后台管理系统项目实战
   6. 项目实战中的高级组件拆分、封装，项目架构设计等
   7. Vue3项目的打包、优化、自动化部署等
   8. Vue3相关的原理、源码解读等

## 2021.05.12 邂逅话题
### 邂逅话题
+ Vue —— 一套用于构建用户界面的**渐进式**框架
+ 前端流行三大框架
  - Angular
    * 入门门槛较高
    * 国内市场占有率较低
    * 使用TypeScript开发
  - React
    * 国内外市场占有率非常高
    * 必学框架
  - Vue
    * 国内市场占有率最高

### Vue3的变化
1. 命名为“One Piece”
2. 新特性
   1. 更好的性能
   2. 更小的包体积
   3. 更好的TypeScript集成
   4. 更优秀的API设计
3. （源码）带来的变化
   1. 通过monorepo的形式来管理源代码
      1. Mono：单个
      2. Repo：repository仓库
      3. 主要是将项目的代码存储在同一个repository中
      4. 目的：多个包本身相互独立，可以有自己的功能逻辑、功能测试等，同时又在同一个仓库下方便管理
      5. 优势：模块划分更清晰，可维护性、可扩展性更强
   2. 源代码使用TypeScript来进行重写
      1. 在Vue2.x中，使用Flow进行类型检测
      2. 在Vue3.x中，全部源码使用TypeScript重构，其本身对TypeScript的支持也更好了
4. （性能）带来的变化
   1. 使用Proxy进行数据劫持
      1. Vue2.x中，使用Object.definePorperty来劫持数据的getter和setter方法
      2. 该方法无法劫持和监听对象添加或删除属性的情况
      3. Vue2.x中提供特殊的API，如$set、$delete这类hack方法
      4. Proxy可以做到
   2. 删除一些不必要的API
      1. 移除了实例上的$on, $off, $once
      2. 移除了一些特性：filter, 内联模板
   3. 编译方面的优化
      1. 生成Block Tree, Slot编译优化, diff算法优化
5. （API）带来的变化
   1. 由Options API到Composition API
      1. 
      2. 
      3. 
      4.
   2. Hooks函数增加代码的复用性
      1. 
      2. 
      3. 
      4.

### Vue引入方式
1. CDN(Content Delivery Network / Content Distribution Network)
   1. 定义：内容分发网络，通过互相连接的网络系统，利用最靠近每个用户的服务器，更快、更可靠地将音乐、图片、视频、应用程序及其他文件发送给用户
   2. 目的：提供高性能、可扩展性及低成本地网络内容传递给用户
   3. CDN服务器，边缘节点
   4. CDN服务器分类
      1. 自己的CDN服务器
      2. 开源CDN服务器
   `<script src="https://unpkg.com/vue@next"></script>`
2. 下载和引入
   1. 下载Vue源代码
      1. 在浏览器打开网址https://unpkg.com/vue@next，得到打包后的Vue源码
      2. 复制粘贴 → 下载
   2. 引入：src引入即可

### 代码解析
#### CDN引入，最基础代码
1. 创建Vue实例
   ```javascript
   const app = Vue.createApp(对象)
   app.mount(div) // 挂载到哪一个div上
   ```
2. 挂载的div
   ```html
   <body>
      <div id="app"></div>
   </body>
   ```
3. 对象
   ```javascript
   const 对象 = {
      template: '<h1>模板代码</h1>'
   }
   ```
4. 链式调用写法
   ```javascript
   Vue.createApp(对象)
     .mount(div)
   ```
#### 计数器案例 —— 原生与Vue框架的对比
1. 原生
   ```html
   <h2 class="counter">0</h2>
   <button class="increment">+1</button>
   <button class="decrement">-1</button>
   ```
   ```javascript
   // 1. 获取所有的标签
   const counterEl = document.querySelector('counter')
   const incrementEl = document.querySelector('increment')
   const decrementEl = document.querySelector('decrement')

   // 2. 定义变量，用于存储counter的值
   let counter = 100
   counterEl.innerHTML = counter

   // 3. 监听按钮的点击
   increment.addEventListener('click', function() {
      counter++
      counterEl.innerHTML = counter
   })
   decrement.addEventListener('click', function() {
      counter--
      counterEl.innerHTML = counter
   })
   ```
2. Vue
   ```html
   <div id="app"></div>
   ```
   ```javascript
   Vue.createApp({
     template: `
       <div>
         <h2 class="counter">{{counter}}</h2>
         <button @click="increment">+1</button>
         <button @click="decrement">-1</button>
       </div>
     `,
     // data内的数据会被加入Vue的响应式系统中
     data () {
       counter: 100
     },
     // methods中方法与元素绑定
     methods: {
       increment () {
         this.counter++
       }
       decrement () {
         this.counter--
       }
     }
   }).mount('#app')
   ```
3. 分析：声明式 VS 命令式
   1. 声明式
      1. 关注what to do，由框架完成how的过程
      2. 声明模板、数据、方法等，框架进行绑定操作：实例中，模板与数据等绑定 → 实例与页面中div绑定
      3. Vue使用MVVM模式（并没有完全遵守）
         1. View：HTML
         2. Model：JavaScript
         3. ViewModel：Vue
   2. 命令式
      1. 关注how to do，一步一步告诉编译器怎么做
      2. 取到页面中的div → 变量与div绑定 → 给变量添加事件

### template属性
1. 作用：替换挂载的元素
2. 存在Vue特有的语法
3. 不同使用方式
   ```javascript
   Vue.createApp({
     template: '#app',
     // data内的数据会被加入Vue的响应式系统中
     data () {
       counter: 100
     },
     // methods中方法与元素绑定
     methods: {
       increment () {
         this.counter++
       }
       decrement () {
         this.counter--
       }
     }
   }).mount('#app')
   ```
   1. script形式
      ```javascript
      <script type="x-template" id="app">
        <div>
          <h2>{{counter}}</h2>
          <button @click="increment">+1</button>
          <button @click="decrement">-1</button>
        </div>
      </script>
      ```
   2. template形式
      ```html
      <!-- template是HTML原生标签，浏览器知道有这块代码存在，但不会渲染 -->
      <template id="app">
        <div>
          <h2>{{counter}}</h2>
          <button @click="increment">+1</button>
          <button @click="decrement">-1</button>
        </div>
      </template>
      ```

### data属性
1. 使用
   1. 在Vue2.x中，可以传入一个对象（官方推荐函数）
   2. 在Vue3.x中，只能传入函数，否则报错
2. data中返回的对象会被Vue的响应式系统劫持，之后对该对象的访问或者修改都会在劫持中被处理
   1. 因此，在template中通过{{counter}}可以访问counter，可以从对象中获取到数据
   2. 所以，修改counter的值，template中的{{counter}}也会发生改变

### methods属性
1. methods是一个对象，在该对象中定义许多方法
   1. 这些方法会被绑定到template模板中
   2. 在方法中，可以使用this关键字来直接访问data中返回对象的属性
2. 关于this
   1. 不应该使用箭头函数来定义method函数

### 其他属性
再说。

### Vue3源码调试
1. `npm install yarn -g`：vue3源码使用yarn管理
2. `yarn install`：安装依赖
3. `yarn dev`：打包代码至packages\vue\dist中
4. `"dev": "node scripts/dev.js --sourcemap"`：查看源码
   
### 题外话
1. vscode插件
   1. Remote - SSH
   2. Remote - SSH:Editing Configuration
   3. Terminal Tabs
   4. TSLint
   5. Vetur
   6. VSCode Great Icons
   7. vscode-icons
   8. vscode-styled-components
   9. Vue VScode Snippets
   10. Vue 3 Snippets
   11. Atom One Dark Theme
   12. Auto Close Tag
   13. Bookmarks
   14. Bracket Pair Colorizer
   15. browserslist
   16. Dart
   17. DotEnv
   18. Draw.io Integration
   19. EJS language support
   20. ES7 React/Redux/GraphQL
   21. ESLint
      
