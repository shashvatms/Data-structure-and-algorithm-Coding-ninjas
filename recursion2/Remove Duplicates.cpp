
  Remove Duplicates
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given a string S, remove consecutive duplicates from it recursively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string

Sample Input 1 :
aabccba

Sample Output 1 :
abcba

Sample Input 2 :
xxxyyyzwwzzz

Sample Output 2 :
xyzwz
#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char *str) {
	if(str[0]=='\0'){
        return;
    }
    if(str[0]!=str[1]){
        removeConsecutiveDuplicates(str+1);
    }
    else{
        int i =1;
        for(;str[i]!='\0';i++){
            str[i-1] = str[i]; 
        }
        str[i-1] = str[i];
        removeConsecutiveDuplicates(str);
    }
}
int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
