#include<stdio.h>
#include<string.h>
int y[1000][1000];
int benar;
void path(int l,int m,int b,int c,char x[][1000]){
		y[l][m]=1;
		if(l==0||l==b-1||m==0||m==c-1){
			benar=0;
			return;
		}
		if((x[l][m+1]=='#'||y[l][m+1]==1)&&(x[l-1][m]=='#'||y[l-1][m]==1)&&(x[l][m-1]=='#'||y[l][m-1]==1)&&(x[l+1][m]=='#'||y[l+1][m]==1)){
			benar=1;
			return;
		}
		
		if (m+1<c&&x[l][m+1]!='#'&&y[l][m+1]==0) path(l,m+1,b,c,x);
		if (l-1<b&&x[l-1][m]!='#'&&y[l-1][m]==0) path(l-1,m,b,c,x);
		if (m-1<c&&x[l][m-1]!='#'&&y[l][m-1]==0) path(l,m-1,b,c,x);
		if (l+1<b&&x[l+1][m]!='#'&&y[l+1][m]==0) path(l+1,m,b,c,x);
	}
	
int main(){
	int a,b,c,l,m;
	int i,j,k;
	char x[1000][1000];
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d %d",&b,&c);
		memset(y,0,sizeof(y));
		benar=0;
		getchar();
		for(j=0;j<b;j++){
			for(k=0;k<c;k++){
				scanf("%c",&x[j][k]);
			}
		getchar();
		}
		for(j=0;j<b;j++){
			for(k=0;k<c;k++){
				if(x[j][k]=='.'&&y[j][k]==0){
					l=j;
					m=k;
					path(l,m,b,c,x);
					if(benar==1)break;
				}
			}
			if(benar==1)break;
		}
		if(benar==1)printf("Case #%d: YA\n",i);
		else printf("Case #%d: TIDAK\n",i);
	}
}
