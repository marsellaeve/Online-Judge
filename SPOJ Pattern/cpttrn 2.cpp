#include<stdio.h>
int main(){
	int t,l,c,x,i,j,m,n;
	scanf("%d",&t);
	for(x=1;x<=t;x++){
		scanf("%d %d",&l,&c);
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				if(i==0||j==0||i==l-1||j==c-1){
				printf("*");
				}
			else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
