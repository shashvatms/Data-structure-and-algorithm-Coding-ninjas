
//  Problem
// Result
// Swap Alternate
// Send Feedback
// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array.
// You don't need to print or return anything, just change in the input array itself.
// Input Format :
// First line of contains an integer 'N' representing the size of the array.

// Second line contains 'N' single space separated integers representing the elements in the array.

// Output Format :
// First line contains the elements of the resulting array in a single row separated by a single space.

// Constraints :
// 0 <= N <= 10^5
// Time Limit: 1sec

// Sample Input 1:
// 6
// 9 3 6 12 4 32

// Sample Output 1 :
// 3 9 12 6 32 4

// Sample Input 2:
// 9
// 9 3 6 12 4 32 5 11 19

// Sample Output 2 :
// 3 9 12 6 32 4 11 5 19 


void swapAlternate(int a[], int n)
{
    for(int i=0;i<n-1;i=i+2){
        int temp;
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
}
