#include<stdio.h>
int main(){
	int a,b,c,d,i,j;
	scanf("%d %d",&a,&b);
	int x[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&x[i][j]);
		}
	}
	scanf("%d %d",&c,&d);
	int y[c][d];
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			scanf("%d",&y[i][j]);
		}
	}
	int l=0,m=0,n=0,o=0,p=0;
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			if(x[i][j]==y[i][j]) l++; //identik
			if(x[i][j]==y[c-i-1][j]) m++; //horisontal
			if(x[i][j]==y[i][c-j-1]) n++; //vertikal
			if(x[i][j]==y[j][i]) o++; //diagonal kanan bawah
			if(x[i][j]==y[c-j-1][c-i-1]) p++; //diagonal kiri bawah
		}
	}
	if(l==(c*d)) printf("identik\n");
	else if(m==(c*d)) printf("horisontal\n");
	else if(n==(c*d)) printf("vertikal\n");
	else if(o==(c*d)) printf("diagonal kanan bawah\n");
	else if(p==(c*d)) printf("diagonal kiri bawah\n");
	else printf("tidak identik\n");
}
