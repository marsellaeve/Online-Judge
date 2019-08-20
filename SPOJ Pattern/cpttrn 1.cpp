#include<stdio.h>
int main(){
	int t,l,c,x,i,j,baris,kolom;
	scanf("%d",&t);
	for(x=1;x<=t;x++){
		scanf("%d %d",&l,&c);
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				if((i+j)%2==0){
				printf("*");
				}
			else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
