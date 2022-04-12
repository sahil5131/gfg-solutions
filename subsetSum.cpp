class Solution
{
    vector<int> sum;

void printSum(vector<int> v, int ind, vector<int> &nv, vector<int> &sum){
    int sm = 0;
    if(ind==v.size()){
        for (int i = 0; i<nv.size(); i++)
        {
            sm+=nv[i];
        }
        sum.push_back(sm);
        return ;
    }
    nv.push_back(v[ind]);
    printSum(v, ind+1, nv, sum);
    nv.pop_back();
    printSum(v, ind+1, nv, sum);
    
}
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> nv;
        printSum(arr, 0, nv, sum);
        return sum;
    }
};
