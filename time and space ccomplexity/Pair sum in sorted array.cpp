Pair sum in sorted array
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

You have been given a sorted integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.

Note:
Given array/list can not contain duplicate elements. 

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^5
0 <= num <= 10^5
Time Limit: 1 sec

Sample Input 1:
5
1 2 3 4 5
7

Sample Output 1:
2

Sample Input 2:
5
1 2 3 4 5
10

Sample Output 2:
0

int pairSum(int arr[], int n , int num)
{
     int count = 0;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == num) {
            count++;
            left++;
            right--;
        } else if (currentSum < num) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}
