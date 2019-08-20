#include <stdio.h>
#include <string.h>
 
int main()
{
   int n,t;
   char arr[1100];
 
   gets(&arr);
   
   	n= strlen(arr);
   	for(t=n-1;t>=0;t--)
	   printf("%c", arr[t]);
   printf("\n");
}
