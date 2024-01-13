 x to the power n
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.

Do this recursively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= x <= 30
0 <= n <= 30

Sample Input 1 :
 3 4

Sample Output 1 :
81

Sample Input 2 :
 2 5

Sample Output 2 :
32
 

 #include<iostream>
using namespace std;

int power(int x, int n){
    if(n==0){
        return 1;
    }
    int a = power(x,n-1);
    return x*a;
}
int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}
