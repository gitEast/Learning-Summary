[网站](https://www.liaoxuefeng.com/wiki/1022910821149312)

## 对象
```javascript
var xiaoming = {
  name: '小明'
}
console.log(xiaoming.age) // undefined
xiaoming.age = 18 // 新增一个age属性
console.log(xiaoming.age) // 18
delete xiaoming.age // 删除age属性
console.log(xiaoming.age) // undefined
delete xiaoming.school // 删除不存在的属性，不会报错
/** 判断对象是否拥有某一属性 */
console.log('name' in xiaoming) // true
console.log('toString' in xiaoming) // true toString存在于Object对象中，所有的对象最终都会在原型链上指向Object，因此继承得到toString
console.log(xiaoming.hasOwnProperty('name')) // true
console.log(xiaoming.hasOwnProperty('toString')) // false
```

## 循环
### for...in...
```javascript
var person = {
  name: 'East',
  age: 18,
  gender: 'female'
}
for (var item in person) {
  console.log(item) // 'East', 'age', 'female'
}
/** hasOwnProperty() → 过滤掉对象继承的属性 */
for (var item in person) {
  if (person.hasOwnProperty(item)) {
    console.log(item) // 'East', 'age', 'female'
  }
}

/** 数组的索引为对象 */
var arr = ['董卿', '周涛', '中国中央电视台']
for (let i in arr) {
  console.log(arr[i]) // '董卿' '周涛' '中国中央电视台'
}
```

## Map -- ES6新增的数据类型
**重点看哈，一直没接触过**
1. js中默认对象的表达方式即`{}`，键值对结构
2. Map也是`{}`键值对，但键可以是其他类型，不一定是字符串
3. Map具有极快的查找速度（例子有点扯）
4. 
```javascript
const m = new Map([['test', 'test']])
m.set('git', 'gitHub')
m.set('py', 'python')
m.set('js', 'JavaScript')
console.log(m.has('git')) // 是否存在key'git'：true
console.log(m.get('py')) // 'python'
m.delete('js') // 删除
console.log(m.get('js')) // undefined
```

## Set -- ES6新增的数据类型
**重点看哈，一直没接触过**
1. 与Array相似
2. 元素不可重复
```javascript
var s1 = new Set() // 空Set
var s2 = new Set(['git', 'py', 'js'])
s2.add(25)
console.log(s2) // ['git', 'py', 'js', 25]
s2.add('git')
console.log(s2) // ['git', 'py', 'js', 25]
s.delete('git')
console.log(s2) // ['py', 'js', 25]
```

## iterable
**这个也不会啊！！！**
1. `for...in`遍历对象的属性
2. `for...of`遍历对象本身的元素
3. 引入iterable后使用的forEach简直完美！（详情请见test.js文件的12-16行）
4. forEach只能在Array里用，对象不行的，Map可以哈

## 函数
### 关键字`arguments`
1. arguments类似于Array，但不是Array，不能使用forEach
2. arguments只在函数内部起作用，并且永远指向调用函数时传入的所有参数
3. 可以通过arguments的长度判断传入多少个参数
4. 详情：test.js 27-43行

### 关键字`rest`
1. arguments会取到所有的参数，而rest只会取到剩余的参数，类型为Array
2. 使用格式`function fn(x, y, ...rest)`
3. 详情：test.js 45-55行

## this
<!-- 好耶！到this了 -->
1. 复杂的this，但是这里的不复杂，不看了，以后看coderwhy的好了
### apply
1. 指定函数的this指向对象，函数自带方法
2. 用法：`fn.apply(object, [])`，前者为this指向对象，后者格式Array为传入参数
3. 详情：test.js 57-72行

### call
1. 与apply作用相同
2. 用法：`fn.apply(object, 1, 2, 3)`，参数按顺序传入

## 高阶函数
1. 定义：能够接收另一个函数作为参数的函数，叫做高阶函数
### map()
1. 定义在Array中，并返回一个新的数组
2. 用法：`arr.map(fn)`
3. 详情：test.js 74-86行

### reduce()
1. 定义在Array中，并返回一个结果
2. 用法：`arr.reduce(fn(x, y) {...})`，前者为计算结果，后者为序列的下一个元素
3. 详情：test.js 88-96行

### filter()
去重
```javascript
  let arr = ['apple', 'apple', 'banana', 'pear', 'banana']
  let r = arr.filter((fruit, index, self) => {
    return self.indexOf(fruit) === index
  })
```

### 排序 sort()
1. `arr.sort()`：按照ASCII码排序
2. 自定义排序
   ```javascript
     let nums = [10, 20, 1, 2, 3]
     // 从小到大排序
     nums.sort((x, y) => x-y)
     // 从大到小排序
   ```

### every()
每一个都满足才是true，有一个不满足就是false

### find()
返回符合条件的第一个元素，否则返回undefined

### findIndex()
返回符合条件的第一个元素的索引，否则返回-1

### forEach()
用于遍历数组

## 闭包

