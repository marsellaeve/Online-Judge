#include<stdio.h>
int main(){
	int a,b,c,jum;
	int i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		jum=0;
		scanf("%d",&b);
		while(b--){
			scanf("%d",&c);
			jum=jum+c;
		}
		if(jum<=16000) printf("Case #%d: 16GB\n",i);
		else if(jum<=32000) printf("Case #%d: 32GB\n",i);
		else if(jum<=64000) printf("Case #%d: 64GB\n",i);
		else if(jum<=128000) printf("Case #%d: 128GB\n",i);
	}
}
