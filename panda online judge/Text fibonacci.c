#include<stdio.h>
int main(){
	int a,b,c,i,j;
	char x,y;
	scanf("%d",&a);
	while(a--){
		getchar();
		scanf("%c %c %d",&x,&y,&b);
		if(b%2==0) printf("%c\n",x);
		else if(b%2==1) printf("%c\n",y);
	}
}
