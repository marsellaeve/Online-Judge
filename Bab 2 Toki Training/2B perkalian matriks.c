#include<stdio.h>

int main () {
	int i,j,k,n,u,v,m,p,q,r,s,t;	
	scanf("%d %d", &m, &n);
	int	x[m][n];
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	}

		scanf("%d %d", &p, &q);
		int y[p][q];
	for (i=0;i<p;i++){
		for(j=0;j<q;j++){
				scanf("%d",&y[i][j]);
		}
	}
		int z[m][q];
		for (i=0;i<m;i++){
			for(j=0;j<q;j++){
				z[i][j]=0;
				for(k=0;k<p;k++){
					z[i][j]+= x[i][k]*y[k][j];
				}
			}
		}
	for (i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d",z[i][j]);
				if(j<q-1){
					printf(" ");
				}
				else printf("\n");
		}
	}
return 0;
}
