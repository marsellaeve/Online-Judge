#include<stdio.h>
#include<string.h>
int main(){
	int a,b,c,d,i,j;
	char x[4001];
	scanf("%s",&x); //input string
	for(i=strlen(x)-1;i>=0;i--){ //diulang dari belakang string sampai huruf terdepan
		if(x[i]=='a'||x[i]=='i'||x[i]=='u'||x[i]=='e'||x[i]=='o'){ //Jika ada huruf vokal
		printf("%c",x[i]); //print huruf vokal
		i-=2; //dilompati dua huruf
		}
		else
		printf("%c",x[i]); //selain itu print biasa
	}
	printf("\n"); //print enter
}
