 Replace character recursively
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.

Do this recursively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1 <= Length of String S <= 10^6

Sample Input :
abacd
a x

Sample Output :
xbxcd

#include <iostream>
using namespace std;
void replaceCharacter(char str[], char c1, char c2) {
    if(str[0]=='\0'){
        return;
    }
    if(str[0]==c1){
        str[0] = c2;
    }
    replaceCharacter(str+1,c1,c2);
}
int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
