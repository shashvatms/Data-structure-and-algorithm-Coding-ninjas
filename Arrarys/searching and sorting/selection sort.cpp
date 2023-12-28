#include<iostream>
using namespace std;
void selection_sort(int arr[],int n);
void selection_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int min = arr[i],minindex=i;
        for(j=i+1;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}
int main(){
    int n,arr[50],i;
    cout<<"enter array size : ";
    cin>>n;
    cout<<"enter array elemnts"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"entered array is"<<endl;
     for(i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    selection_sort(arr,n);
    cout<<"sorted array is "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
