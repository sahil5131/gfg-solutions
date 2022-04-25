class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int size=S.size();
        string a="";
        for(int i=0; i<size; i++){
            if(S[i]==S[i+1]){
                // S.erase(S.begin()+i);
                continue;
            }
            else{
                a=a+S[i];
            }
        }
        return a;
    }
};
