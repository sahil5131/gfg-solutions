void swap(int *A, int *B){
    
    // Your code here
    int c = *A;
    *A=*B;
    *B=c;
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
    int c = A;
    A=B;
    B=c;
}
