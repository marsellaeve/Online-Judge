#include<stdio.h>
#include<string.h>
int main(){
	int a,b,i,j,d,u,c,k;
	char x[105];
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		d=0; u=0; c=0; k=0; b=0;
		scanf("%s",&x);
		for(j=0;j<=strlen(x);j++){
			if(d==0 && u==0 &&c==0 &&k==0 && x[j]=='d') d++;
			else if(d==1 && u==0 &&c==0 &&k==0 && x[j]=='u') u++;
			else if(d==1 && u==1 &&c==0 &&k==0 && x[j]=='c') c++;
			else if(d==1 && u==1 &&c==1 &&k==0 && x[j]=='k') k++;
			else if(d==1 && u==1 &&c==1 &&k==1){
			b=1;
			break;
			}
		}
		if (b==1)
		printf("Case #%d: YES\n",i);
		else
		printf("Case #%d: NO\n",i);
	}
}
