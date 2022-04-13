void solve(string ip, string op, vector<string> &v){
    if(ip.size()==0){
        v.push_back(op);
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip, op1, v);
    solve(ip,op2,v);
}

vector<string>  spaceString(char str[])
{
//Your code here
string ip, op;
vector<string>v;
ip = str;
op.push_back(ip[0]);
ip.erase(ip.begin()+0);
solve(ip, op, v);
reverse(v.begin(), v.end());
return v;
}
