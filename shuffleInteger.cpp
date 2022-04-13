class Solution{
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int temp[n];
    int index = 0;
    for(int i=0;i<n/2;i++){
        temp[index++]=arr[i];
        temp[index++]=arr[i+n/2];
    }
    for(int i=0;i<n;i++)
        arr[i]=temp[i];
	}
};
