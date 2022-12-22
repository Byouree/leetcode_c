bool isPowerOfTwo(int n){
    int count = 0;
    if (n<=0) return false;
    while(n>0){
        if ((n&1)!=0) count++;    
        n = n >> 1;
    }

    if (count >1) return false;
    return true;
    

}
