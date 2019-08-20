#include<stdio.h>
		int x[25001];
	int main(){
		int i=0;
		while (scanf("%d",&x[i])!=EOF){
			i++;
		}
		while (i--){
			printf("%d\n",x[i]);
		}	
	return 0;
	}
