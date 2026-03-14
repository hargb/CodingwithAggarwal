#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,1,5,1,3,2};
    int k = 3;
    int n = 6;

    int sum = 0;

    // first window
    for(int i=0;i<k;i++)
        sum += arr[i];

    int maxSum = sum;

    // slide window
    for(int i=k;i<n;i++)
    {
        sum = sum - arr[i-k] + arr[i];
        maxSum = max(maxSum,sum);
    }

    cout<<maxSum;
}
