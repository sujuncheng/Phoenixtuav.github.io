// https://vitepress.dev/guide/custom-theme
import { h } from 'vue'
import DefaultTheme from 'vitepress/theme'
import './style.css'
import { Tab, Tabs } from 'vue3-tabs-component'
import '@red-asuka/vitepress-plugin-tabs/dist/style.css'
/** @type {import('vitepress').Theme} */
export default {
  extends: DefaultTheme,
  Layout: () => {
    return h(DefaultTheme.Layout, null, {
      // https://vitepress.dev/guide/extending-default-theme#layout-slots
    })
  },
  enhanceApp({ app }) {
    app.component('Tab', Tab)
    app.component('Tabs', Tabs)
  }
}
