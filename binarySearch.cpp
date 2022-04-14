class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        int low = 0;
        int high = n-1;
        int mid = (low + high)/2;
        while(low<=mid && high>=mid){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high = mid-1;
            mid=(low+high)/2;
        }
        else{
            low=mid+1;
            mid=(low+high)/2;
        }
        }
        return -1;
    }
};
