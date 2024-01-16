 Staircase
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 30

Sample Input 1 :
4

Sample Output 1 :
7

Sample Input 2 :
5

Sample Output 2 :
13
#include <iostream>
using namespace std;

int staircase(int n){
    
       // Base cases:
    if (n == 0) 
        return 1; // If there are 0 steps, there is one way (no steps).
    } else if (n < 0) {
        return 0; // If there are negative steps, there are no ways.
    }

    // Recursive case:
    // Calculate the number of ways by considering 1, 2, and 3 steps at a time.
    int ways = staircase(n - 1) + staircase(n - 2) + staircase(n - 3);

    return ways;
    
}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
