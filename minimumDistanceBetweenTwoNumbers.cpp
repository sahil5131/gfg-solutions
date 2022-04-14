class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
         int xIndex= -1, yIndex= -1;
       int res = INT_MAX;
       for(int i =0; i<n; i++){
           if(a[i] == x){
               xIndex = i;
           }
           else if(a[i]==y){
               yIndex = i;
           }
           if(xIndex != -1 && yIndex != -1){
               int temp = abs(xIndex-yIndex);
               res = min(res, temp);
           }
       }
       
       if(xIndex == -1 || yIndex == -1)
           return -1;
       
       return res;
        
    }
};
