#include<stdio.h>
#include<math.h>
int main(){
	int a,d,x1,y1,x2,y2,m,n,o;
	int i,j;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d %d %d",&x1,&y1,&d);
		scanf("%d %d",&x2,&y2);
		m=pow((x2-x1),2);
		n=pow((y2-y1),2);
		o=sqrt(m+n);
		if(o>d)printf("Kasus #%d: LUAR\n",i);
		else if(o<d)printf("Kasus #%d: DALAM\n",i);
		else if(o==d)printf("Kasus #%d: GARIS\n",i);
	}
}
