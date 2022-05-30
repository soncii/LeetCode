int divide(int dividend, int divisor) {
        if (dividend==INT_MIN) {
            if (divisor==1) return INT_MIN;
            else if (divisor==-1)return INT_MAX;
        }
        if (dividend==INT_MAX) {
            if (divisor==1) return INT_MAX;
            else if(divisor==-1) return INT_MIN;
        }
        if (divisor==1 ) return dividend;
        if (dividend<0 && divisor== -1) return -1*dividend;
        if (divisor==-1) return -1*dividend;
        int minus=false;
        if (divisor<0) { minus=!minus;  } else divisor*=-1;
        if (dividend<0) { minus=!minus; } else dividend*=-1;
        int q=0;
        long long int sum=divisor;
        while (dividend<=divisor) {
            if (sum>=dividend) {
                dividend-=sum;
                q+=sum/divisor;
                sum+=divisor;
                
            } else sum=divisor;
        }
        return minus ? -1*q : q;
        
    }
