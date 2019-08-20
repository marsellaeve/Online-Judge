#include<stdio.h>
#include<string.h>

int arr[10001];
int prime[77778];
int cntprime;

void sieve(){
	memset(arr,0,sizeof (arr));
	int i,j;
	cntprime=0;
	arr[1]=1;
	for(i=2;i<10001;i++){
		if(arr[i]==1) continue;
		prime[cntprime++]=i;
		for(j=i+i;j<10001;j+=i) arr[j]=1;
	}
}

int main(){
	sieve();
	int c,n,i;
	scanf("%d",&n);
	for(i=0;n>1;i++){
		c=0;
		while(n%prime[i]==0){
			n/=prime[i];
			c++;
		}
		if(c==1) printf("%d",prime[i]);
		else if(c>1) printf("%d^%d",prime[i],c);
		if(c>0 && n>1) printf(" x ");
	}
	printf("\n");
}
