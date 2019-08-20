#include<stdio.h>
int main(){
	int a,b,c,d,e;
	while(1){
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a==0&&b==0&&c==0&&d==0) break;
	e=720+((40-(b-a))%40)*9+360+((40-(b-c))%40)*9+((40-(d-c))%40)*9;
	printf("%d\n",e);
	}
	return 0;
}
