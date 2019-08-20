#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e,i,j,k;
	scanf("%d",&a);
	while(a--){
		d=0; e;
		scanf("%d",&b);
		for(i=1;i<=pow(2,b);i++){
			scanf("%d",&c);
			if(d<c){
				d=c;
				e=i;
			}
		}
		printf("%d\n",e);
	}
}
