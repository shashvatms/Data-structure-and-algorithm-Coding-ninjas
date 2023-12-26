 
//  Problem
// Result
// Linear Search
// Send Feedback
// You have been given a random integer array(ARR) of size N, and an integer 'val'. You need to search for the integer 'val' in the given array using 'Linear Search'.
//  You have been required to return the index at which 'val' is present in the array. If 'val' has multiple occurrences in the array, then you need to return the index at which the first occurrence of 'val' would be encountered. In case 'val' is not present in the array/list, then return -1.
// 'Linear search' is a method for finding an element within an array. It sequentially checks each element of the array/list until a match is found or the whole array has been searched.
// Note:
// Your task is to focus on completing the linearSearch function. There is no need to be concerned about printing anything. The function should return the index of the first occurrence of 'val' in the array 'arr', or -1 if 'val' is not found in 'arr'.

// Input format :
// First line of contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array.

// Third line contains the value of 'val'(integer to be searched in the given array)

// Output format :
// First line contains the index at which 'val' is present or -1, otherwise.

// Constraints :
// 0 <= N <= 10^5
// -2 ^ 31 <= X <= (2 ^ 31) - 1
// Time Limit: 1 sec

// Sample Input 1:
// 7
// 2 13 4 1 3 6 28
// 3

// Sample Output 1:
// 4

// Sample Input 2:
// 7
// 2 13 4 1 3 6 28
// 9

// Sample Output 2:
// -1

 
 int linearSearch(int a[],int n,int val){
     for(int i=0;i<n;i++){
         if(val==a[i]){
            return i;
         }
     }
     return -1;
 }



