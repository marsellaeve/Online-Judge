#include <stdio.h>
int main(){
long long arr[600001];
long long a,n=0,m,modus=0,x,y,b;
long long i=0;
	while (scanf("%lld",&arr[i])!=EOF){
		i++;
	}
long long max=0,min=arr[0];
for(x=i-1;x>=0;x--){
	if(arr[x]>max) max=arr[x];
}
for(y=i-1;y>=0;y--){
          if(arr[y]<min)
		  min=arr[y];
}
    printf("%lld\n",max-min);
return 0;
}
