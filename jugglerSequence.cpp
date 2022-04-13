class Solution{
public:
    void solve(vector<int> &v, int k, int N){
        if(*(v.end()-1)<=1){
            return;
        }
        if(*(v.end()-1)%2==0){
            int b = pow(*(v.end()-1), 0.5);
            v.push_back(b);
        }
        else if(*(v.end()-1)%2!=0){
            int a = pow(*(v.end()-1), 1.5);
            v.push_back(a);
        }
        solve(v, k+1, N);
    }
    vector<int> jugglerSequence(int N){
        // code here
        vector<int> v;
        v.push_back(N);
        solve(v, 1, N);
        
        return v;
    }
};
