Problem statement
Send feedback

Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.

There can be multiple spaces present after any word.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1 <= Length of string S <= 10^6

Sample Input :
abc def g hi

Sample Output :
abcdefg

  void trimSpaces(char a[]){
    int count = 0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
   for(int k=0;k<count;k++){
        for(int i=0;i<count;i++){
            if(a[i]==' '){
                while (i < count) {
                    a[i] = a[i + 1];
                    i++;
                }
            }
        }
    }
}

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
