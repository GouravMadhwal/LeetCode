class Solution {
public:
    void sortColors(vector<int>& a) {
        int count0 = 0, count1=0, count2=0;
        int n=a.size();
        for(int i = 0;i<n;i++){
            if(a[i]==0){
                count0++;
            }
            else if(a[i]==1){
                count1++;
            }
            else if(a[i] == 2){
                count2++;
            }
        }
        int g=count0+count1;
        int s=count0+count1+count2;
        for(int i=0;i<count0;i++){
            a[i]=0;
        }
        for(int i=count0;i<g;i++){
            a[i]=1;
        }
        for(int i=g;i<s;i++){
            a[i]=2;
        }
    }
};