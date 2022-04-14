pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    int mx=a[0];
    int mn = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>mx){
            mx = a[i];
        }
        if(a[i]<mn){
            mn = a[i];
        }
    }
    p.first=mn;
    p.second=mx;
    return p;
}
