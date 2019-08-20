#include<stdio.h>
int main(){
    int i,b=0,a,x[10000];
    scanf("%d",&a); //input besar array
    for(i=0;i<a;i++){
        scanf("%d",&x[i]); //input angka 
        b=b+x[i]; //jumlah semua angka
    }
    printf("%d",b); //print angka
}
