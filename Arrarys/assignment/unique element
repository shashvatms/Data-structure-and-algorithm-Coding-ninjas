Problem
Result
Find Unique
Send Feedback
You have been given an integer array(ARR) of size N.
Now, in the given array, all numbers are present twice or more than twice except only one number is present only once.
You need to find and return that number which is unique in the array.
 Note:
Unique element is always present in the array according to the given condition.

Input format :
First line contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array.

Output Format :
 First line contains the unique element present in the array.

Constraints :
0 <= N <= 10^3
Time Limit: 1 sec

Sample Input 1:
7
2 3 1 6 3 6 2

Sample Output 1:
1

Sample Input 2:
9
1 3 1 3 6 6 7 10 7

Sample Output 2:
10


#include<iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int i,j;
    int cnt,ans[100];
    for(i=0;i<size;i++){
       ans[i]=-1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                ans[j]=0;
            }
        }
        if(ans[i]!=0){
            cnt = arr[i];
        }
    }
    return cnt;
}
int main()
{

	
		int size;
		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout<<findUnique(input, size);
	

	return 0;
}
