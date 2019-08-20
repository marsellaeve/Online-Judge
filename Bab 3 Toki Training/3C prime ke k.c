#include<stdio.h>
#include<string.h>
int arr[1000001];
int prime[77778];
int cntprime;
void sieve(){
	memset(arr,0,sizeof (arr));
	int i,j;
	cntprime=1;
	arr[1]=1;
	for(i=2;i<1000001;i++){
		if(arr[i]==1) continue;
		prime[cntprime++]=i;
		for(j=i+i;j<1000001;j+=i) arr[j]=1;
	}
}
int main(){
	sieve();
	int t,a;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		printf("%d\n",prime[a]);
	}
}
