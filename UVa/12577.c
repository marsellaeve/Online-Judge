#include<stdio.h>
#include<string.h>
int main(){
	int a=0,b,c;
	char x[10];
	while(1){
		a++;
		scanf("%s",&x);
		if(strcmp("*",x)==0) break;
		else if(strcmp("Hajj",x)==0) printf("Case %d: Hajj-e-Akbar\n",a);
		else if(strcmp("Umrah",x)==0) printf("Case %d: Hajj-e-Asghar\n",a); 
	}
}
