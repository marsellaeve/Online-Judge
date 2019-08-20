#include <stdio.h>

void Sort(float Data[],int L, int R){
	int i=L, j=R;
	float temp, x=Data[(L+R)/2];
	while (i <= j){
		while(Data[i] < x) i++;
		while(Data[j] > x) j--;
				
		if(i <= j){
			temp=Data[i];
			Data[i]=Data[j];
			Data[j]=temp;
			i++;
			j--;
		}
	}
	if(L < j) Sort(Data,L, j);
	if(i < R) Sort(Data,i, R);
}

int main()
{
   int i, count; 
   float median,number[20000];
 
   scanf("%d", &count);
   for (i = 0; i < count; ++i)
      scanf("%f", &number[i]);
 
   Sort(number, 0,count-1);
   
   	if(count%2==0)
   	{
   		median=(number[count/2]+number[count/2-1])/2;
   	}
   	else median=number[count/2];
   	
   	printf("%.2f\n", median);
}
