/*
 * @Author: your name
 * @Date: 2021-05-20 23:23:53
 * @LastEditTime: 2021-05-20 23:55:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning-Summary\2021\Vue\08_综合案例\index.js
 */
Vue.createApp({
  template: '#my-app',
  data() {
    return {
      books: [
        {
          name: '房思琪的初恋乐园',
          date: '1973-11-17',
          price: 1117,
          count: 1
        },
        {
          name: '刀锋',
          date: '1973-05-20',
          price: 520,
          count: 1
        },
        {
          name: '百年孤独',
          date: '1900-01-01',
          price: 190,
          count: 1
        },
        {
          name: '第二性',
          date: '1949-10-01',
          price: 194,
          count: 1
        }
      ]
    }
  },
  computed: {
    totalPrice() {
      let finalPrice = 0
      for (let book of this.books) {
        finalPrice += book.count * book.price
      }
      return '￥' + finalPrice
    },
    // 对价格做处理
    filterBooks() {
      return this.books.map(item => {
        let newItem = Object.assign({}, item)
        newItem.price = '￥' + newItem.price
        return newItem
      })
    }
  },
  methods: {
    increment(index) {
      console.log('索引值：' + index);
      this.books[index].count++
    },
    decrement(index) {
      this.books[index].count--
    },
    removeBook(index) {
      this.books.splice(index, 1)
    },
    formatPrice(price) {
      return '￥' + price
    }
  }
}).mount('#app')
