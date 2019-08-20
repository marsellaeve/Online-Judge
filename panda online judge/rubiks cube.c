#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		printf("%d\n",(b*b*2)+((b-2)*b*2)+((b-2)*(b-2)*2));
	}
}
