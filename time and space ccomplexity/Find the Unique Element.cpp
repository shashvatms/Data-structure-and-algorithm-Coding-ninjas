
  Find the Unique Element
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

 Note:
Unique element is always present in the array/list according to the given condition.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^6

Time Limit: 1 sec

Sample Input 1:
1
7
2 3 1 6 3 6 2

Sample Output 1:
1

Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7

Sample Output 2:
4
10
int findUnique(int *arr, int n) {
    int unique = 0;

    for (int i = 0; i < n; i++) {
        unique ^= arr[i];
    }

    return unique;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}
