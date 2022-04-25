string printNumber(string s, int n) 
{
    //code here
    string k = "";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(int i=0;i<n;i++){
        if(s[i]=='A'|| s[i]=='B' || s[i]=='C') 
       k+="2";
       
       if(s[i]=='D'|| s[i]=='E' || s[i]=='F') 
       k+="3";
       
       if(s[i]=='G'|| s[i]=='H' || s[i]=='I') 
       k+="4";
       
       if(s[i]=='J'|| s[i]=='K' || s[i]=='L') 
       k+="5";
       
       if(s[i]=='M'|| s[i]=='N' || s[i]=='O') 
       k+="6";
       
       if(s[i]=='P'|| s[i]=='Q' || s[i]=='R' || s[i]=='S') 
       k+="7";
       
       if(s[i]=='T'|| s[i]=='U' || s[i]=='V') 
       k+="8";
       
       if(s[i]=='W'|| s[i]=='X' || s[i]=='Y' || s[i]=='Z') 
       k+="9";
        
    }
    return k;
}
