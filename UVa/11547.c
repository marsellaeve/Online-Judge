#include<stdio.h>
int main(){
	long long a,b,c;
	scanf("%lld",&a);
	while(a--){
		scanf("%lld",&b);
		c=(((b*567/9+7492)*235/47)-498)/10;
		c=c%10;
		if(c<0) c=c*(-1);
		printf("%lld\n",c);
	}
	return 0;
}
