class Solution{
    public:
    //You need to complete this fucntion
    const long long m=1e9+7;
    long long fun(int n,int r){
        if(r==1){
            return n;
        }
        if(r==0){
            return 1;
        }
        long long ans=fun(n,r/2);
        if(r&1){
            return n*1LL*ans%m *ans%m;
        }
        return ans%m*1LL*ans%m;
    }
    long long power(int N,int R)
    {
       //Your code here
        return fun(N,R);
    }

};
