#include<stdio.h>
#include<string.h>
int main(){
	char x[20];
	int a=0,b;
	while(1){
		scanf("%s",&x);
		getchar();
		a++;
		if(strcmp("#",x)==0) break;
		else if(strcmp("HELLO",x)==0)
		printf("Case %d: ENGLISH\n",a);
		else if(strcmp("HOLA",x)==0)
		printf("Case %d: SPANISH\n",a);
		else if(strcmp("HALLO",x)==0)
		printf("Case %d: GERMAN\n",a);
		else if(strcmp("BONJOUR",x)==0)
		printf("Case %d: FRENCH\n",a);
		else if(strcmp("CIAO",x)==0)
		printf("Case %d: ITALIAN\n",a);
		else if(strcmp("ZDRAVSTVUJTE",x)==0)
		printf("Case %d: RUSSIAN\n",a);
		else printf("Case %d: UNKNOWN\n",a);
	}
}
