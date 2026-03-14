#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int n, int arr2[], int m)
{
    unordered_set<int> s;

    // store elements of arr1
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }

    // check arr2 elements
    for(int i=0;i<m;i++)
    {
        if(s.find(arr2[i]) == s.end())
        return false;
    }

    return true;
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,4,5};

    int n = 5;
    int m = 3;

    if(isSubset(arr1,n,arr2,m))
    cout<<"Yes subset";
    else
    cout<<"Not subset";
}
