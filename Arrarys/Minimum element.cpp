// Problem
// Result
// Minimum Element
// Send Feedback
// Write a program that returns minimum element in an array.
// Hint : the Math.min method is used to find the minimum of two numbers .
// Input Format:
// First line input contains and integer N
// Next line contains N integers separated by space.

// Output Format:
// First line of output prints the minimum element in the array.

// Constraints:
// 1<=N<=10^5

// Note for C++:
// It is advisable to declare an array with a size that can accommodate all the elements, considering that N has a maximum value of 10^5.

// Input 1:
// 5 
// 6 4 3 8 9

// Output 1:
// 3

// Input 2:

// 4
// 8 8 8 8

// Output 2:
// 8

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;;
    cin >> n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
      min = a[i];
        }
    }
    cout << min << endl;
}
