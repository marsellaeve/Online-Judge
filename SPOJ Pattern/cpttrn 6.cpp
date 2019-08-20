#include<bits/stdc++.h>
using namespace std;

int main(){
	int test,panjang,lebar,titik,tinggi;
	cin>>test;
	for (int i=0;i<test;i++){
		cin>>panjang>>lebar>>tinggi>>titik;
		for(int k=0;k<tinggi;k++){
			for(int c=0;c<titik;c++){
				cout<<".";
			}
			for(int l=0;l<lebar;l++){
				for(int m=0;m<=titik;m++){
					if(m==0){
						cout<<"|";
					}
					else cout<<".";
				}
			}
			cout<<endl;
		}
		for(int j=0;j<panjang;j++){
			for(int k=0;k<=tinggi;k++){
				for(int c=0;c<titik;c++){
				if(k==0) cout<<"-";
				else cout<<".";
				}
				for(int l=0;l<lebar;l++){
					for(int m=0;m<=titik;m++){
						if(m==0&&k==0){
							cout<<"+";
						}
						else if(m!=0&&k==0){
							 cout<<"-";
						}
						else if(m==0&&k!=0){
							cout<<"|";
						}
						else cout<<".";
					}
				}
				cout<<endl;
			}
		}
		if(i<test-1) cout<<endl;
	}
}
