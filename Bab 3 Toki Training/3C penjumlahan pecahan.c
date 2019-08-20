#include<stdio.h>
int FPB(long long x, long long y){
	long long r,fpb;
	while(y>0){
		r=x%y;
		x=y;
		y=r;
	}
	fpb=x;
	return fpb;
}
int main(){
	long long a,b,c,d,e,f,g,temp;
	scanf("%lld %lld",&a,&b);
	scanf("%lld %lld",&c,&d);
	if(b==0){
		e=c;
		f=d;
	}
	else if(d==0){
			e=a;
			f=b;
		}
		else{
			g=FPB(b,d);
			b=b/g;
			d=d/g;
			a=a*d;
			c=c*b;
			f=b*d*g;
			e=a+c;
		}
	while(FPB(e,f)>1){
		temp=FPB(e,f);
		e=e/temp;
		f=f/temp;
	}
	if(e==f)
	printf("1\n");
	else printf("%lld %lld\n",e,f);
	return 0;
}
