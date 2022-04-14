class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        //  sort(arr, arr+n);
       for(int i = 0; i<n-2; i++){
           for(int j =i+1;j<n-1;j++){
               for(int k = j+1;k<n;k++){
                   if((arr[i]+arr[j]+arr[k])==0){
                       return true;
                   }
               }
           }
       }
       return false;
    }
};
