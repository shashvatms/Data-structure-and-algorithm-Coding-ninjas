Problem
Result
Find Inversions
Send Feedback
In the realm of sorting algorithms, an inversion is a pair of elements that are out of order. Your task is to determine the number of inversions in a given array/list. In this problem, an inversion refers to a pair of elements that are in the wrong order and would require swapping to sort the array/list.
Example:
Input: ‘N’ = 5 
‘A’ = [3, 2, 11, 5, 1]

Output: 6

Input format :
The first line of input contains an integer ‘N’, denoting the size of the array/list. The second line contains ‘N’ single space-separated integers representing the elements in the array/list.

Output Format :
The output should be a single integer - the number of inversions in the array/list.

Constraints :
1 <= N <= 10^4
1 <= nums[i] <= 10^9
Time Limit: 1 sec

Sample Input 1:
5
3 2 5 11 1

Sample Output 1:
6

Explanation
Inversions are pairs of elements that are out of order. Here are the inversions in this array: (3, 2), (3, 1), (2, 1), (5, 1), (11, 1), (5, 3) So, there are 6 inversions in total.

Sample Input 2:
7
17 5 14 16 11 18 10

Sample Output 2:
10

Explanation
Array: [17, 5, 14, 16, 11, 18, 10]

The inversions in this array are:
(17, 5), (17, 14), (17, 16), (17, 11), (17, 10), (5, 4), (14, 11), (14, 10), (16, 11), (16, 10)
So, there are 10 inversions in total.
