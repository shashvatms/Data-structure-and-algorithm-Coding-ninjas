 Highest Occuring Character
Easy
Score
66.4/80
Average time to solve is 20m
Problem statement
Send feedback

For a given a string(str), find and return the highest occurring character.

Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.


If there are two characters in the input string with the same frequency, return the character which comes first.

Consider:
Assume all the characters in the given string to be in lowercase always.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abdefgbabfba

Sample Output 1:
b

Sample Input 2:
xy

Sample Output 2:
x
#include <iostream>
#include <cstring>
using namespace std;



char highestOccurringChar(char input[]) {
    int arr[26] = {0};
    int maxFreq = 0;
    for(int i=0;input[i]!=0;i++){
        arr[int(input[i])-'a'] += 1;
        maxFreq = max(maxFreq, arr[int(input[i])-'a']);
        }
        char ans;
        for(int i=0;input[i]!='\0';i++){
            if(arr[int(input[i])-'a']==maxFreq){
                ans = input[i];

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
                break;
            }
        }
        return ans;
 }

