#include<stdio.h>
#include<string.h>
int main(){
	int a,b,c=0;
	char x[10];
	scanf("%d",&a);
	while(a--){
		scanf("%s",&x);
		if(strcmp("donate",x)==0){
			scanf("%d",&b);
			c=c+b;
		}
		else if(strcmp("report",x)==0){
			printf("%d\n",c);
		}
	}
	return 0;
}
