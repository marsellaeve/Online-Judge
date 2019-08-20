#include<stdio.h>
long long n,c,i,j;
void bubblesort(long long data[],long long n){
	long long temp,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(data[j]>data[j+1]){
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
				c++;
			}
		}
	}
}
int main(){
	scanf("%lld",&n);
	long long data[n];
	for(i=0;i<n;i++){
		scanf("%lld",&data[i]);
	}
	bubblesort(data,n);
	printf("%lld\n",c);
}
