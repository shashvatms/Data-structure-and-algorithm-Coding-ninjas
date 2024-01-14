Count Zeros
Easy
Score
66.4/80
Average time to solve is 20m
Problem statement
Send feedback

Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^9

Sample Input 1 :
0

Sample Output 1 :
1

Sample Input 2 :
00010204

Sample Output 2 :
2

Explanation for Sample Output 2 :
Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer, it becomes 10204.

Sample Input 3 :
708000

Sample Output 3 :
4


#include <iostream>
using namespace std;

int countZeros(int n) {
    
    if(n<=9){
        if(n==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int lastdigit = n%10;
    if(lastdigit==0){
        return 1+countZeros(n/10);
    }
    else{
        return countZeros(n/10);
    }
    

}
int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
