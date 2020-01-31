# Leetcode 刷题记录
## 01. Two Sum
* 暴力破解时间复杂度高，使用hash表降低时间复杂度
## 02. Add Two Numbers 
* 由于链表是逆置的，所以直接顺序遍历两个链表，按照加法器规则依次相加各节点，并进位
* 最后一组相加的进位如果为1，要记住加进结果里
* **为了计算上的统一， 可以把两个数组扩充到一样长** ~~遍历完俩，再写两个循环遍历剩下的数，这个代码看起来真是太蠢了~~
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
~~10 YEARS LATER~~
### 21. Merge Two Sorted Lists
* 究极简单，没啥好说的
* 复习了结构体初始化的操作 & C++里怎么构建链表
* Runtime: 8 ms, faster than 97.03% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 9.1 MB, less than 60.50% of C++ online submissions for Merge Two Sorted Lists.
### 27. Remove Elements
* 同时从首尾（i, j）相向着遍历数组，如果nums[i] == val，就看nums[j]是否等于val, 等于的话就和nums[i]替换，不等就j--，然后再次检查。先把要移除的元素移到数组尾部再遍历数组进行计数，就避免了边处理边计数引起的各种bug
* Runtime: 4 ms, faster than 96.25% of C++ online submissions for Remove Element.
Memory Usage: 8.6 MB, less than 78.18% of C++ online submissions for Remove Element.
## MAY 23
### 28. Implement strStr()
* 解决办法就是用已有方法，简单到我都不想记录下来
* over
## MAY 26
### 8. String to Integer
* 主要是注意溢出怎么处理：设置两个代表最大和最小整数的字符串max、min，然后把从源字符串中提取出来的标准（不以0开头，正数前面没有'+'的）数字串，和设置好的最大、最小字符串比较，if 上溢, tmp = max; if 下溢, tmp = min;
* Runtime: 4 ms, faster than 97.35% of C++ online submissions for String to Integer (atoi).
Memory Usage: 8.7 MB, less than 53.82% of C++ online submissions for String to Integer (atoi).
## MAY 29
### 35. Search Insert Position
* 真的很简单，所以为了显得有技术含量一点，用了二分法，嗯~ o(*￣▽￣*)o
* Runtime: 4 ms, faster than 99.76% of C++ online submissions for Search Insert Position.
Memory Usage: 8.8 MB, less than 87.63% of C++ online submissions for Search Insert Position.
## JUN 01
### 22. Generate Parenthese
* [代码来源](https://leetcode.com/problems/generate-parentheses/discuss/303011/0-ms-C%2B%2B-solution)
* 的确是使用递归，由于括号配对始终是左→右，所以把左括号的递归语句写在前面，后面跟着一个右括号的处理过程，这样一来生成一种组合函数返回后，就可以将一个左括号替换为右括号，然后继续递归调用，同时在左括号数=右括号数，放置左括号，也保证了配对的正确性。
* ~~这样把解释一写，发现这不就和BFS之类的一个道理吗，先左后右，果然还是对递归不太熟练~~
## JUL 02
### 113. Path Sum Ⅱ
* DFS就完事了，只是要注意题目要求的是从根到叶子节点的路径，所以得判断清除是不是叶子节点
* Runtime: 24 ms, faster than 39.83% of C++ online submissions for Path Sum II.
Memory Usage: 38.3 MB, less than 11.06% of C++ online submissions for Path Sum II.
## JUL 03
### 123. Best Time to Buy and Sell Stock III
* 先算出相邻两天的差值存在数组里diff里，然后对该数组进行处理，看什么时候该数组分成前后两组时，两边的**最大子序列和**相加的值最大
* Runtime: 1164 ms, faster than 5.06% of C++ online submissions for Best Time to Buy and Sell Stock III.
Memory Usage: 318.9 MB, less than 5.02% of C++ online submissions for Best Time to Buy and Sell Stock III.
* ~~勉强通过了，差一丢丢又要超时orz~~
* 超时版本，先算出每天买进和卖出时的最大利润，把每天卖出的利润和此后买进的最大利润相加，依次进行这样的处理，找到最大的和就为答案
* "先算出每天买进和卖出时的最大利润", 用了更快速的方法得到这两个数组，并且进一步处理（把每天可卖出获得的最大利润改进为**在当天卖出的话**和**这一天以前如果卖出的话**，这两者所获利润的最大值）后可以线性解决
## JUL 10
### 60.Permutation Sequence
* 简而言之，除余法~~（名字自己编的）~~Talk is cheap, just see the code
* Runtime: 4 ms, faster than 78.57% of C++ online submissions for Permutation Sequence.
Memory Usage: 8 MB, less than 87.97% of C++ online submissions for Permutation Sequence.
## JUL 11
### 504. Base 7
* 十进制→七进制
* Runtime: 4 ms, faster than 65.73% of C++ online submissions for Base 7.
Memory Usage: 8.2 MB, less than 48.95% of C++ online submissions for Base 7.
## JUL 17
### 53. Maximum Subarray
* 最长子序列和，和之前学过的差别就是最小的数不是0，如果整个数组的子序列的所有组合的和都是负数，那最大子序列和也不是0，而是最大的那个负数
* Runtime: 8 ms, faster than 79.65% of C++ online submissions for Maximum Subarray.
Memory Usage: 9.2 MB, less than 71.95% of C++ online submissions for Maximum Subarray.
* 题目说还可以用分治的方法来解决，但是我……~~并不知道分治到底是个啥了~~
## AUG 02
### 206. Reverse Linked List
* Runtime: 8 ms, faster than 80.21% of C++ online submissions for Reverse Linked List.
Memory Usage: 9 MB, less than 97.58% of C++ online submissions for Reverse Linked List.
## AUG 05
### 637. Average of Levels in Binary Tree
* 使用层次遍历，边遍历边统计下一层的结点数（level），并且遍历的时候也要统计遍历了几个节点（cnt），cnt = level的时候就可计算当前层的平均值，然后cnt清零，level更新
* Runtime: 36 ms, faster than **7.23%** of C++ online submissions for Average of Levels in Binary Tree.
Memory Usage: 21.3 MB, less than 100.00% of C++ online submissions for Average of Levels in Binary Tree.
* ~~时间换空间~~ 但是按道理就是O(n),为什么时间会用这么多呢
* *优化：* 不用erase，用下标来标记出队元素
Runtime: 16 ms, faster than **91.76%** of C++ online submissions for Average of Levels in Binary Tree.
Memory Usage: 21.9 MB, less than 50.00% of C++ online submissions for Average of Levels in Binary Tree.
~~多用了个变量，就从100%掉到50%了hhhhh~~
## AUG 06
### 227. Basic Calculator II
* 用转化后缀表达式的思路
* 但是在string类型里面不能直接识别出含多位数字的数，所以这里要注意读出正确的数字
* Runtime: 12 ms, faster than 89.45% of C++ online submissions for Basic Calculator II.
Memory Usage: 11.5 MB, less than 30.93% of C++ online submissions for Basic Calculator II.
 ~~每次跑的时间都不一样，最快的是8ms~~ 
 ## AUG 13
 ### 55.Jump Game
 * 用DFS会memory limit exceed，改用队列，模拟层次遍历，但是效果也不咋样
 * Runtime: 812 ms, faster than 7.17% of C++ online submissions for Jump Game.
Memory Usage: 10.8 MB, less than 7.89% of C++ online submissions for Jump Game.
## AUG 15
### 202.Happy Number
* 在简单的分离各位数字然后平方相加，继续循环之外，如果出现了重复的数字就直接跳出循环，判定为false
* Runtime: 4 ms, faster than 65.94% of C++ online submissions for Happy Number.
Memory Usage: 8.5 MB, less than 61.54% of C++ online submissions for Happy Number.

# 开始用Python，可能会把之前做过的题重新写一遍，~~反正也会忘了是咋做的~~   
## DEC 30
### 22. Generate Parentheses （做过的）
|       |Python  |C++   |
|:-----:|:------:|:----:|
|Runtime|16ms    |4ms   |
### 17. Letter Combinations of A Phone Number
* 递归找不同组合
## DEC 31
### 207. Course Schedule
* 图，检查图中是否有环
* 执行用时 :1540 ms, 在所有 python 提交中击败了5.08%的用户
内存消耗 :14.9 MB, 在所有 python 提交中击败了5.26%的用户
~~这也太慢了~~
## JAN 03
### 207 Update
* **拓扑排序**    **广度优先**    **队列**
* 1540ms -> 80ms
## JAN 05
### 913. Cat and Mouse
* **极大极小  自底向上染色** 
* [Reference](https://leetcode-cn.com/problems/cat-and-mouse/solution/mao-he-lao-shu-by-leetcode/)
## JAN 07
### 416 Partition Equal Subset Sum
* **Dynamic programming**
* 直接用二维数组性能不行，得优化
### 416 空间优化
* 二维数组太浪费空间，遍历也耗时
```python
for i in range(1, n):
      for j in range(subSum, 0, -1):
          if j >= nums[i]:
              dp[j] = dp[j] or dp[j - nums[i]]
```

|       |二维数组 |优化  |
|:-----:|:------:|:----:|
|Runtime|1528ms  |724ms |
|Memory |15.7MB  |11.8MB|
## JAN 10
### 421. Maximum XOR of Two numbers in an Array
* 异或 a ^ b = c => a ^ c = b, b ^ c = a
* [Reference](https://leetcode-cn.com/problems/maximum-xor-of-two-numbers-in-an-array/solution/li-yong-yi-huo-yun-suan-de-xing-zhi-tan-xin-suan-f/)
## JAN 11 - 12
### 5. Longest Parlindromic Substring
* 用了动态规划（自己瞎想的，也不知道是不是真的动态规划），dp[i][j]是指以j为中心的长度为i的回文串。（看了题解，这应该叫中心扩展算法叭）
转化方程（长度为奇数时）：```dp[i][j] = s[j-indent] == s[j+indent] ? s[j - indent] + dp[i - 2][j] + s[j + indent] : ""```
* Time：3700ms memory 11.7MB
* 用了2 x n大小的数组，所以内存消耗会小一点，但是耗时让人很绝望
### Manacher's Algorithm
* 重点就是这个部分，利用P[i]包含的信息，避免重复遍历
```python
while T[i - P[i] - 1] == T[i + P[i] + 1]:
                P[i] += 1
```
* 反面案例(愚蠢的我),完全没利用到P[i]，而且还要区分偶数和奇数回文串,T也毫无意义了，完全就是中心扩展了
```python
if T[i] in additionalMark:
                    P[i] = 0
                else:
                    P[i] = 1
                j = 1
                while T[i - j] == T[i + j]:
                    if T[i-j] not in additionalMark:
                        P[i] += 2
                    j += 1
```
## JAN 17
### 122. Best Time to Buy and Sell Stock I
* 和123（只能买两次）不一样，这个不限次数，所以直接贪心，明天要跌就不买，明天不跌就买了明天卖，有一点赚一点
* Runtime: 36ms, faster than 98%
### 189. Rotate Array
* 从i = 0开始，```A[0] -> A[k % n] -> ... ->  A[2 * k % n] ```直到下标转回0，然后i = 1又继续开始，同时使用count来计数做为循环条件
* 空间复杂度应该是O(1)，如果是使用辅助数组,先把后k个元素移进去，再复制前n-k个元素的话，空间复杂度应该是O(n)
* Runtime：36ms, faster than 98%
### JAN 30
### 350. Intersection of Two Arrays II
* 方法一 先对俩数组排序， 然后从头开始遍历，耗时
* 方法二 把一个数组转换成字典，d[i]为i在该数组中出现的次数，然后遍历另一个数组B，只要B中元素在字典中就加入交集，并且d[i] - 1

|        |方法一   |方法二  |
|:------:|:------:|:------:|
|Runtime |52ms    | 28ms   |
### 66. Plus One
* 方法一 i = len - 1 -> 0
* 方法二 先将数组逆序，然后i = 0 - > len - 1, 用方法二耗时略少一点，我猜测差距可能是在跳出循环后对是否多出一位的判断，用for...else...不用再访问数组元素所以会更快些，也可能在于方法一中截取ret的过程。
如果先将数组逆序，那如果要添加一位只需在数组后添加，但如果添加到数组首位的话，也会影响到数组的其他位

|        |方法一   |方法二  |
|:------:|:------:|:------:|
|Runtime |24ms    | 16ms   |

### 283. Move Zeros
* 和把重复数字移到数组尾部是一个原理
## JAN 31
### 36. Valid Sudoku
* 暴力遍历检测
Runtime: >54%
