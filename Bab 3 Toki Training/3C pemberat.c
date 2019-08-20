#include<stdio.h>
#include<math.h>
long long z[64];
void precom(){
	long long i;
	for(i=0;i<63;i++){
		z[i]=pow(2,i);
	}
}
int main(){
	long long a,b;
	long long n, c, k;
	scanf("%lld",&a);
	scanf("%lld",&b);
	precom();
	n=b-a; 
  	for (c = 61; c >= 0; c--){
    	k = n >> c;

	    if (k & 1) printf("%lld\n",z[c]);
	}
return 0;
}	

