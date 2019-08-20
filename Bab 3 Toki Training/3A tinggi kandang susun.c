#include<stdio.h>
#include<string.h>

int main ()
{
	long long total=0;
	long long arr;
	long long x,y,a,max,jmlh,lantai;
	
	scanf("%lld %lld", &x, &y);
	//memset(arr,0,sizeof(arr));
	lantai=0;
	jmlh=0;
	
	while(x>y)
	{
		max=0;
		for(a=0;a<y;a++)
		{
			scanf("%lld", &arr);
			if(arr>max)
			{
				max=arr;
			}
		}
		lantai++;
		x=x-y;
		jmlh=jmlh+max;
	}
	max=0;
	for(a=0;a<x;a++)
	{
		scanf("%lld", &arr);
		if(arr>max)
		{
			max=arr;
		}
	}
	jmlh=jmlh+max+lantai+2;
	printf("%lld\n", jmlh);
}
