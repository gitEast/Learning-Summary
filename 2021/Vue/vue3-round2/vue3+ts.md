<!--
 * @Author: East Wind
 * @Date: 2021-08-21 15:55:58
 * @LastEditTime: 2021-08-29 21:26:53
 * @LastEditors: Please set LastEditors
 * @Description: vue3 + ts 学习 第二遍 —— 此次要求吃透
 * @FilePath: \vue3-round2\vue3+ts.md
-->

# Vue3 + TS round2

## 01 邂逅体验 Vue3 和 Vue3 源码

### 认识 Vue

1. Vue —— 渐进式框架
2. 前端学习：
   1. JavaScript(TypeScript)
   2. Flutter
   3. Android / iOS
3. 前端框架：
   1. 国内
      1. Vue
      2. React
      3. Angular
   2. 国外
      1. React
      2. Vue
      3. Angular
4. 后端：
   1. Java
   2. Go
   3. Node

### Vue3 新特性

1. 更好的性能
2. 更小的包体积
3. 更好的 TypeScript 集成
4. 更优秀的 API 设计

### Vue3 的源码变化

1. monorepo 的形式管理源码
   1. monorepo：将多个项目代码存储在一个仓库里的软件开发策略![monorepo](./imgs/monorepo.png)
   2. 优势：
      1. 多个包本身相互独立，同时又在一个仓库下方便管理
      2. 模块划分得更加清晰，可维护性、可扩展性更强
2. TypeScript 重写代码
3. Proxy 进行数据劫持：Vue2 中使用 Object.defuneProperty
4. 删除一些不必要的 API：
   1. 实例上的 $on, $off, $once
   2. 一些特性：filter, <ins>内联模板(?)</ins>等
5. 编译方面的优化：生成 Block Tree、Slot 编译优化、diff 算法优化
6. Composition API：<-- Options API
7. Hooks 函数增加代码的复用性

### Vue3 引入

1. CDN 引入
   1. `<script src="https://unpkg.com/vue@next"></script>`
   2. CDN：
      1. 内容分发网络(Content Delivery/Distribution Network)
      2. Origin Server --> CDN Server --> User ![CDN](./imgs/CDN.jpg)
2. 下载引入
3. 通过 npm 包管理工具安装使用(webpack 时再讲)
4. Vue CLI 创建项目，并使用

### 计数器案例

- 原生 JavaScript

  ```html
  <div>
    <h2 id="counter">0</h2>
    <button id="incBtn">+1</button>
    <button id="decBtn">-1</button>
  </div>

  <script>
    // 获取元素
    const counterEl = document.querySelector("#counter");
    const incBtnEl = document.querySelector("#incBtn");
    const decBtnEl = document.querySelector("#decBtn");

    // 声明 h2 中数字的变量
    let count = 0;
    counterEl.innerHTML = count;

    // 点击按钮事件
    incBtnEl.addEventListener("click", () => {
      console.log("点击了 +1 按钮");
      count++;
      counterEl.innerHTML = count;
    });
    decBtnEl.addEventListener("click", () => {
      console.log("点击了 -1 按钮");
      count--;
      counterEl.innerHTML = count;
    });
  </script>
  ```

- Vue2

  ```html
  <div id="app"></div>

  <script src="https://unpkg.com/vue@next"></script>
  <script>
    const app = Vue.createApp({
      template: `
          <div>
            <h2>{{counter}}</h2>
            <button @click='increment'>+1</button>
            <button @click='decrement'>-1</button>
          </div>
        `,
      data() {
        return {
          counter: 0,
        };
      },
      methods: {
        increment() {
          this.counter++;
        },
        decrement() {
          this.counter--;
        },
      },
    });
    app.mount("#app");
  </script>
  ```

- Vue3

  ```html
  <div id="app"></div>

  <script src="https://unpkg.com/vue@next"></script>
  <script>
    Vue.createApp({
      template: `
          <div>
            <h2>{{count}}</h2>
            <button @click='increment'>+1</button>
            <button @click='decrement'>-1</button>
          </div>
        `,
      setup() {
        let count = Vue.ref(0);
        const increment = () => {
          count.value++;
        };
        const decrement = () => {
          count.value--;
        };

        return {
          count,
          increment,
          decrement,
        };
      },
    }).mount("#app");
  </script>
  ```

### 声明式 与 命令式

1. 声明式
   1. 程序员：what to do
   2. 框架(机器)：how
