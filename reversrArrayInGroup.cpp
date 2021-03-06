class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int a;
        int b=0;
        if(k>arr.size()){
            reverse(arr.begin(), arr.end());
        }
        else{
            for(int i=0; i<n; i+=k){
                if(i+k>=n){
                    reverse(arr.begin()+i, arr.end());
                }
                else{
            reverse(arr.begin()+i, arr.begin()+i+k);
                }
            }
            
        }
    }
};
