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
2. Map也是`{}`键值对，但键必须是字符串
3. Map具有极快的查找速度（例子有点扯）
```javascript
const m = new Map()
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

## 3
