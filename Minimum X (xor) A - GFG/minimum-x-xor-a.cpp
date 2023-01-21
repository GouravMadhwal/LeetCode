//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        int ct = 0;
        for(int i=0;i<32;i++){
            if(1<<i & b) ct++;
        }
        int x = 0;
        for(int i=31;i>=0 and ct > 0;i--){
            if(1<<i & a){
                x += pow(2,i);
                ct--;
            }
        }
        if(!ct) return x;
        for(int i=0;i<31 and ct > 0;i++){
            if(!(1<<i & a)){
                x += pow(2,i);
                ct--;
            }
        }
        return x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends