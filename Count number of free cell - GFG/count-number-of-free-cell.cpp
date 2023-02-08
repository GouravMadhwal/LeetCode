//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      int row[n] = {0};
        int col[n] = {0};
        
        int rowCount = 0,colCount=0;
        vector<long long> res;
        
        for(int i=0;i<arr.size();i++){
            rowCount = row[arr[i][0]-1] == 0 ? rowCount + ++row[arr[i][0]-1] : rowCount;
            colCount = col[arr[i][1]-1] == 0 ? colCount + ++col[arr[i][1]-1] : colCount;

            res.emplace_back(n*n - n*(rowCount+colCount) + rowCount*colCount);
        }
        
        return res;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends