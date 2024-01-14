Last index of x
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.

Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.

You should start traversing your array from 0, not from (N - 1).

Do this recursively. Indexing in the array starts from 0.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8

Sample Output :
3

#include<iostream>
using namespace std;
int lastIndex(int arr[], int n, int x) {
    if(n==0){
        return -1;
    }
    if(arr[n-1]==x){
        return n-1;
    }
    int k = lastIndex(arr,n-1,x);
    return k;
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}
