#include<stdio.h>
int main(){
	int T,N,a,b;
	scanf("%d",&T);
	while (T--){
		scanf("%d",&N);
			if (N==0) printf("%d\n",N);
		else {	
		while (N%10==0){
			N=N/10;
		}
		while (N>0){
			
		b=N%10;
				N=N/10;
				printf("%d",b);
		}

		printf("\n");
}
}
	return 0;
}
