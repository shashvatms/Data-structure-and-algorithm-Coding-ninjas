hi
  All substrings
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abc

Sample Output 1:
a 
ab 
abc 
b 
bc 
c 

 Sample Input 2:
co

Sample Output 2:
c 
co 
o



void printSubstrings(char arr[]){
    int l = 0;
    int r;
    int count = 0;
    for(int i = 0; i != '\0'; i++){
        count++;
    }
    while(l < count){
        for(r = l; r < count; r++){
            printS(l, r, arr);
            cout<<endl;
        }
    }
}

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
