#include<stdio.h>
#include<math.h>
int main(){
	int T,N,a,b,c;
	while (scanf("%d",&N)!=EOF){
		c=1;
		if (N>0){
			for(b=2;b<=sqrt(N);b++){
				c=N%b;
				if(c==0){
					break;
				}
			}
		
			if(c==0||N==1){
				printf("TIDAK\n");
			}
			else if(c!=0||N!=1){
				printf("YA\n");	
			}
		}
		else
		printf("TIDAK\n");
	}

	return 0;
}
