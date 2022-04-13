class Solution
{
    public:

   void sol(vector<long long> &v,long long index,int n,long long first,long long second){
       if(index==n){
           v.push_back(second);
           return;
       }
       v.push_back(second);
       first = first*first;
       long long third=first-second;
       sol(v,index+1,n,second,third);
       
   }

   void gfSeries(int N)
   {
       if(N==1){
           cout<<0;
           return;
       }
       vector<long long> v;
       v.push_back(0);
       sol(v,0,N-2,0,1);
       for(long long x:v){
           cout<<x<<" ";
       }
       cout<<endl;
   }
};
