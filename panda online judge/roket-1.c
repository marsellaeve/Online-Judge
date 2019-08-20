#include<stdio.h>
int main(){
	long long a,b,c,d,has;
	long long i,j;
	scanf("%lld",&a);
	for(i=1;i<=a;i++){
		scanf("%lld %lld",&b,&c);
		has=1;
		for(j=1;j<=b;j++){
			d=10%c;
			has=(has*d)%c;
		}
		printf("Kasus #%lld: %lld\n",i,has%c);
	}
}
