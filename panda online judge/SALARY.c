#include<stdio.h>
#include<string.h>
void sort(int arr[],int left,int right){
	int i=left,j=right,data=(arr[right]+arr[left])/2;
	while(i<=j){
		while(arr[i]>data)i++;
		while(arr[j]<data)j--;
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
	int a,b,c,i,j,k,l,m,n;
	char x[10000];
	int y[10000];
	scanf("%d",&a);
	while(a--){
		memset(y,0,sizeof(y));
		scanf("%d %d",&b,&c);
		getchar();
		for(i=0;i<b;i++){
			scanf("%c",&x[i]);
		}
		getchar();
		j=0;
		for(i=0;i<b;i++){
			if(x[i]=='X'&&x[i+1]=='X'){
				y[j]++;
			}
			else if(x[i]=='X'&&i==b-1){
				y[j]++;
			}
			else if(x[i]=='X'&&x[i+1]=='.'){
				y[j]++;
				j++;
			}
		}
		sort(y,0,j);
		int sum=0;
		l=0;
		for(k=1;k<=c;k++){
			sum=sum+(y[l]*k);
			l++;
		}
		printf("%d\n",sum);
	}
}
