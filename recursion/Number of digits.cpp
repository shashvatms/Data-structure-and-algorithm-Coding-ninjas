 Number of digits
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

You are given a number 'n'.




Return number of digits in ‘n’.




Example:
Input: 'n' = 123

Output: 3

Explanation:
The 3 digits in ‘123’ are 1, 2 and 3. 





Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
121





Sample Output 1:
3





Explanation of sample output 1:
There are 3 digits in 121 are 1,2 and 1.





Sample Input 2:
38





Sample Output 2:
2





Expected time complexity :
The expected time complexity is O(log n).





Constraints:
1 <= ‘n’ <= 10^9

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
using namespace std;

#include "solution.h"

class Runner
{
    int N;

public:
    void takeInput()
    {
        cin >> N;
    }

    void execute()
    {
        int ans = countDigits(N);
    }

    void executeAndPrintOutput()
    {

        int ans = countDigits(N);
        cout << ans << endl;
    }
};
int countDigits(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}



int main()
{
    // freopen("testcases/large/in/input11.txt", "r", stdin);
    // freopen("testcases/large/out/output11.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
