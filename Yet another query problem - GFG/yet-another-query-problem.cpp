//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &a, vector<vector<int>> &Q) {
        // code here
        map<int,int> freq;
    for(auto &x:a)
    freq[x]++;
    map<int, vector<int>> mp;
    for(int i=0;i<N;i++){
        mp[freq[a[i]]].push_back(i);
        freq[a[i]]--;
    }
    vector<int> ans;
    for(auto &x:Q){
        int l=x[0],r=x[1],k=x[2];
        vector<int> v(mp[k]);
        auto it1=lower_bound(v.begin(),v.end(),l);
        auto it2=upper_bound(v.begin(),v.end(),r);
        ans.push_back(it2-it1);
    }
    return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends