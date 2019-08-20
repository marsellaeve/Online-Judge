#include<stdio.h>
void tukar(long long x,long long y){
	long long temp;
	temp=x;
	x=y;
	y=temp;
}
void isiarray(long long n,long long gelas[]){
	long long i;
	for(i=1;i<=n;i++){
		gelas[i]=i;
	}
}
int main(){
	long long gelas[100000];
	long long bny,tkr,a,b,c,d,e;
	long long temp;
	scanf("%d %d",&bny,&tkr);
	isiarray(bny,gelas);
	for(a=0;a<tkr;a++){
		scanf("%d %d",&b,&c);
		temp=gelas[b];
		gelas[b]=gelas[c];
		gelas[c]=temp;
	}
	scanf("%d",&d);
	while(d--){
		scanf("%d",&e);
		printf("%d\n",gelas[e]);
}
	return 0;
}
