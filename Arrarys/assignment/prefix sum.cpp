//  Problem
// Result
// Prefix Sum
// Send Feedback
// For Array A of size n, the prefix sum of A is another array P of size n+1, where P[i] represents the sum of the first i elements of A. That is,
// P[0] = A[0]
// P[1] = A[0] + A[1]
// P[2] = A[0] + A[1] + A[2]
// ...
// P[n-1] = A[0] + A[1] + ... + A[n-1]

// You will given an array arr of length n along with an output array of the same length. Your objective is to populate the output array as required, without the need to print or return anything.
// Input Format:
// First line of the input contains the size 'N' of the array arr.
// Next line contains N integers separated by a single space. 

// Output Format:
// Output contains N integers representing Prefix sums array i.e. 'output' array.

// Constraints:
// 1<=N<=10000
// 0<=arr[i]<=10000

// Input 1:
// 5
// 1 2 3 4 5

// Output 1:
// 1 3 6 10 15

// Input 2:
// 4
// 4 8 9 11

// Output 2:
// 4 12 21 32


void prefixSum(int arr[],int n,int output[]){
    int i=0;
    int sum = 0;
    while(i<n){
        sum = sum + arr[i];
        output[i]=sum;
        i++;
    }
}
