// Mohit Juneja
// 2010991631
// CU Coding-Test 04
// Question: 1

#include <iostream>
#include <unordered_set>
using namespace std;

int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    unordered_set<int> set;
 
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        else {
            set.insert(arr[i]);
        }
    }
 
    if (minIndex == n) {
        return -1;
    }
 
    return minIndex;
}
 
int main()
{
    int k;
    cin>>k;
    int arr[k];
    for(int i=0;i<k;i++){
    cin>>arr[i];  }
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}
