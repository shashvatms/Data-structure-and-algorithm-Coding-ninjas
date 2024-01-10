 Modify the array
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given an array ar of n integers, find the minimum and maximum value in the array and store their addresses in separate pointer variables. Then, modify the values at the addresses pointed by these pointers setting the minimum value to 0 and maximum value to 100.

Detailed explanation ( Input/output format, Notes, Images )
Constraints
 1<= n <=1000
-10^6  ar[i] <=10^6

Note
You don't have to write the entire code. Just complete the definition of modify function listed in the editor.

Sample Input 1
 2
-56 10

Sample Output 1
0 100

Sample Input 2
4
1 2 3 4

Sample Output 2
0 2 3 100

#include <iostream>
using namespace std;
void insertionSort(int ar[],int n){
    for(int i =1;i<n;i++){
        int current = ar[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<ar[j]){
                ar[j+1]=ar[j];
            }
            else{
                break;
            }
        }
        ar[j+1]=current;
    }
}


void modify(int *ar,int n)
{
 int *min = ar;
 int *max = ar;
 for(i=0;i<n;i++){
     if(*min>*(ar+i)){
         *min = *(ar+i);
     }
     if(*max<*(ar+i)){
         *max = *(ar+i);
     }
 }
 *min = 0;
 *max = 100;
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
    modify(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
