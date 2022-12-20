int hammingWeight(uint32_t n) {
    int count=0;
    while (n>0){
        if ((n&1)>0) count++;
        n = n >> 1;
    }
    return count;
}

int hammingWeight(uint32_t n) {
    int count=0;
    uint32_t bit;
    for (int i = 0; i < 32; i++) {
         bit = n&1;
         if (bit>0) count++;
         n = n >> 1;
    }
    return count;    
}
