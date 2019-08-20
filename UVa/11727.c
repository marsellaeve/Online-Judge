#include<stdio.h>
int main(){
	int a,b,c,d,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d %d %d",&b,&c,&d);
		if((b>c && b<d)||(b<c && b>d))
		printf("Case %d: %d\n",i,b);
		else if((c>b && c<d)||(c<b && c>d))
		printf("Case %d: %d\n",i,c);
		else if((d>b && d<c)||(d<b && d>c))
		printf("Case %d: %d\n",i,d);
	}
}
