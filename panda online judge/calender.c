#include<stdio.h>
int main(){
	int x,a,b,c,d,e,f,g,i,j,n;
	scanf("%d",&a);
	while(a--){
		n=0; x=0;
		scanf("%d:%d:%d",&b,&c,&d);
		scanf("%d:%d:%d",&e,&f,&g);
		x=x+ g-d;
		for(i=c;i<f;i++){
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			x=x+31;
			else if(i==4||i==6||i==9||i==11)
			x=x+30;
			else if(i==2) x=x+28;
		}
		x=x+((e-b)*365);
		for(j=b;j<=e;j++){
			if(j%4==0 && (j%100!=0 || j%400==0)) n++;
		}
		x=x+n;
		printf("%d\n",x);
	}
}
