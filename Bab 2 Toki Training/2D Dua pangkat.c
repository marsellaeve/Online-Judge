#include<stdio.h>
	int main(){
		int N;
		while(scanf("%d",&N)!=EOF){
			while(N%2==0){
				N=N/2;
			}
		
			if(N==1){
				printf("TRUE\n");	
			}
			else
				printf("FALSE\n");
		return 0;
		}
}
