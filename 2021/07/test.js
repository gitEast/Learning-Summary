/*
const m = new Map([['test', 'test']])
m.set('name', 'East')
m.set('age', 18)
m.set(20, 'female')
console.log(m);
for (let item of m) {
  // if (m.hasOwnProperty(m)) {
    console.log(item[0] + ' = ' + item[1]);
  // }
}
*/

/** 使用foreach方法 */
/*
m.forEach((value, key) => {
  console.log(key + ' = ' + value);
  // console.log('剩余的map是' + map);
})
// Result:
// test = test
// name = East
// age = 18
// 20 = female
*/

/** arguments关键字 */
/*
function fn() {
  // console.log(x)
  for (const item of arguments) {
    console.log(item);
  }
  console.log(typeof arguments);
  for (const key in arguments) {
    if (Object.hasOwnProperty.call(arguments, key)) {
      const element = arguments[key]
      console.log(element)
    }
  }
}
fn(10, 20, 30)
*/

/** rest关键字 */
/*
function fu(x, y, ...rest) {
  console.log(x, y)
  console.log(typeof rest);
  rest.forEach(item => {
    console.log(item);
  });
}
fu(10, 20, 30, 40)
*/

/** apply用法 */
/*
let person = {
  name: 'East',
  age: 18,
  birth: 2020
}
function getAge(x) {
  console.log(x);
  console.log(arguments[1]);
  let now = new Date().getFullYear()
  return now - this.birth
}
let age = getAge.apply(person, [20, 22])
console.log(age);
*/

/** map() */
/*
function pow(x) {
  return x * x
}
let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
let res01 = arr.map(pow)
let res02 = arr.map(String)
console.log(res01);
console.log(res02);
// res01: [ 1, 4, 9, 16, 25, 36, 49, 64, 81 ]
// res02: [ '1', '2', '3', '4', '5', '6', '7', '8', '9' ]
*/

/** reduce() */
let arr = [1, 3, 5, 7, 9]
let res = arr.reduce((x, y) => {
  console.log(x);
  return x + y
})
console.log('结果是' + res);
