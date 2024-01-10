 Sum the numbers
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given an array of length N, you need to find and return the sum of all elements of the array using the concept of pointer arithmetic and pointers.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^3

Note
You don't have to print anything. Just complete the definition of the function given.

Sample Input 1 :
3
9 8 9

Sample Output 1 :
26

Sample Input 2 :
3
4 2 1

Sample Output 2 :
7   
#include<iostream>
using namespace std;
int sum(int *ar, int n) {
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + *(ar+i);
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ans = sum(ar,n);
    cout<<ans;
}
