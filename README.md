# Leetcode 刷题记录
## 01. Two Sum
* 暴力破解时间复杂度高，使用hash表降低时间复杂度
## 02. Add Two Numbers 
* 由于链表是逆置的，所以直接顺序遍历两个链表，按照加法器规则依次相加各节点，并进位
* 最后一组相加的进位如果为1，要记住加进结果里
## 148. Sort List
### 自己写的 noob
* 时间复杂度要求为O(nlogn)，于是使用归并排序
* "Faster than 21.08%" of c++ online submissions for Sort List. Less than 5.02% of c++ online submissions for Sort List."
* ~~不太彳亍~~
### 大佬写的

~~找到了用python写的大佬，感觉方法似乎是一样的~~
## 03. Longest Substring Without Repeating Characters 03.23
* 使用数组进行直接访存 ~~为什么会想不通用hash~~
* 应该是需要减少重复访问string的次数，争取一次遍历过，但目前还没想好咋整
* Runtime: 40 ms, faster than 41.22% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 15.3 MB, less than 70.82% of C++ online submissions for Longest Substring Without Repeating Characters.
