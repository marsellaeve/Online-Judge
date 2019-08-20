#include<stdio.h>
	long long arr[1001001];
void precomp(){
	long long i;
	arr[0]=0;
	for(i=1;i<1001001;i++){
		if(i%4==0||i%7==0) arr[i]=arr[i-1]+i;
		else arr[i]=arr[i-1];
	}
}
int main(){
	long long a,b,c;
	scanf("%lld",&b);
	precomp();
	while(b--){
	scanf("%lld",&a);
	printf("%lld\n",arr[a]);
	}
}
