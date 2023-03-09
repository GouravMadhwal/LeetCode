//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
    bool check(int i ,int j,vector<int>&vis){
      
      for(int k = i;k<=j;k++){
          
          if(vis[k]) return 0;
      }
      
      for(int k = i;k<=j;k++){
          
          vis[k]=1;
      }
      return 1;
    }
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        vector<Node*>res;
        int k = s.size();
        
         sort(s.begin(),s.end());
         
        vector<Node*>v;
        Node*t1 = head;
        
        while(t1){
            
            v.push_back(t1);
            t1 = t1->next;
        }
        
        int i = 0;
        int j = 0;
        string t = "";
        vector<int>vis(v.size(),0);
        while(j<v.size()){
           
            t.push_back(v[j]->data);
           
     
            
            if(j-i+1==k){
              
                string l = t;
                
                sort(l.begin(),l.end());
                if(l==s and check(i,j,vis)){
                  
                   Node*a = v[j];
                
                   a->next = NULL;
                    res.push_back(v[i]);
                }
                reverse(t.begin(),t.end());
                t.pop_back();
                reverse(t.begin(),t.end());
                
                i++;
                
            }
    
            j++;

        }
 
     
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends