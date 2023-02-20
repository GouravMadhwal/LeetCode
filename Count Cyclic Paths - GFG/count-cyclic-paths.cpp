//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
const int mod = 1e9 + 7;
    int countPaths(int n){
        // code here 
        vector<int>pre(4, 0); // for the previous iterations to reach 0 from all the 4 vertices.
        pre[0] = 1; // since reaching 0 from any vertex will count 1 way
        for(int i=1;i<=n;i++) {
            int ans = 0;
            vector<int>cur(4, 0); // for calculating the total number of ways to reach 0 from all current vertices. 
            for(int j=0;j<4;j++) ans = (ans + pre[j]) % mod;
            for(int j=0;j<4;j++) {
                cur[j] = (ans - pre[j]) % mod; // since self loops are not allowed and therefore we need to subtract total number of ways to reach 0 in n-1th iteration from the vertex which is same as that of current vertex.
                if(cur[j] < 0) cur[j] = (cur[j] + mod) % mod;
            }
            pre = cur;
        }
        return pre[0]%mod;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends