#include<stdio.h>
#include<string.h>
int main(){
	int n,a,b,c,i,j,x[10000],y;
	scanf("%d",&a); //input test case
	for(n=1;n<=a;n++){
		scanf("%d %d",&b,&c); //input angka
	memset(x,0,sizeof(x)); //set array x dengan nilai 0
	y=0;
		for(i=1;i<=c;i++){
			for(j=i;j<=b;j+=i){
				if(x[j]==0){ //jika array x = 0
					y++; //flag y
					x[j]=1; //nilai x menjadi 1
				}
				else if(x[j]==1){ //jika nilai array x = 1
					y--; //flag dikurangi
					x[j]=0; //nilai x menjadi 0
				}
			}
		}
		printf("Kasus #%d: %d\n",n,y); //print hasil
	}
}
