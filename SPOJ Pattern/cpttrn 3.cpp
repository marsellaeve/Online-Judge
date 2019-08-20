#include<stdio.h>
int main(){
	int t,l,c,x,i,j,m,n,a,b;
	scanf("%d",&t);
	for(x=1;x<=t;x++){
		scanf("%d %d",&l,&c);
		a=(l*3)+1;
		b=(c*3)+1;
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				if(i==0||j==0||i==a-1||j==b-1)printf("*");
				else if(i%3==0||j%3==0)	printf("*");
				else	printf(".");
			}
			printf("\n");			
		}
		printf("\n");
	}
	return 0;
}
