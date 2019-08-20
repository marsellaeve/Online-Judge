#include <stdio.h>
#include<string.h>
int main(){
int arr[100];
int a,n=0,m,jum=0,x,y,b,la,li,lu;
memset(arr,0,sizeof(arr));
scanf("%d %d %d",&la,&li,&lu);
int jMax=0;
for(x=0;x<3;x++){
	scanf("%d %d",&a,&b);
      	if(b>=jMax){
          jMax=b;
   		}
   		for(y=a;y<=b-1;y++){
   			arr[y]++;
		   }
}
for(x=1;x<=jMax-1;x++){
	if(arr[x]==1) jum=jum+la;
	if(arr[x]==2) jum=jum+2*li;
	if(arr[x]==3) jum=jum+3*lu;
}
    printf("%d\n",jum);
return 0;
}
