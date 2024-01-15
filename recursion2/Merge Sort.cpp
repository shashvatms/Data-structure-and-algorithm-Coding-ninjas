
  Merge Sort
Moderate
Score
120/160
Average time to solve is 40m
Problem statement
Send feedback

You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.




You must sort the elements between 'l' and 'r'.




Note:
Change in the input array itself. So no need to return or print anything.

Example:
Input: ‘N’ = 7,
'ARR' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
7
2 13 4 1 3 6 28

Sample Output 1:
1 2 3 4 6 13 28

Explanation of Sample Output 1:
After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].

Sample Input 2:
5
9 3 6 2 0

Sample Output 2:
0 2 3 6 9

Explanation of Sample Output 2:
After applying 'merge sort' on the input array, the output is [0 2 3 6 9].

Constraints :
1 <= N <= 10^3
0 <= ARR[i] <= 10^9


#include <iostream>
using namespace std;
void merge(int arr[],int si,int ei){
       int mid = (si+ei)/2;
       int *temp = new int[ei-si+1];
       int i= si;
       int j=mid+1;
       int k=0;
       while(i<=mid&&j<=ei){
              if(arr[i]<arr[j]){
                     temp[k] = arr[i];
                     k++;
                     i++;
              }
              else{
                     temp[k] = arr[j];
                     k++;
                     j++;
              }
       }
       while(i<=mid){
              temp[k] = arr[i];
              k++;
              i++;
       }
       while(j<=ei){
              temp[k] = arr[j];
              k++;
              j++;
       }
       int  m = 0;
       while(m<k){
              arr[si+m] = temp[m];
              m++;
       }
}
void mergeSort(int arr[],int si,int ei) {
       if(si>=ei){
              return;
       }
       int mid = (si+ei)/2;
       mergeSort(arr,si,mid);
       mergeSort(arr,mid+1,ei);
       merge(arr,si,ei);
  }
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
