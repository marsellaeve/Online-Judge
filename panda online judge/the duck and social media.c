#include<stdio.h>
void sort(long long arr[],long long left,long long right){
	long long i=left,j=right,data=(arr[right]+arr[left])/2;
	while(i<=j){
		while(arr[i]<data)i++;
		while(arr[j]>data)j--;
		if(i<=j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++,j--;
		}
	}
	if(left<j) sort(arr,left,j);
	if(i<right) sort(arr,i,right);
}
int main(){
	long long i,j,a,b,c;
	long long x[100001];
	scanf("%lld",&a);
	for(i=1;i<=a;i++){
		scanf("%lld",&b);
		c=0;
		for(j=0;j<b;j++){
			scanf("%lld",&x[j]);
		}
		sort(x,0,b-1);
		for(j=0;j<b;j++){
			if(x[j-1]!=x[j]) c++;
		}
		printf("Case #%lld: %lld\n",i,c);
	}
}
