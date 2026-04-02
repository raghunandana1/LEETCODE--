int mySqrt(int x) {
    long i;
    for(i=0;i<=x;i++){
        if(i*i>x){
            return i-1;
        }
    }
    return x;
}