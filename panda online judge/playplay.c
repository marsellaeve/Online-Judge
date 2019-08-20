#include<stdio.h>
//author : Evelyn Tjitrodjojo
void sort(int arr[],int left,int right){
	int i=left,j=right,data=(arr[right]+arr[left])/2;
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
	int a,b,c,d;
	int i,j,k,x[1000],m,n;
	scanf("%d",&a);
		for(i=0;i<a;i++){
			scanf("%d",&x[i]);	
		}
		m=0; n=0;
		sort(x,0,a-1);
		for(j=0;j<a;j+=2){
			n=n+x[j];
		}
		for(k=1;k<a;k+=2){
			m=m+x[k];
		}
		if(n<m) b=m-n;
		else b=n-m;
		printf("%d\n",b);
} 

