class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string s1="";
        int size=str1.size();
        string s2="";
        for(int i = 0; i<size-2; i++){
            s1+=str1[i+2];
        }
        for(int i=0; i<2; i++){
            s1+=str1[i];
        }
        for(int i=2; i>0; i--){
            s2+=str1[size-i];
        }
        for(int i=0; i<size-2; i++){
            s2+=str1[i];
        }
        // str1[size-2]=str[0];
        // str1[size-1]=str[1];
        if(s1==str2 || s2==str2){
            return 1;
        }
        
        return 0;
    }

};
