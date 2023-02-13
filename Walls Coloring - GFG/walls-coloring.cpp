//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
int solve(int i,vector<vector<int>> &colors,int prevColor, vector<vector<int>>&dp)
{
    if(i==colors.size())
    {
        return 0;
    }
    if(dp[i][prevColor]!=-1)
    {
        return dp[i][prevColor];
    }
   // int ans=INT_MAX;
    int one=INT_MAX;
    int  second=INT_MAX;
    int third=INT_MAX;
    if(prevColor==0)
    {
        one=colors[i][0]+solve(i+1,colors,1,dp);
        second=colors[i][1]+solve(i+1,colors,2,dp);
        third=colors[i][2]+solve(i+1,colors,3,dp);
    }
    else
    {
        if(prevColor==1)
        {
            second=colors[i][1]+solve(i+1,colors,2,dp);
            third=colors[i][2]+solve(i+1,colors,3,dp);
        }
        else if(prevColor==2)
        {
            one=colors[i][0]+solve(i+1,colors,1,dp);
            third=colors[i][2]+solve(i+1,colors,3,dp);
        }
        else
        {
            one=colors[i][0]+solve(i+1,colors,1,dp);
            second=colors[i][1]+solve(i+1,colors,2,dp);
        }
    }
    return dp[i][prevColor]=min(one,min(second,third));
}
    int minCost(vector<vector<int>> &colors, int N) {
        vector<vector<int>>dp(N+1,vector<int>(4,-1));
        return solve(0,colors,0,dp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends