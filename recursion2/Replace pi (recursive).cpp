Replace pi (recursive)
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 

Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 

Sample Input 1 :
xpix

Sample Output :
x3.14x

Sample Input 2 :
pipi

Sample Output :
3.143.14

Sample Input 3 :
pip

Sample Output :
3.14p

Constraints:-

1<=|S|<=50

// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
	if (input[0] == '\0') {
        return; // Base case: End of string, return
    }

    if (input[0] == 'p' && input[1] == 'i') {
        // Replace "pi" with "3.14"
        int i = 4;
        while (input[i - 1] != '\0') {
            i++;
        }

        while (i >= 0) {
            input[i + 2] = input[i];
            i--;
        }

        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

