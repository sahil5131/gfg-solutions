class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
    map<char, int> m1;
    map<char, int> m2;
    for(int i=0; i<a.size(); i++){
        m1[a[i]]++;
    }
    for(int i=0; i<b.size(); i++){
        m2[b[i]]++;
    }
    if(m1==m2){
        return true;
    }
    return false;
        
    }

};
