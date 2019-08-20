#include<stdio.h>
int main(){
	long long a,b,c;
	scanf("%lld",&a);
	while(a--){
		scanf("%lld",&b);
		printf("%lld\n",b*(b*b+1)/2);
	}
}
