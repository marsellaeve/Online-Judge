#include<stdio.h>
	long long n,i;
	double a,a1,min,max,rt=0;
int main(){
	scanf("%lld",&n);
	scanf("%lf",&a1);
	max=a1;
	min=a1;
	for(i=1;i<n;i++){
		scanf("%lf",&a);
		rt=rt+a;
		if (max<a) max=a;
		if (min>a) min=a;
	}
	rt=rt+a1;
	rt=rt/n;
	printf("%.2lf %.2lf %.2lf\n",min,max,rt);
return 0;
}
