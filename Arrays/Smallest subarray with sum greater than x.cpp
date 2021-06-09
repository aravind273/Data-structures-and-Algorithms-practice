// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        int start=0,end=0;
        int sum=0;
        int minval=n;
        for(int i=0;i<n;i++)
        {
            end=i;
            sum+=arr[i];
            if(sum>x)
            {
                minval=min(minval,end-start+1);
                while(sum>x && start<end)
                {
                    sum-=arr[start];
                    start++;
                    if(sum>x)
                    {
                        minval=min(minval,end-start+1);
                    }
                }
            }
        }
        return minval;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends
