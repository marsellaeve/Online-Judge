#include<stdio.h>
int power(int x, unsigned int y, int p) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 

int main(){
	long long a,b,c,i,j,has;
	scanf("%lld",&a);
	while(a--){
		has=0;
		scanf("%lld",&b);
		for(i=1;i<=b;i++){
			has=has+(power(i,i,1000000007)%10);
			has=has%10;
		}
		printf("%lld\n",has%10);
	}
}
