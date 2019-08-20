#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		printf("%d\n",(b*b+1)*b/2);
	}
}
