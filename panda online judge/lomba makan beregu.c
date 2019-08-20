#include<stdio.h>
int main(){
		int x[100000];
	int a,b,c;
	int i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
	int l=0,m=0,n=0,min=0;
		scanf("%d",&b);
		for(j=0;j<b;j++){
		scanf("%d",&x[i]);
		if(x[i]==1) l++;
		else if(x[i]==2) m++;
		else if(x[i]==3) n++;
		}
		if(l<=m&&l<=n) min=l;
		else if(m<=l&&m<=n) min=m;
		else if(n<=m&&n<=l) min=n;
		printf("Kasus #%d: %d\n",i,min);
	}
}
