class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
       int mx = INT_MIN;
    
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
    }
    return mx; 
    }
};
