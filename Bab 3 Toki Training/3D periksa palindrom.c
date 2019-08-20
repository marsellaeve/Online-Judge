#include<stdio.h>
#include<string.h>
int main(){
	int h=0,j,t,k,c=0;
	char z[100000],tanda;
	while(1){
	scanf("%s%c",&z,&tanda);
	c++;
	t=strlen(z);
	h=0;
	for(j=0,k=t-1;j<=((t-1)/2);j++,k--){
		if(z[j]!=z[k]){
			h++;
		} 		
	}
	if(h==0&&c==1)printf("%s",z);
	else if(h==0) printf(" %s",z);
	if(tanda=='\n') break;
	}
	printf("\n");
return 0;
}
