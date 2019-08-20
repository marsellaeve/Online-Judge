#include<stdio.h>
int main(){
	int k,t,i;
	int c[10]={1,2,5,10,20,50,100,200,500,1000};
	scanf("%d",&k);
	for(i=9;i>=0;i--){
		if(k>=c[i]){
			t=k/c[i];
			k=k-c[i]*t;
			printf("%d %d\n",c[i],t);
		}
	}
	return 0;
}
