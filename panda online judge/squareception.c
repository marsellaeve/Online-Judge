#include<stdio.h>
int power(long long x, unsigned long long y, long long p){ 
    long long res = 1;      // Initialize result 
    x = x % p;  // Update x if it is more than or  
                // equal to p 
    while (y > 0){ 
        // If y is odd, multiply x with result 
        if (y%2== 1) //y&1
            res = (res*x) % p; 
        // y must be even now 
        y = y/2; // y = y>>1 
        x = (x*x) % p;   
    } 
    return res; 
} 
int main(){
	long long a,b,c,d,i,j;
	scanf("%lld",&a); //input tes case
	for(i=1;i<=a;i++){
		c=0; d=0;
		scanf("%lld",&b); //input angka
		c=power(5,b-1,1000000007); //modex angka
		d=4*c%1000000007; //hasilnya dikalikan 4
		printf("Case #%lld: %lld\n",i,d); //print hasil
	}
}
