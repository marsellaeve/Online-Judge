#include<stdio.h>
#include<string.h>
int main(){
	int a,b,i,f1,f2,f3;
	char x[11];
	scanf("%d",&a);
	while(a--){
		f1=0; f2=0; f3=0;
		scanf("%s",&x);
		b=strlen(x);
		if(b==3){
			if(x[0]=='o') f1++;
			if(x[0]=='t') f2++;
			if(x[1]=='n') f1++;
			if(x[1]=='w') f2++;
			if(x[2]=='e') f1++;
			if(x[2]=='o') f2++;
		}
		else if(b==5){
			if(x[0]=='t') f3++;
			if(x[1]=='h') f3++;
			if(x[2]=='r') f3++;
			if(x[3]=='e') f3++;
			if(x[4]=='e') f3++;
		}
		if(f1>=2)
		printf("1\n");
		else if(f2>=2)
		printf("2\n");
		else if(f3>=4)
		printf("3\n");
	}
}
