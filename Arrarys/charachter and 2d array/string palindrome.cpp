 String Palindrome
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given a string, determine if it is a palindrome, considering only alphanumeric characters.

Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.

Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

The expected output for this example will print, 'true'.


From that being said, you are required to return a boolean value from the function that has been asked to implement.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1 :
abcdcba

Sample Output 1 :
true 

Sample Input 2:
coding

Sample Output 2:
false


bool checkPalindrome(char a[]){
    int count=0;
    bool flag = true;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    int i=0;
    int j=count-1;
    while(i<j){
        if(a[i]==a[j]){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true){
        return true;
    }
    else{
        return false;
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
    cout << (checkPalindrome(str) ? "true" : "false");
}
