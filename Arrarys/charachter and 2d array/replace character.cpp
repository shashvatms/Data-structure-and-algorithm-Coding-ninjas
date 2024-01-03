Problem statement
Send feedback

Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1 <= Length of String S <= 10^6

Sample Input :
abacd
a x

Sample Output :
xbxcd


  void replaceCharacter(char a[],char c1,char c2){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    for(int i=0;i<count;i++){
        if(a[i]==c1){
            a[i]=c2;
        }
    }
}
#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
