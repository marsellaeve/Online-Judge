#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char catcher;
	int a,b,l,c,i=1,j,sisa=0,biner=0;
	scanf("%d%c",&a,&catcher);
	while(a--){
		biner=0; sisa=0; i=1;
		scanf("%d%c",&b,&catcher);
		if(b==1){
			scanf("%d%c",&l,&catcher);
			biner=0; sisa=0; i=1;
			c=l;
			while(c>0){
				sisa=c%2;
				c=c/2;
				biner=biner+(i*sisa);
				i=i*10;
			}
			printf("%d\n",biner);
			
			biner=0; sisa=0; i=1; c=l;
			while(c>0){
				sisa=c%8;
				c=c/8;
				biner=biner+(i*sisa);
				i=i*10;
			}
			printf("%d\n",biner);
			
			char x[100];
			i=0; biner=0; sisa=0; c=l;
			while(c>0){
				sisa=c%16;
				x[i]=sisa;
				c=c/16;
				i++;
//				biner=biner+(i*sisa);
//				i=i*10;
			}
			while(i--){
			if(x[i]==10)
			printf("A");
			else if(x[i]==11)
			printf("B");
			else if(x[i]==12)
			printf("C");
			else if(x[i]==13)
			printf("D");
			else if(x[i]==14)
			printf("E");
			else if(x[i]==15)
			printf("F");
			else
			printf("%d",x[i]);
			}
			printf("\n");
		}
		else if(b==2){
			scanf("%d%c",&l,&catcher);
			int m=l,bagi,angka=0;
			for(i=0;m>0;i++){
				bagi=m%10;
				angka=angka+(pow(2,i)*bagi);
				m=m/10;
			}
			l=angka;
			printf("%d\n",angka);
			
			biner=0; sisa=0; i=1; c=l;
			while(c>0){
				sisa=c%8;
				c=c/8;
				biner=biner+(i*sisa);
				i=i*10;
			}
			printf("%d\n",biner);
			
			char x[100];
			i=0; biner=0; sisa=0; c=l;
			while(c>0){
				sisa=c%16;
				x[i]=sisa;
				c=c/16;
				i++;
//				biner=biner+(i*sisa);
//				i=i*10;
			}
			while(i--){
			if(x[i]==10)
			printf("A");
			else if(x[i]==11)
			printf("B");
			else if(x[i]==12)
			printf("C");
			else if(x[i]==13)
			printf("D");
			else if(x[i]==14)
			printf("E");
			else if(x[i]==15)
			printf("F");
			else
			printf("%d",x[i]);
			}
			printf("\n");
		}
		else if(b==3){
			scanf("%d%c",&l,&catcher);
			int m=l,bagi,angka=0;
			for(i=0;m>0;i++){
				bagi=m%10;
				angka=angka+(pow(8,i)*bagi);
				m=m/10;
			}
			l=angka;
			printf("%d\n",angka);
			
			biner=0; sisa=0; i=1;
			c=l;
			while(c>0){
				sisa=c%2;
				c=c/2;
				biner=biner+(i*sisa);
				i=i*10;
			}
			printf("%d\n",biner);
			
			char x[100];
			i=0; biner=0; sisa=0; c=l;
			while(c>0){
				sisa=c%16;
				x[i]=sisa;
				c=c/16;
				i++;
//				biner=biner+(i*sisa);
//				i=i*10;
			}
			while(i--){
			if(x[i]==10)
			printf("A");
			else if(x[i]==11)
			printf("B");
			else if(x[i]==12)
			printf("C");
			else if(x[i]==13)
			printf("D");
			else if(x[i]==14)
			printf("E");
			else if(x[i]==15)
			printf("F");
			else
			printf("%d",x[i]);
			}
			printf("\n");
		}
		if(b==4){
			char x[100];
			int m=0,bagi,angka=0,you=0,lo=0;
			scanf("%s%c",&x,&catcher);
			i=0; biner=0; sisa=0; c=l;
			for(i=0;i<strlen(x);i++){
//				printf("%d %c\n",i,x[i]);
				if(x[i]=='A')
					you=10;
				else if(x[i]=='B')
					you=11;
				else if(x[i]=='C')
					you=12;
				else if(x[i]=='D')
					you=13;
				else if(x[i]=='E')
					you=14;
				else if(x[i]=='F')
					you=15;
				else
					you=x[i]-48;
				m=m*16+you;
			}
			printf("%d\n",m);
			biner=0; sisa=0; i=1;
			c=m;
			while(c>0){
				sisa=c%2;
				c=c/2;
				biner=biner+(i*sisa);
				i=i*10;
			}
			printf("%d\n",biner);
			
			biner=0; sisa=0; i=1; c=m;
			while(c>0){
				sisa=c%8;
				c=c/8;
				biner=biner+(i*sisa);
				i=i*10;
			}
			printf("%d\n",biner);	
		}
//		printf("\n");
	}
}
