    uint32_t reverseBits(uint32_t n) {
    int res=0;
    for (int i=0; i<31; i++) {
        if (n&1==1) res+=1;
        n=n>>1;
        res=res<<1;
    }
        if (n&1==1) res+=1;
        return res;
    }