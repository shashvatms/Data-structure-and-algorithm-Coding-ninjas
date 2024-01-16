String to Integer
Moderate
Score
0/160
Average time to solve is 40m
Problem statement
Send feedback

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 < |S| <= 9
where |S| represents length of string S.

Sample Input 1 :
00001231

Sample Output 1 :
1231

Sample Input 2 :
12567

Sample Output 2 :
12567

  int length(char str[]){
    int len = 0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    return len;
}
int stringtonumber(char str[],int last){
    if (last == 0) {
        return str[last] - '0';
    }
    int smalans = stringtonumber(str, last - 1);
    int a = str[last] - '\0';
    return smalans * 10 + a;
}
int stringToNumber(char str[]){
    int len = length(str);
    return  stringtonumber(str,len-1);
}
