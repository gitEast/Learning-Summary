# JavaScript高级程序设计（第三版）
## Chapter3 基本概念
### 语法
1. 区分大小写
2. 存在标识符
3. 严格模式
   1. 在脚本顶部加入`"use strict";`
   2. 支持严格模式的浏览器：IE10+ Firefox4+ Safari5.1+ Opera12+ Chrome
4. 语句：
   1. 推荐使用`;`
   2. 推荐使用`{}`

### 数据类型
1. 变量
   1. 松散型变量：每个变量仅仅是一个用于保存值的占位符而已，未经初始化，默认为undefined
   2. 不建议改变变量值的类型，但可以这么操作
   3. 存在函数作用域：局部变量 VS 全局变量
   4. 数据类型
      1. 基本（简单）数据类型：Undefined Null Boolean Number String
      2. 引用（复杂）数据类型：Object——无序名值对
      3. typeof操作符
         1. 用于检测给定变量的数据类型
         2. 返回值：`"undefined"` `"boolean"` `"string"` `"number"` `"object"` `"function"`
         3. 对于未声明变量age，`alert(age);`报错，`alert(typeof age);`返回`"undefined"`
2. Number类型
   1. Number.MIN_VALUE最小值，Number.MAX_VALUE最大值
   2. isFinite(variable)，如果返回true，则在最大与最小数值之间
   3. Infinity正无穷，-Infinity负无穷
3. NaN
   1. `NaN == NaN` 结果为false
   2. 任何数除以0，都是NaN
   3. isNaN()判断NaN为true，判断10、"10"、true为false
4. 数值转换
   1. Number()
      1. true → 1， false → 0
      2. 数字 → 数字
      3. null → 0
      4. undefined → NaN
      5. 字符串：空 → 0，普通字符串 → NaN
      6. 对象：valueOf()
   2. parseInt(variable, 进制)：只认整数
   3. parseFloat()：只认十进制，可以返回整数
5. Object
   1. 属性与方法
      1. Constructor：保存着用于创建当前对象的函数
      2. hasOwnProperty(propertyName)
      3. isPropertyOf(object)：用于检查传入的对象是否是另一个对象的原型
      4. propertyIsEnumerable(propertyName)：用于检查给定的属性能否使用for-in语句类枚举
      5. toLocaleString()：该字符串与执行环境的地区相对应
      6. toString()
      7. valueOf()：返回对象的字符串、数值或布尔值表示，通常与toString()返回值相同  

### 流控制语句

### 理解函数


## 补充知识
1. undefined派生自null的值，所以`null == undefined`结果值为true