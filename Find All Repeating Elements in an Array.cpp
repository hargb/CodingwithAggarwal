#include <iostream>
#include <unordered_map>
using namespace std;

/*
Problem:
Find all repeating elements in an unsorted array.

Example:
Input  : [1,2,3,2,4,1,5]
Output : 1 2
*/

int main() {

    int arr[] = {1,2,3,2,4,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int,int> freq;

    // Step 1: Count frequency of each element
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    cout << "Repeating Elements: ";

    // Step 2: Print elements whose frequency > 1
    for(auto it : freq){
        if(it.second > 1){
            cout << it.first << " ";
        }
    }

    return 0;
}
