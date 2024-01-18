 Rotate array
Easy
Score
40/80
Average time to solve is 20m
Problem statement
Send feedback

You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).

 Note:
Change in the input array/list itself.You don't need to return or print the elements.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= D <= N
Time Limit: 1 sec

Sample Input 1:
1
7
1 2 3 4 5 6 7
2

Sample Output 1:
3 4 5 6 7 1 2

Sample Input 2:
2
7
1 2 3 4 5 6 7
0
4
1 2 3 4
2

Sample Output 2:
1 2 3 4 5 6 7
3 4 1 2

void rotate(int *arr, int d, int n)
{
   int temp[100000],j=0;
   for(int i=d;i<n;i++){
       temp[j] = arr[i];
       j++;
   }
   for(int i = 0;i<d;i++){
       temp[j] = arr[i];
       j++;
   }
   for(int i=0;i<n;i++){
       arr[i] = temp[i];
   }
}
