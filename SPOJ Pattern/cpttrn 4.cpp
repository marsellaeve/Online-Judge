#include<stdio.h>
int main(){
	int t,l,c,x,i,j,m,n,a,b,h,w,a1,b1;
	scanf("%d",&t);
	for(x=1;x<=t;x++){
		scanf("%d %d %d %d",&l,&c,&h,&w);
		a=h+1;
		b=w+1;
		a1=(a*l)+1;
		b1=(b*c)+1;
		for(i=0;i<a1;i++){
			for(j=0;j<b1;j++){
				if(i==0||j==0||i==a1-1||j==b1-1)printf("*");
				else if(i%a==0||j%b==0)	printf("*");
				else printf(".");
			}
			printf("\n");			
		}
		printf("\n");
	}
	return 0;
}
