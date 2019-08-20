#include<stdio.h>
int main(){
	int a,b,c,d,i,j,m;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		c=0; d=0;
		scanf("%d",&b);
		for(j=0;j<b;j++){
			scanf("%d",&m);
			if(m==1) c++;
			else if(m==2) d++;
		}
		if(c%2==0 && c>0) printf("Case #%d: 0\n",i);
		else if(c%2==1&&c>0) printf("Case #%d: 1\n",i);
		else if(d%2==1 && c==0) printf("Case #%d: 2\n",i);
		else if(d%2==0 && c==0) printf("Case #%d: 0\n",i);
	}
}
