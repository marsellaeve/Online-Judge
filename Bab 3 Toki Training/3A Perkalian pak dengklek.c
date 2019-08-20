#include<stdio.h>
int main(){
	int a,b,e=0,c,d,g;
	int i,j;
	scanf("%d %d",&a,&b);
	g=b;
	while(a>=1){
		c=a%10;
		a=a/10;
		b=g;
		while(b>=1){
			d=b%10;
			b=b/10;
			e=e+(c*d);
		}
	}
	printf("%d\n",e);
	return 0;
}
