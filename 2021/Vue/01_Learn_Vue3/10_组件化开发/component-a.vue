<!--
 * @Author: your name
 * @Date: 2021-05-23 13:46:07
 * @LastEditTime: 2021-05-23 13:47:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning-Summary\2021\Vue\10_组件化开发\component-a.vue
-->
<template>
  <div>
    <h2>{{title}}</h2>
    <p>{{desc}}</p>
    <button @click="btnClick">按钮点击</button>
  </div>
</template>
<script>
export default {
  data() {
    return {
      title: '我是标题',
      desc: '我是内容，哈哈哈'
    }
  },
  methods: {
    btnClick() {
      console.log('按钮的点击事件');
    }
  },
}
</script>
<style scoped>
  
</style>
