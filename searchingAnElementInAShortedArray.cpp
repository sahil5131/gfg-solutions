int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       int low=0;
       int high=N;
       int mid=(low+high)/2;
       while(high>=low){
           if(arr[mid]==K){
               return 1;
           }
           else if(arr[mid]>K){
               high=mid-1;
               mid=(low+high)/2;
           }
           else if(arr[mid]<K){
               low=mid+1;
               mid=(low+high)/2;
           }
       }
       return -1;
}
