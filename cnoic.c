bool isPalindrome(int x) {
    int n,a;
    n=x;
    long int rev=0;
    while(n!=0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(x>=0){
        return (x==rev);
    }else{
        return false;
    }
    
}