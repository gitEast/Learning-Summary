<!--
 * @Author: your name
 * @Date: 2021-10-19 10:07:52
 * @LastEditTime: 2021-10-19 15:53:33
 * @LastEditors: Please set LastEditors
 * @Description: call apply bind 方法
 * @FilePath: \2021\javascript\call-bind-apply.md
-->
# apply、call、bind
> 实现练习函数、this、调用关系，不过分考虑边界情况
  >> 实际上，各个框架的核心思想相差不大也不过分复杂，边界情况的考虑占据了代码的大部分比重

## call
1. 为方便每一个函数使用call函数，将自己实现的call函数绑定到Function的原型上`Function.property.myCall = function() {}`
2. call函数会执行调用的函数
    ```js
      Function.property.myCall = function() {
        // 函数调用myCall方法时，进行了隐式绑定
        const fn = this
        fn()
      }
    ```
3. call函数会接收参数this：myCall函数中，fn函数独立调用，this默认绑定window
    ```js
      Function.property.myCall = function(thisArg) {
        const fn = this
        thisArg.fn = fn
        // 隐式绑定
        thisArg.fn()
        delete thisArg.fn
      }

      function foo() {
        console.log('foo被调用了', this)
      }
      foo.myCall()
    ```
4. 当需要绑定的this为字符串或数字或布尔值时，无法添加属性 → 将this转为对象类型
    ```js
      Function.property.myCall = function(thisArg) {
        const fn = this
        // 对thisArg类型的边界情况措施
        thisArg = Object(thisArg)
        thisArg.fn = fn
        thisArg.fn()
        delete thisArg.fn
      }

      function foo() {
        console.log('foo被调用了', this)
      }
      foo.myCall()
    ```
5. 当thisArg为null或undefined时，this绑定 {} → window：`thisArg = thisArg? Object(thisArg): window`
6. call函数还会传入额外参数，逐一传入
    ```js
      // 剩余参数
      Function.property.myCall = function(thisArg, ...args) {
        const fn = this
        thisArg = Object(thisArg)
        thisArg.fn = fn
        thisArg.fn(...args)
        delete thisArg.fn
      }

      function foo(num1, num2) {
        console.log('foo被调用了', this, num1, num2)
      }
      foo.myCall({name: 'why'}, 20, 30)
    ```
7. 如果被调函数有返回值
    ```js
      Function.property.myCall = function(thisArg, ...args) {
        const fn = this
        thisArg = Object(thisArg)
        thisArg.fn = fn
        const result = thisArg.fn(...args)
        delete thisArg.fn

        return result
      }

      function foo(num1, num2) {
        console.log('foo被调用了', this, num1, num2)
      }
      foo.myCall({name: 'why'}, 20, 30)
    ```

## apply
```js
  Function.prototype.myApply = function(thisArg, args){
    // 获取被调函数
    const fn = this
    // this类型
    thisArg = Object(thisArg?? window)
    // this调用该函数
    thisArg.fn = fn
    // args 可能是undefined(即没有传入)
    args = args || []
    const result = thisArg.fn(...args)
    delete thisArg.fn

    return result
  }
```

## bind
```js
  function foo() {
    console.log('foo被执行', this)
  }

  function sum(num1, num2, num3, num4) {
    console.log(num1, num2, num3, num4)
  }

  /* 带参数 */
  // 1. 
  const newSum1 = sum.bind('aaa', 10, 20, 30, 40)
  newSum1()
  // 2. 
  const newSum2 = sum.bind('aaa')
  newSum2(10, 20, 30, 40)
  // 3. 
  const newSum3 = sum.bind('aaa', 10, 20)
  newSum3(30, 40)

  /* 实现bind */
  Function.prototype.myBind = function(thisArg, ...args) {
    const fn = this
    thisArg = Object(thisArg?? window)
    return function (...secondArgs) {
      thisArg.fn = fn
      var result = thisArg.fn(...args, ...secondArgs)
      delete thisArg.fn

      return result
    }
  }
```
