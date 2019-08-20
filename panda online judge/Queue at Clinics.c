#include<stdio.h>
#include<string.h>
int main(){
	long long i,j,a,b,c,d,f,g,e[100005],y[100005],z,temp,temp1;
	char x,trash;
	scanf("%lld%c",&a,&trash);
	for(i=1;i<=a;i++){
		printf("Kasus #%lld:\n",i);
		scanf("%lld%c",&b,&trash);
		c=1; g=1; z=1;
		memset(e,0,sizeof(e));
		memset(y,0,sizeof(y));
		for(j=0;j<b;j++){
			scanf("%c%c",&x,&trash);
			if(x=='d'){
				scanf("%lld%c",&e[c],&trash);
				y[e[c]]=z;
				z++;
				c++;
			}
			//y[nomor]=urutan, e[urutan]=nomor
			else if(x=='p'){
				scanf("%lld %lld%c",&d,&f,&trash);
				if(f==-1){
					e[(y[d])]=-2;
					y[d]=-2;
				}
				else{
					if(y[d]<y[f]){
						e[(y[d])]=e[(y[f])];
						e[(y[f])]=-2;
						y[f]=y[d];
						y[d]=-2;
					}
					else if(y[d]>y[f]){
						e[(y[d])]=-2;
						y[d]=-2;
					}
				}
			}
			else if(x=='a'){
				while(e[g]==-2) g++;
				printf("%lld\n",e[g]);
				if(e[g]!=0)
				g++;
			}
		}
	}
}
