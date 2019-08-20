#include<stdio.h>
int main(){
	int a,b=0,c,i,j;
	int x[10000];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&x[i]);
	}
	if(x[0]%2==0){
		for(i=1;i<a;i+=2){
			if(x[i]%2==0){
				b++;
				break;
			}
		}
		for(i=2;i<a;i+=2){
			if(x[i]%2==1){
				b++;
				break;
			}
		}
	}
	if(x[0]%2==1){
		for(i=1;i<a;i+=2){
			if(x[i]%2==1){
				b++;
				break;
			}
		}
		for(i=2;i<a;i+=2){
			if(x[i]%2==0){
				b++;
				break;
			}
		}
	}
	if(b!=0)printf("0\n");
	else printf("1\n");
}
