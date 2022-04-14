void rotate(int arr[], int n)
{
    int a=arr[0];
    int b = arr[n-1];
    for(int i=1; i<n ; i++){
        arr[n-i]=arr[n-i-1];
    }
    arr[0]=b;
}
