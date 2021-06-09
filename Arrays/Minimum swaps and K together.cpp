// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
// } Driver Code Ends

#include<bits/stdc++.h>
int minSwap(int *arr, int n, int k) {
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            count++;
        }
    }
    int bad=0;
    for(int i=0;i<count;i++)
    {
        if(arr[i]>k)
        {
            bad++;
        }
    }
    int minval=bad;
    for(int i=1;i<=n-count;i++)
    {
        if(arr[i-1]>k)
        {
            bad--;
        }
        if(arr[i+count-1]>k)
        {
            bad++;
        }
        minval=min(minval,bad);
    }
    return minval;
    
}
