#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main(void)
 {
  int a,b,c,d,e;
  while(scanf("%d",&a)!=EOF){
   scanf("%d %d",&d,&e);
   while(a--){
    scanf("%d %d",&b,&c);
    if(b==d || c==e) printf("divisa\n");
    else if(b<d && c>e) printf("NO\n");
    else if(b>d && c>e) printf("NE\n");
    else if(b<d && c<e) printf("SO\n");
    else if(b>d && c<e) printf("SE\n");
   }
  }
  return 0;
 }
