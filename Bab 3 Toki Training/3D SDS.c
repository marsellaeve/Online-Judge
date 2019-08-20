#include<stdio.h>
#include<math.h>
	long long n,i;
	double simpbaku=0,a,a1,min,max,rt=0,rtk=0;
int main(){
	scanf("%lld",&n);
	scanf("%lf",&a1);
	max=a1;
	min=a1;
	for(i=1;i<n;i++){
		scanf("%lf",&a);
		rt=rt+a;
		rtk=rtk+pow(a,2);
		if (max<a) max=a;
		if (min>a) min=a;
	}
	rtk=rtk+pow(a1,2);
	rt=rt+a1;
	rt=rt/n;
	simpbaku= sqrt((rtk-(pow(rt,2))*n)/(n-1));
	printf("%.2lf %.2lf %.2lf %.2lf\n",min,max,rt,simpbaku);
return 0;
}
