#include<stdio.h>
#include<string.h>
int main(){
	int b;
	char a[1000];
	scanf("%d",&b);
	while(b--){
		scanf("%s",&a);
		if(strcmp(a,"1")==0||strcmp(a,"4")==0||strcmp(a,"78")==0) printf("+\n");
		else if(a[strlen(a)-1]=='5'&&a[strlen(a)-2]=='3') printf("-\n");
		else if(a[0]=='9'&&a[strlen(a)-1]=='4') printf("*\n");
		else if(a[0]=='1'&&a[1]=='9'&&a[2]=='0') printf("?\n");
	}
}
