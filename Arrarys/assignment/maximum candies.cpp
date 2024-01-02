

//  Problem
// Result
// Maximum Candies
// Send Feedback
// You are given the array ‘children’ of size ‘N’ representing the number of candies present at each child. You have a ‘extraCandies’ amount of candies. Your task is to find for each child if the child has the most candies among all children if all ‘extraCandies’ are given to the child.
// You have to fill the boolean array 'output' also of size 'N'. ‘True’ is present at position ‘index’ if the child at position ‘index’ will have the maximum amount of candies when given all the ‘extraCandies’ candies.
// For example:
// You are given ‘children’ = [12, 20, 5], and ‘extraCandies’ = ‘9’

// If you give all the candies to the child at position 1, the child will have 21 candies, which is the highest among all children.

// If you give all the candies to the child at position 2, the child will have 29 candies, which is the highest among all children.

// If you give all the candies to the child at position 3, the child will have 14 candies, which is not the highest among all children.

// Hence the answer is [True, True, False].

// Note:
// You don't have to print or return anything. You just have to fill the boolean values in output array as required.

// Input Format:
// The first line  contains two integers, ‘N’ and ‘extraCandies’, representing the number of children and extra candies.

// The second line contains ‘N’ space-separated integers, denoting the elements of the array ‘children’ where ‘children[index]’ represents the number of candies present at child at ‘index’ position.

// Output Format:
// First line of contain N 'boolean' values separated by a space.

// Constraints:
// 2 <= N <= 10^6
// 1 <= children[i] <= 10^9
// 1 <= extraCandies <= 10^9

// Time Limit: 1 sec

// Sample Input 1:
// 3 9
// 12 20 5

// Sample Ouput 1:
// True True False

// Explanation:
// For the first test case, You are given children = [12, 20, 5], and extraCandies = 9

// If you give all the candies to the child at position 1, they will have 21 candies, which is the highest among all children.

// If you give all the candies to the child at position 2, they will have 29 candies, which is the highest among all children.

// If you give all the candies to the child at position 3, they will have 14 candies, which is not the highest among all children.

// Hence the answer is [True, True, False].

// For the second test case, You are given children= [10, 11] and extraCandies = 1

// If you give all the candies to the child at position 1, they will have 11 candies, which is equal to the highest among all children.

// If you give all the candies to the child at position 2, they will have 12 candies, which is the highest among all children.

// Hence the answer is [True, True].

// Sample Input 2:
// 3 5
// 11 18 9

// Sample Output2:
// False True False

void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
        int check;
        bool ans;
    for(int i=0;i<n;i++){
        int j=0;
        check=arr[i]+extraCandies;
        while(j<n)
        {
            if(check>=arr[j]){
                ans = true;
            }
            else{
                ans = false;
                break;
            }
            j++;
        }
        output[i] = ans;
    }  
}
