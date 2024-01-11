 Reverse an array
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

Given an array ar of n integers, reverse the elements of the array by using the concept of pointers.

Detailed explanation ( Input/output format, Notes, Images )
Constraints
1<= n <=10^6
-10^6<= ar[i] <= 10^6

Note
 You only have to complete the definition of the given function named "reverse". Input has already been taken for you.

Sample Input :
4
1
2
3
4

Sample Output :
4 3 2 1 


 
#include <iostream>
using namespace std;
void reverse(int *ar,int n)
{
    int j =0;
    for(int i=n-1;i>=0;i--)
    {
        *(ar+j)=*(ar+i);
        j++;
    }
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
    reverse(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
