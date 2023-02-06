//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
           int i = 0, ans = 0;
        while(i < n) {
            int pos = 0, neg = 0, j = i, first_neg = -1, last_neg = -1;
            while(i < n && arr[i]) {
                pos += arr[i] > 0;
                if(arr[i] < 0) {
                    neg += 1;
                    if(first_neg == -1) {
                        first_neg = i;
                    }
                    last_neg = i;
                }
                i += 1;
            }
            if(neg % 2) {
                ans = max(ans, pos + neg - (first_neg + 1 - j));
                ans = max(ans, pos + neg - (i - last_neg));
            }
            else {
                ans = max(ans, pos + neg);
            }
            i += 1;
       }
       return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends