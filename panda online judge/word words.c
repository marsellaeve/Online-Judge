#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,a,b,c,d;
	int l=0,m=0,n=0;
	char x[1000];
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		l=0; m=0; n=0;
		scanf("%d",&b);
		for(j=0;j<b;j++){
			c=0;
			scanf("%s",&x);
			c=strlen(x);
			if(c==4)l++;
			else if(c==5)m++;
			else if(c==6)n++;
		}
		printf("Case #%d: %d %d %d\n",i,l,m,n);
	}
}
