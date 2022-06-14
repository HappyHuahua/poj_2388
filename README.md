# poj_2388
ACM-Training: POJ-2388

Description
  FJ is surveying his herd to find the most average cow. He wants to know how much milk this 'median' cow gives: half of the cows give as much or more than the median; half give as much or less.
  Given an odd number of cows N (1 <= N < 10,000) and their milk output (1..1,000,000), find the median amount of milk given such that at least half the cows give the same amount of milk or more and at least half give the same or less.

问题描述: 
  FJ正在调查他的牛群，以找到最普通的母牛。他想知道这头“中位数”奶牛产奶量：一半的奶牛产奶量与中位数相同或更多；一半的人给出同样多或更少。
  给定奇数头奶牛N（1<=N<10000）及其产奶量（1..1000000），求出平均产奶量，使至少一半的奶牛产奶量相同或更多，至少一半的奶牛产奶量相同或更少。
 简单来说就是求得一组数据的中位数，并输出它。

解题方法：
  先获取奶牛的数量N,动态分配一个长度为N的整型数组D[N]。随后依次获取每头奶牛的产奶量数据，储存在所动态分配的数组当中。
  接着对该数组进行从小到大排序，得到最终的结果后输出D[N/2]。
  
 出错次数：1次
 出错原因：未看清题目的输入输出条件，多输出了一个换行符。
 
 心得体会：
  应该看清楚题目的要求，再提交前仔细检查代码，看看输入输出是否完全符合标准。
