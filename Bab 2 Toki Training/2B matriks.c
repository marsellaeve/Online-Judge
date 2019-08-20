#include<stdio.h>

int main () {
	int i, j, t,s;
	scanf("%d %d", &t,&s);
	int mabok[t][s];
	for (i=0;i<t;i++){
		for(j=0;j<s;j++){
			scanf("%d",&mabok[i][j]);
		}
	}
	for (i=0;i<s;i++){
		for(j=0;j<t;j++){
			if(j<t-1){
			printf("%d ",mabok[t-j-1][i]);
			}
			else
			printf("%d",mabok[t-j-1][i]);
		}
		printf("\n");
	}
	//printf("\n");
}

