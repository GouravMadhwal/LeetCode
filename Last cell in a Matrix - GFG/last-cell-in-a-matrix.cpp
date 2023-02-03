//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        pair<int, int>ans;
        int i=0,j=0;
        string dir = "right";
        while(i < R and i >= 0 and j < C and j >= 0){
            if(matrix[i][j] == 0){
                if(dir == "right"){
                    j++;
                }
                else if(dir == "down"){
                    i++;
                }
                else if(dir == "left"){
                    j--;
                }
                else if(dir == "up"){
                    i--;
                }
            }
            else if(matrix[i][j] == 1){
                matrix[i][j] = 0;
                if(dir == "right"){
                    dir = "down";
                    // i++;
                }
                else if(dir == "down"){
                    dir = "left";
                    // j--;
                }
                else if(dir == "left"){
                    dir = "up";
                    // i--;
                }
                else if(dir == "up"){
                    dir = "right";
                    // j++;
                }
            }
        }
        if(i == R){
            ans.first = i-1;
            ans.second = j;
        }
        if(i < 0){
            ans.first = i+1;
            ans.second = j;
        }
        if(j == C){
            ans.first = i;
            ans.second = j-1;
        }
        if(j < 0){
            ans.first = i;
            ans.second = j+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends