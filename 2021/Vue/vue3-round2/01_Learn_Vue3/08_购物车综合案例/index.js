/*
 * @Author: East Wind
 * @Date: 2021-08-22 18:19:59
 * @LastEditTime: 2021-08-22 18:56:56
 * @LastEditors: Please set LastEditors
 * @Description: 购物车案例 - js(Vue)
 * @FilePath: \vue3-round2\01_Learn_Vue3\08_购物车综合案例\index.js
 */
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
        const newItem = Object.assign({}, item);
        newItem.price = "￥" + newItem.price;
        return newItem;
      });
    },
  },
};

const app = Vue.createApp(why);
app.mount("#app");
