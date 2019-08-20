#include<stdio.h>
int main(){
	long long t,temp,i,a,b,hasil[10000];
	scanf("%lld",&t);
	for(i=1;i<=t;i++){
		scanf("%lld %lld",&a,&b);
		while(b>0){
			temp=a%b;
			a=b;
			b=temp;
		}
		hasil[i]=a;
	}
	for(i=1;i<=t;i++){
		printf("%lld\n",hasil[i]);
	}
	return 0;
}
