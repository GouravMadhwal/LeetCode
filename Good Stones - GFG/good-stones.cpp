//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int solve(int indx,vector<int>&arr,int n,vector<int>&vis)
    {
    if(indx<0 || indx>n-1) return 2; // good stone.
    if(vis[indx]==1 || vis[indx]==2) return vis[indx]; // aleradey vis.
    vis[indx]=1;
    return vis[indx]= solve(indx+arr[indx],arr,n, vis);
    }
    int goodStones(int n,vector<int> &arr){
        // Code here
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            solve(i,arr,n,vis);
        }
        int ans=0;
        for(auto it :vis)
        {
            if(it==2) ans++;
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends