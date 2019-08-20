#include<stdio.h>
int main(){
	int n,i,a,b,c;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
		a=0;
		b=2;
	while (b<i){
	if(i%b==0){
		c=1;
		a++;
	}
	if(a>2) break;
	b++;
	}
	if(c==1&&a>2) printf("TIDAK\n");
	else printf("YA\n");
	}
}
