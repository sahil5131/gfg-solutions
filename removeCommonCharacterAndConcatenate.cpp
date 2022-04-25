class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string ans="";
        
        for(int i=0; i<s1.size(); i++){
            if(s2.find(s1[i])==std::string::npos){
                ans+=s1[i];
            }
        }
        for(int i=0; i<s2.size(); i++){
            if(s1.find(s2[i])==std::string::npos){
                ans+=s2[i];
            }
        }
        if(ans==""){
            string a="-1";
            return a;
        }
        return ans;
    }

};
