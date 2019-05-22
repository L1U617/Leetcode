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
### 13.Roman to Integer
|        |不使用map| 使用map|
|:------:|:------:|:------:|
|Runtime |24ms    |24ms    |
|Memory  |8.4MB   |10.4MB  |
|代码行数 |56      |39      |  
* 差距没想象的大
## APR 08
### 说明，由于昨天（7号）刷的题（No.15）出现了调试和提交时的运行结果不同，无法debug，因此没有记录 ~~特此说明不是偷懒 略略略~~
### 20.Valid Parentheses
* 用三个变量分别对三种括号计数，看左右括号数目是否匹配；再用vector模拟栈，验证左括号和右括号顺序是否匹配
* Runtime: 4 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 8.3 MB, less than 100.00% of C++ online submissions for Valid Parentheses.
* ~~又是超过100%，系统是不是出问题了，我这么强的吗~~
* ~~可能只是大佬们不屑于做easy的题~~
## ARP 10
### 26.Remove Duplicates from Sorted Array
* 先遍历一次数组把不重复的数字的个数找出来，然后再循环清除重复的数字。为什么这么搞呢，是因为只有一次循环的话，增增减减的，就搞不太清循环的跳出条件是什么了，于是干脆分两步走。第二次循环里，cnt就相当于处理好的数组的大小，所以i < cnt
* Runtime: 156 ms, faster than 19.40% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 10 MB, less than 99.23% of C++ online submissions for Remove Duplicates from Sorted Array.
* 估计还是删除元素的地方不太彳亍，所以时间用得很多

**Update**
* 一次遍历出结果：使用cnt进行计数，同时也作为处理过后的数组的下标，遇到相同的数字就往后数，直到遇到不同的数字，然后将该数字存储到cnt标记的位置，同时跳转到该数字继续遍历；若遇到不同的数字，则直接进行处理（放入cnt标记的位置，相关的变量该加加）
* Runtime: 24 ms, faster than 98.97% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 9.8 MB, less than 99.89% of C++ online submissions for Remove Duplicates from Sorted Array.

|        |两次循环| 一次循环|
|:------:|:------:|:------:|
|Runtime |156ms   |24ms    |
|Memory  |10MB    |9.7MB   |
## MAY 22
### 21. Merge Two Sorted Lists
* 究极简单，没啥好说的
* 复习了结构体初始化的操作
* Runtime: 8 ms, faster than 97.03% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 9.1 MB, less than 60.50% of C++ online submissions for Merge Two Sorted Lists.
