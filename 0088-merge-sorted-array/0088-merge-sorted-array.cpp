class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        if(n==0){return;}
        int len1=arr1.size();
        int endIndex=len1-1;
        while(n>0 && m>0){
            if(arr2[n-1]>=arr1[m-1]){
                arr1[endIndex]=arr2[n-1];
                n--;
            }
            else{
                arr1[endIndex]=arr1[m-1];
                m--;
            }
            endIndex--;
        }
        while(n>0){
            arr1[endIndex]=arr2[n-1];
            n--;
            endIndex--;
        }
    }
};