2. 命令式
   1. 程序员：how to do

### MVVM 模型

![mvvm模型](./imgs/mvvm.png)

### template 属性

1. template —— 原生 HTML 标签
2. 抽取 template 方式

   1. x-template js

      ```html
      <div id="app"></div>

      <script src="https://unpkg.com/vue@next"></script>
      <script id="hello" type="x-template">
        <div>{{ msg }}</div>
      </script>
      <script>
        Vue.createApp({
          template: "#hello",
          data() {
            return {
              msg: "hello template",
            };
          },
        }).mount("#app");
      </script>
      ```

   2. template 标签

      ```html
      <div id="app"></div>

      <template id="hello">
        <div>{{ msg }}</div>
      </template>

      <script src="https://unpkg.com/vue@next"></script>
      <script>
        Vue.createApp({
          template: "#hello",
          data() {
            return {
              msg: "hello template",
            };
          },
        }).mount("#app");
      </script>
      ```

### Vue3 源码

1. `git clone https://github.com/vuejs/vue-next.git`
2. `yarn install`
3. `yarn dev`
4. 进入 VUE-NEXT/packages/vue/examples 下创建 demo/demo.html

   ```html
   <div id="app"></div>

   <script src="../../dist/vue.global.js"></script>
   <script>
     debugger; <!-- 调试的代码 -->
     const app = Vue.createApp({
       template: `<h2>hello Vue3!</h2>`,
     });
     app.mount("#app");
   </script>
   ```

5. VUE-NEXT/package.json 修改 "dev" 脚本为 `"node scripts/dev.js --sourcemap"`
6. 打开页面进行调试
7. 太难了看不懂呜呜呜

### 课后问题

