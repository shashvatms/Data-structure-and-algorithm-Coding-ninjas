 Quick Sort
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.




Note :
Make changes in the input array itself.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8

Sample Input 2 :
5
1 2 3 5 7

Sample Output 2 :
1 2 3 5 7 

Constraints :
1 <= N <= 10^3
0 <= input[i] <= 10^9

#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }

    void execute() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        free(input);
    }

    void executeAndPrintOutput() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        for (int i = 0; i < n; i++)
            cout << input[i] << ' ';
        cout << '\n';

        free(input);
    }
};
int partition(int arr[],int si,int ei){
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=arr[si]){
            count++;
        }
    }
    int temp = arr[si+count];
    arr[si+count] = arr[si];
    arr[si] = temp;
    int partitionindex  = si+count;
    int el = arr[partitionindex];
    int i=si;
    int j=ei;
    while(i<partitionindex&&j>partitionindex){
        if(arr[i]<=el){
            i++;
        }
        else if(arr[j]>el){
            j--;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return partitionindex;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int partitionindex = partition(arr,si,ei);
    quickSort(arr,si,partitionindex-1);
    quickSort(arr,partitionindex+1,ei);
}
int main() {
    // freopen("./Testcases/large/in/input.txt", "r", stdin);
    // freopen("./Testcases/large/out/output.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
