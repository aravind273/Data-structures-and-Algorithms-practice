// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int mid=(n+m+1)/2;
	    while(mid>=0)
	    {
	       int ptr1=0;
	       int ptr2=mid+1;
	       while(ptr2<n+m)
	       {
	            if(ptr1>=n)
	            {
	               
	               
	                if(arr2[ptr1-n]>arr2[ptr2-n])
	                {
	                    swap(arr2[ptr1-n],arr2[ptr2-n]);
	                }
	                ptr1++;
	                ptr2++;
	            }
	            else if(ptr2>=n)
	            {
	                
	                if(arr1[ptr1]>arr2[ptr2-n])
	                {
	                    swap(arr1[ptr1],arr2[ptr2-n]);
	                }
	                ptr1++;
	                ptr2++;
	            }
	            else
	            {
	                if(arr1[ptr1]>arr1[ptr2])
	                {
	                    swap(arr1[ptr1],arr1[ptr2]);
	                }
	                ptr1++;
	                ptr2++;
	            }
	       }
	       if(mid==0)
	       {
	           break;
	       }
	      mid=mid/2;
	    }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