1. 为什么 methods 中不能使用箭头函数？
   1. 箭头函数的 this 是上层作用域中的 this，即 window
   2. 当 this 是 window 时，methods 中无法获取 data 返回对象中的数据
   3. this 绑定规则：[https://mp.weixin.qq.com/s/hYm0JgBI25grNG_2sCRlTA](https://mp.weixin.qq.com/s/hYm0JgBI25grNG_2sCRlTA)
2. 不使用箭头函数的情况下，this 到底指向的是什么？
   1. 指向 实例的 proxy![publicThis](./imgs/publicThis.png)

## 02 Vue3 模板语法常见的指令

### VSCode 代码片段编写

1. Preference -> User Snippets -> html.json
2. 要快捷命令编写的 文本
3. snippet generator 网站生成 json 格式
4. 粘贴进 html.json 文件

### Vue 模板语法

- 基于 HTML
- 声明式绑定 DOM 和底层组件实例的数据

1. Mustache 语法
2. v-once
3. v-text
4. v-html
5. v-pre：不解析 mustache 语法
6. v-cloak
7. v-bind 绑定属性
   1. 属性名不固定：`<div :[key]="{value}"></div>`
   2. 自定义属性：`<div v-bind="{info}"></div>` info 是对象
8. v-on 交互
   1. 一次性绑定多个事件：`<div v-on="{click: handleClick, mousemove: handleMousemove}"></div>`
   2. 参数传递：`<div @click="handleClick($event, param)"></div>`
   3. 修饰符
      1. .stop
      2. ... 感觉没必要了，基本用不到

## 03 Vue 基础-模板语法（二）

### 条件渲染

1. v-if v-else v-else-if
   1. 惰性
      1. 只有在条件为 true 时，才会渲染标签
      2. 当条件为 false 时，其判断的内容完全**不会被渲染**或**会被销毁掉**
   2. 配合 template 使用
      1. 不可见的包裹元素
      2. 最终不存在。（若使用 div，则性能会被浪费）
2. v-show
   1. 其 DOM 会被渲染，但 `display: none;`
   2. 不支持 template

### 列表渲染

- v-for
  - 数组形式：`v-for="(item, index) in arr"`
  - 对象形式：`v-for="(value, key, index) in obj"`
  - 数字形式：`v-for="(num, index) in 10"`
  - 使用 template 对多个元素进行包裹

### v-for 中的 key

#### 认识 VNode

1. Virtual Node，虚拟节点
2. VNode 的本质是一个 JavaScript 对象
3. VNode Tree
   1. 组件 or 元素 --> VNode![VNode](./imgs/VNode.png)
   2. 一大堆的元素 --> 多个 VNode --> VNode Tree --> 真实 DOM![VNode Tree](./imgs/VNode_Tree.png)

#### diff 算法

- 有 key
  - 执行 patchKeyedChildren 方法
    - 从头部开始遍历，遇到相同节点继续，不同则跳出循环![patchKeyedChildren1](./imgs/patchKeyedChildren1.png)
    - 从尾部开始遍历，相同继续，不同跳出循环![patchKeyedChildren2](./imgs/patchKeyedChildren2.png)
    - 如果最后新节点更多，则添加新节点![patchKeyedChildren3](./imgs/patchKeyedChildren3.png)
    - 如果旧节点更多，则移除旧节点![patchKeyedChildren4](./imgs/patchKeyedChildren4.png)
    - 如果中间存在不知道如何排序的位置序列，则使用 key 建立索引图，最大限度地使用旧节点![patchKeyedChildren5](./imgs/patchKeyedChildren5.png)
- 没有 key
  - 执行 patchUnkeyedChildren 方法![patchUnkeyedChildren](./imgs/patchUnkeyedChildren.png)

## 04 Vue3 的 Options API

### 复杂 data 的处理方式

- 插值语法
  - 简单的运算
  - 否则模板过重，难以维护
- methods
  - 所有 data 使用过程都会变成一个方法的调用
- computed
  - 所有 getter 和 setter 的 this 上下文自动绑定为组件实例

### computed 的用法

- `computed: { [key: string]: Function | { get: Function, set: Function } }`
  - Function:
    ```javascript
    computed: {
      myMsg() {
        return '我的' + this.msg
      }
    }
    ```
  - { get: Function, set: Function }
    ```javascript
    computed: {
      myMsg: {
        get() {
          return '我的' + this.msg
        },
        set(value) {
          console.log(value)
        }
      }
    }
    ```

### computed 源码

- computed 中的某一项 是否为函数
  - Y：对该函数绑定 publicThis，并传入 publicThis
  - N：该项的 get 是否为函数
    - Y：对该项的 get 函数绑定 publicThis，并传入 publicThis
    - N：设置该项的 get 为 () => {}
      ![computed-get](./imgs/computed-get.png)

### 认识侦听器

- 类型：`watch: { [key: string]: string | Function | Object | Array }`
  - 离谱的写法不管了...
  - `[key: string]: Function`
    ```javascript
    watch: {
      info(newInfo, oldInfo) {
        console.log('新的', newInfo, '旧的', oldInfo)
      }
    }
    ```
  - `[key: string]: Object`
    ```javascript
    watch: {
       info: {
         handler(newInfo, oldInfo) {
           console.log('新的', newInfo, '旧的', oldInfo)
         },
         deep: true, // 深度侦听
         immediate: true // 立即执行
       }
     }
    ```
- created 中写法
  ```javascript
  created() {
    this.$watch(
      'info',
      (newInfo, oldInfo) => {
        console.log('新的', newInfo, '旧的', oldInfo)
      },
      {
        deep: true,
        immediate: true
      }
    )
  }
  ```

### 购物车案例

- index.html

  ```html
  <!DOCTYPE html>
  <html lang="en">
    <head>
      <meta charset="UTF-8" />
      <meta http-equiv="X-UA-Compatible" content="IE=edge" />
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <title>Document</title>
      <link rel="stylesheet" href="./index.css" />
    </head>
    <body>
      <div id="app"></div>

      <template id="my-app">
        <template v-if="books.length >= 1">
          <table>
            <thead>
              <th></th>
              <th>书籍名称</th>
              <th>出版日期</th>
              <th>价格</th>
              <th>购买数量</th>
              <th>操作</th>
            </thead>
            <tbody>
              <template v-for="(item, index) in filterBooks">
                <tr>
                  <td>{{ index + 1 }}</td>
                  <td>{{ item.name }}</td>
                  <td>{{ item.date }}</td>
                  <td>{{ item.price }}</td>
                  <td>
                    <button
                      :disabled="item.count <= 1"
                      @click="handleDecrement(index)"
                    >
                      -
                    </button>
                    {{ item.count }}
                    <button @click="handleIncrement(index)">+</button>
                  </td>
                  <td><button @click="handleDelete(index)">移除</button></td>
                </tr>
              </template>
            </tbody>
          </table>
          <h2>总价：{{ getTotalPrice() }}</h2>
        </template>
        <template v-else>
          <div>
            <h2>购物车空了</h2>
          </div>
        </template>
      </template>

      <script src="https://unpkg.com/vue@next"></script>
      <script src="./index.js"></script>
    </body>
  </html>
  ```

- index.js

  ```javascript
  const why = {
    template: "#my-app",
    data() {
      return {
        books: [
          {
            id: 1,
            name: "算法导论",
            date: "2006-09",
            price: 85,
            count: 1,
          },
          {
            id: 2,
            name: "UNIX编程艺术",
            date: "2006-02",
            price: 59,
            count: 1,
          },
          {
            id: 3,
            name: "编程珠玑",
            date: "2008-10",
            price: 39,
            count: 1,
          },
          {
            id: 4,
            name: "代码大全",
            date: "2006-03",
            price: 128,
            count: 1,
          },
        ],
        totalPrice: 0,
      };
    },
    methods: {
      handleIncrement(index) {
        this.books[index].count++;
      },
      handleDecrement(index) {
        this.books[index].count--;
      },
      handleDelete(index) {
        this.books.splice(index, 1);
      },
      getTotalPrice() {
        let sum = 0;
        for (const item of this.books) {
          sum += item.price * item.count;
        }
        return "￥" + sum;
      },
    },
    computed: {
      filterBooks() {
        return this.books.map((item) => {
          const newItem = Object.assign({}, item); // Object.assign 只拷贝一层
          newItem.price = "￥" + newItem.price;
          return newItem;
        });
      },
    },
  };

  const app = Vue.createApp(why);
  app.mount("#app");
  ```

- index.css

  ```css
  table {
    width: 500px;
    text-align: center;
    border-collapse: collapse;
  }

  table,
  th,
  td {
    border: 1px solid #ccc;
  }

  thead {
    background-color: #eee;
  }

  th,
  td {
    padding: 5px;
  }
  ```

## 05 v-model 和注册 Vue 组件

### 前情提要

1. vue3 API：watch 的不同写法
2. 侦听数组、对象的某一项的引用，新旧值会相同，因为是引用地址
3. 一般对于深层次的侦听，选择在子组件中侦听

### 对象的引用 —— 浅拷贝 —— 深拷贝

1. 对象的引用![图解](./imgs/对象的引用.png)
2. 对象的浅拷贝![图解](./imgs/对象的浅拷贝.png)
3. 对象的深拷贝 —— 等 js 高级课程
   ```javascript
   const info = {
     name: "east",
     age: 22,
     friends: [
       {
         name: "wind",
         age: 22,
       },
     ],
   };
   // JSON 方法
   const info_copy01 = JSON.parse(JSON.stringify(info));
   // lodash 方法
   // 引入lodash
   const info_copy02 = _.cloneDeep(info);
   ```

### v-model

- v-model = (v-bind 绑定 value) + (v-on 绑定 input 事件)
- 绑定表单元素
- 修饰符
  - .lazy
  - .number
  - .trim: 去除首尾空格

### 组件化开发

- 组件化：整个页面 --> 拆分 --> 独立可复用的组件 --> 组件树 --> 整个页面
- 注册组件
  - 全局注册：`app.component(组件名，组件对象)`
  - 局部注册：`App = { ..., components: { 组件名: 组件对象 } }`

### Vue 的开发模式

> SFC --> webpack/rollup/vite 打包

- SFC 使用方式
  - Vue CLI ---- 目前 webpack
  - webpack/rollup/vite

## 06 webpack 基础打包和 css 打包

### 认识 webpack

1. 前端开发发展
   1. 模块化
   2. ES6+、TS、sass、less 等高级特性
   3. 热更新：实时地监听文件的变化，并且反映到浏览器上
   4. 将代码进行压缩、合并以及其他相关的优化
2. Webpack is a static module bundler for modern JavaScript applications.

### webapck 的使用

- 依赖于 node 环境
- 安装：npm install webpack webpack-cli -g (webpack-cli 用于命令行敲代码，脚手架中不用)
- 局部 webpack (实际项目使用)
  - `npm init`：创建 package.json 文件，用于管理项目的信息、库依赖等
  - `npm install webpack webpack-cli -D`
  - 在 root/src 下创建 index.js 文件，是 webpack 的入口文件
  - `npx webpack`
  - 在 package.json 中添加脚本：`"build": "webpack"`
  - `npm run build`

### Webpack 的配置文件

- 若修改 webpack.config.js 的文件名，则修改 "build" 脚本为 `webpack --(配置文件名)`
- 配置文件基本模板![inAndOut](./imgs/inAndOut.png)
- 添加样式编译的 loader
  - 需要用到的 loader：css-loader, style-loader, less-loader(less 中使用)
    - `npm install css-loader style-loader less-loader -D`
  - 配置文件![less](./imgs/less.png)
- PostCSS

  - 一个通过 JavaScript 来转换样式的工具
  - 进行一些 CSS 的转换和适配，比如自动添加浏览器前缀、CSS 样式的重置
  - 用到再说....不习惯

  ## 07 Webpack 打包其他资源和插件使用

  ### 图片资源

  - 使用方式
    - `background: url('路径')`
    - `<img src="路径">`
  - 可使用的 loader
    - file-loader
    - url-loader

### file-loader

- 不管了，webpack5 不推荐使用
- 而且使用`background-image: url("../imgs/zznh.png")`出现莫名其妙的问题

### url-loader

不管了，webpack5 不推荐使用

## 08 Babel 解析和 Vue 文件打包

### Babel 介绍

1. 使用 ES6+ 的语法、TypeScript、React，都离不开 Babel
2. Babel 是一个工具链，主要用于旧浏览器或者环境中将 ES6+ 代码转换为向后兼容版本的 JavaScript
3. 包括语法转换、源代码转换等

### Babel 命令行使用

- Babel 可以作为一个单独的工具使用
- 需要安装
  - @babel/core: babel 核心代码， 必须安装
  - @babel/cli: 支持命令行使用 babel 的工具
- 使用流程
  - `npm install @babel/core @babel/cli -D`
  - 编写 ES6+ 的代码![箭头函数代码](./imgs/babel_01.png)
  - `npx babel src --out-dir dist`，获取打印后的文件 dist/index.js ![babel转换后的图片](./imgs/babel_02.png)
    - `--out-dir dist`: 输出到 dist 文件夹
    - `--out-file dist/main.js`: 输出到 dist 文件夹的 main.js 中
  - Babel 转换后的文件与为转换前一样，因为没有插件
  - 转换需要对应的插件
    - @babel/plugin-transform-arrow-functions -- 箭头函数
      - `npm install @babel/plugin-transform-arrow-functions -D`
      - `npx babel src --out-file dist/arrow.js --plugins=@babel/plugin-transform-arrow-functions`![箭头函数转换](./imgs/babel_arrow.png)
    - @babel/plugin-transform-block-scoping
      - `npm install @babel/plugin-transform-block-scoping -D`
      - `npx babel src --out-file dist/arrowBlock.js --plugins=@babel/plugin-transform-arrow-functions,@babel/plugin-transform-block-scoping`![箭头函数与const转换](./imgs/babal_arrow_block.png)
  - 这样太麻烦了，使用 Babel 的预设 preset -- @babel/preset-env
    - `npm install @babel/preset-env -D`
    - `npx babel src --out-file dist/preset.js --presets=@babel/preset-env`![使用预设](./imgs/babel_preset.png)

### Babel 的底层原理

1. Babel 的工作
   1. 一种源代码(原生语言) --> 另一种源代码(目标语言)
   2. 可以将 Babel 看成是一个编译器
   3. Babel 编译器的作用就是将源代码，转换成浏览器可以直接识别的另外一段源代码
2. Babel 也拥有编译器的工作流程
   1. 解析阶段 -- parsing
   2. 转换阶段 -- transformation
   3. 生成阶段 -- code generation
   4. 用 js 写的编译器 https://github.com/jamiebuilds/the-super-tiny-compiler
3. Babel 编译器执行原理
   1. 执行阶段![图片](./imgs/babel_abstract.png)
   2. 具体工作![图片](./imgs/babel_complete.png)

### babel-loader

- 在实际开发中，我们会在构建工具中通过配置 Babel 来对其进行使用，如在 webpack 中
- 安装
  - @babel/core
  - `npm install babel-loader -D`
- 配置
  - 普通配置![普通配置](./imgs/babel_webpack_01.png)
  - 抽离配置
    - webpack.config.js![配置](./imgs/babel_webpack_02.png)
    - babel.config.js![配置](./imgs/babel_webpack_03.png)

### Vue 源码打包

1. `npm install vue@next`
2. 下次再学，累了...

## 09 devServer resolve 环境分离

### 本地服务器简介

1. 为什么需要搭建本地服务器？
   1. 之前需要 `npm run build` 和 live server 两个一起使用
   2. 搭建本地服务器后，可以实现自动编译
2. 本地服务器搭建类型
   1. webpack watch mode
   2. webpack-dev-server (常用)
   3. webpack-dev-middleware

### webpack watch

- webpack 提供 watch 模式
- 开启 watch 方式
  - 在 package.json 中添加脚本 `"watch": "webpack --watch"`
  - 在启动 webpack 命令式，添加 --watch 的标识
- watch 模式的缺点
  - 只能监听到文件的变化，不能够自动刷新浏览器

### webpack-dev-server

- 优点
  - 在不使用 live-server 的情况下，可以具备 live reloading (实时重新加载)的功能
  - 在编译后不写入任何输出文件，而是将打包后的文件保留在内存中
- 使用 webpack-dev-server
  - `npm install webpack-dev-server -D`
  - 配置文件
    ```javascript
    module.exports = {
      ...,
      target: "web"
      devServer: {
        contentBase: "./build"
      }
    }
    ```
    ```json
    srcipt: {
      "serve": "webpack serve"
    }
    ```

### 模块热替换 Hot Module Replacement HMR

- 作用：在应用程序运行过程中，替换、添加、删除模块，而不需要重新刷新整个页面
- 优势
  - 不重新加载整个页面，可以保留某些应用程序的状态不丢失
  - 只更新需要变化的内容，节省开发的时间
  - 修改了 css、js 源代码，会立即在浏览器更新，相当于直接在浏览器的 devtools 中直接修改样式
- 使用 HMR
  - 修改 webpack.config.js 的配置
    ```javascript
    devServer: {
      hot: true;
    }
    ```
  - 指定进行热替换的模块
    ```javascript
    import "./hmr.js";
    if (module.hot) {
      module.hot.accept("./hmr.js", () => {
        console.log("这个模块更新了");
      });
    }
    ```

### 框架的 HMR

- vue-loader
- React Hot Loader (已弃用) --> react-refresh

### HMR 的原理

- webpack-dev-server 会创建两个服务
  - 提供静态资源的服务 express
  - Socket 服务 net.Socket -- 长连接
    - 当服务器监听到对应的模块发生变化时，会生成两个文件 .json(manifest 文件)和 .js(update chunk)
    - 通过长连接，可以直接将这两个文件主动发送给客户端(浏览器)
    - 浏览器拿到这两个新的文件后，通过 HMR runtime 机制，加载这两个文件，并且针对修改的模块进行更新
- 原理图![HMR原理图](./imgs/HMR.png)

### host 配置

- host 设置主机位置
  - 默认值 localhost
    - === 域名
    - === 127.0.0.1
  - 0.0.0.0 -- 其他主机也可访问
    - 监听 0.0.0.0 时，在同一个网段下的主机，可以通过 ip 地址访问

* 127.0.0.1 -- 回环地址
  - 正常的数据包：应用层 -> 传输层 -> 网络层 -> 数据链路层 -> 物理层
  - 回环地址：在网络层直接被获取到了，不会经过数据链路层和物理层

### port、open、compress

1. port -- 设置监听的端口，默认 8080
2. open -- 设置是否打开浏览器，默认 false
3. compress -- 是否为静态文件开启 gzip compression，默认为 false

### Proxy

- 可用于解决跨域问题
- webpack.config.js 配置

  ```javascript
  devServer: {
    proxy: {
      '/api': {
        target: 'url',
        pathRewrite: {
          '^/api': ''
        },
        secure: false,
        changeOrigin: true
      },

    }
  }
  ```

### resolve 模块解析

- webpack 能解析三种文件路径
  - 绝对路径
  - 相对路径
  - 模块路径
    - `resolve.modules = ['node_modules']` 默认设定
- extensions 和 alias 配置
  ```javascript
  resolve: {
    // extensions
    extensions: ['.js', '.json', '.vue', '.ts'],
    // alias
    alias: {
      '@': path.resolve(__dirname, './src'),
      'js': path.resolve(__dirname, './src/js')
    }
  }
  ```

### 如何区分开发环境

- src
  - config
    - webpack.comm.config.js
    - webpack.dev.config.js
    - webpack.prod.config.js
- 修改 package.json 脚本
  - `"build": "webapck --config ./config/webpack.comm.config.js --env production"`
  - `"serve": "webpack serve --config ./config/webpack.dev.config.js"`
- **具体等我再写，现在懒得搞**
