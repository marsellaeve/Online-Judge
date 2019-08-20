#include<stdio.h>
	int main(){
		int a,c;
		char b;
		while(scanf("%d %c %d",&a,&b,&c)!=EOF){
			if(b=='-') printf("%d\n",a-c);
			else if(b=='+') printf("%d\n",a+c);
			else if(b=='*') printf("%d\n",a*c);
			else if(b=='<') {
				if (a<c){
					printf("benar\n");
				}
				else printf("salah\n");
			}
			else if(b=='>') {
				if (a>c){
					printf("benar\n");
				}
				else printf("salah\n");
			}
			else if(b=='=') {
				if (a==c){
					printf("benar\n");
				}
				else printf("salah\n");
			}
		}
		return 0;
	}
