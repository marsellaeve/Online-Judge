#include<stdio.h>
int main(){
	int a,b,j=0,c,d=0,e=0;
	while(1){
		j++;
		scanf("%d",&a);
		if(a==0) break;
		d=0; e=0;
		while(a--){
			scanf("%d",&b);
			if(b>0) d++;
			else if(b==0) e++; 
		}
		printf("Case %d: %d\n",j,d-e);
	}
}
