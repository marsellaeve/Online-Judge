#include<stdio.h>
int main(){
	int a=0;
	char x;
	while(scanf("%c",&x)!=EOF){
		if(x=='\"'){
			if(a==0){
			a++;
			printf("``");
			}
			else if(a>0){
			a--;
			printf("''");
			}
		}
		else
			printf("%c",x);
	}
}
