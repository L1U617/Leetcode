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
## 03.23 03. Longest Substring Without Repeating Characters 
* 使用数组进行直接访存 ~~为什么会想不通用hash~~
* 应该是需要减少重复访问string的次数，争取一次遍历过，但目前还没想好咋整
* 但是现在还不想直接去看别人的方法
* Runtime: 40 ms, faster than 41.22% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 15.3 MB, less than 70.82% of C++ online submissions for Longest Substring Without Repeating Characters.
## 200. Number of Island
* 深度优先遍历
* ~~我想出来的就是大多数人想出来的，究极普通解法~~
## 03.26 07.Reverse Integer
* Runtime: 4 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
Memory Usage: 8 MB, less than 100.00% of C++ online submissions for Reverse Integer.
* 插一会儿腰.jpg
* 用取余的办法进行转置，将ret设为double型，然后直接和int型的边界进行比较
## APR 02 
### 09.Palindrome Number
* 用上面转置的方法先把数字到转过来然后验证是否和原数相等
* 负数可以直接返回false
* Runtime: 36 ms, faster than 94.83% of C++ online submissions for Palindrome Number.
Memory Usage: 8.1 MB, less than 99.67% of C++ online submissions for Palindrome Number.
* ~~HAPPY\~~~
### 11.Container with Most Water
* 模拟水从最底(高度 = 1)开始上升，水面每上升一个高度，容器的两侧从数组height的两端开始相向收缩，直到两端的高度高于或平行于水面高度，然后计算出此时的体积
* Runtime: 384 ms, faster than 26.45% of C++ online submissions for Container With Most Water.
Memory Usage: 9.8 MB, less than 99.17% of C++ online submissions for Container With Most Water.
* 时间换空间了┑(￣Д ￣)┍
## APR 03
### 12.Integer to Roman
* 循环考察数字是在哪个区间，然后就相应地转成罗马数字
* Runtime: 12 ms, faster than 99.88% of C++ online submissions for Integer to Roman.
Memory Usage: 8.5 MB, less than 98.86% of C++ online submissions for Integer to Roman.
* ~~虽然方法笨，但是效果好 b（￣▽￣）d~~
### 14.Longest Common Prefix
*  顺序检验各单词中第1,2,3...个字母是否相同 over
*  Runtime: 8 ms, faster than 98.70% of C++ online submissions for Longest Common Prefix.
Memory Usage: 8.8 MB, less than 99.63% of C++ online submissions for Longest Common Prefix.
## APR 04
### 13 Roman to Integer
|        |不使用map| 使用map|
|:------:|:------:|:------:|
|Runtime |24ms    |24ms    |
|Memory  |8.4MB   |10.4MB  |
|代码行数 |56      |39      |  
* 差距没想象的大
