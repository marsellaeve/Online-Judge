#include<stdio.h>
int main(){
	int i,a,b,c,biner=0,j;
	int x[100000];
	scanf("%d",&a);
	for(j=1;j<=a;j++){
		scanf("%d %d",&b,&c);
		i=0;
		while(b>0){
			x[i]=b%c;
			b=b/c;
			i++;
		}
		printf("Case #%d: ",j);
		while(i--){
			if(x[i]==10) printf("A");
			else if(x[i]==11) printf("B");
			else if(x[i]==12) printf("C");
			else if(x[i]==13) printf("D");
			else if(x[i]==14) printf("E");
			else if(x[i]==15) printf("F");
			else if(x[i]==16) printf("G");
			else if(x[i]==17) printf("H");
			else if(x[i]==18) printf("I");
			else if(x[i]==19) printf("J");
			else if(x[i]==20) printf("K");
			else if(x[i]==21) printf("L");
			else if(x[i]==22) printf("M");
			else if(x[i]==23) printf("N");
			else if(x[i]==24) printf("O");
			else if(x[i]==25) printf("P");
			else if(x[i]==26) printf("Q");
			else if(x[i]==27) printf("R");
			else if(x[i]==28) printf("S");
			else if(x[i]==29) printf("T");
			else if(x[i]==30) printf("U");
			else if(x[i]==31) printf("V");
			else if(x[i]==32) printf("W");
			else if(x[i]==33) printf("X");
			else if(x[i]==34) printf("Y");
			else if(x[i]==35) printf("Z");
			else printf("%d",x[i]);
		}
		printf("\n");
	}
}
