 Binary Search (Recursive)
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.

Return -1 if x is not present in the given array. Note : If given array size is even, take first mid.

Input format :

Line 1 : Array size

Line 2 : Array elements (separated by space)

Line 3 : x (element to be searched)

Sample Input :
6
2 3 4 5 6 8 
5 

Sample Output:
3 

Hint : Use helper function to solve this question.
int binarySearchhelp(int arr[],int st,int en,int el){
    if(st>en){
        return -1;
    }

        int mid = (st+en)/2;
        if(arr[mid] == el){
            return mid;
        }
        else if(arr[mid]>el){
            return binarySearchhelp(arr,st,mid-1,el);
        }
        else{
            return binarySearchhelp(arr,mid+1,en,el);
        }

}
int binarySearch(int arr[],int n,int x){
    return binarySearchhelp(arr,0,n-1,x);
}
