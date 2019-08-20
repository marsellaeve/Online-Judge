#include<stdio.h>
int main(){
	int a,b,c,d,e;
	int i,j,k,has;
	int x[10000],y[10000];
	int max=-1001,min=1001,max2=-1001,min2=1001;
	scanf("%d",&a);
	for(j=1;j<=a;j++){
		max=-1001,min=1001,max2=-1001,min2=1001;
		scanf("%d",&b);
		for(i=0;i<b;i++){
			scanf("%d %d",&x[i],&y[i]);
			if(x[i]>max) max=x[i];
			if(x[i]<min) min=x[i];
			if(y[i]>max2) max2=y[i];
			if(y[i]<min2) min2=y[i];
		}
		if((max-min)>(max2-min2))has=(max-min)*(max-min);
		else if((max-min)<=(max2-min2))has=(max2-min2)*(max2-min2);
	printf("Case #%d: %d\n",j,has);
	}
}
