#include<stdio.h>
#include<string.h>
int main(){
	int a,i,flag,j,lenght;
	char x[10000];
	scanf("%d",&a);
	while(a--){
		scanf("%s",&x);
		lenght=2;
		if(x[0]<97){
			flag=1;
		}
		else flag=0;
		for(i=1;i<strlen(x);lenght++){
			for(j=0;j<lenght && i< strlen(x);j++,i++){
			if(flag==1 && x[i]<97) x[i] = x[i]+32;
			if(flag==0 && x[i]>=97) x[i] = x[i]-32;
			}
			flag=(flag+1)%2;
		}
		printf("%s\n",x);
	}
}
