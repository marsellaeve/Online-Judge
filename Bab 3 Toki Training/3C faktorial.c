#include<stdio.h>
int main(){
	long long a,c=0,i,temp;
	scanf("%lld",&a);
	for(i=5;i<=a;i+=5){
		temp=i;
		while(temp%5==0){
			temp/=5;
			c++;
		}
	}
	printf("%lld\n",c);
	return 0;
}
