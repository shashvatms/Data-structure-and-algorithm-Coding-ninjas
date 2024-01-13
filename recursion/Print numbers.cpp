 Print numbers
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= n <= 10000

Sample Input 1 :
 6

Sample Output 1 :
1 2 3 4 5 6

Sample Input 2 :
 4

Sample Output 2 :
1 2 3 4


  #include<iostream>
using namespace std;

  void print(int n){
    if(n<1){
        return;
    }
    print(n-1);
    cout << n << " ";


int main(){
    int n;
    cin >> n;
  
    print(n);
}



}
