#include<stdio.h>
#include<math.h>
long long cnt,n;
int square(long long base){
long long square;
	cnt=1;
	square=0;
	while (cnt<=base){
		square=square+pow(cnt,2);
		cnt++;
	}
	return square;
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld\n",square(n));
return 0;
}
