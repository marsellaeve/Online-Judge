#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,panjang,lebar,isi,tandap,tandal;
	cin>>test;
	for(int t=0;t<test;t++){
	cin>>panjang>>lebar>>isi;
	for(int a=0;a<(isi+1)*lebar+1;a++){
		cout<<"*";
	}
	cout<<endl;
		for(int i=0;i<panjang;i++){
			if(i%2==0){
				tandap=0;
			}
			else tandap=1;
			for(int k=0;k<isi+1;k++){
				cout<<"*";
				for(int j=0;j<lebar;j++){
					if(j%2==0){
						tandal=0;
					}
					else tandal=1;				
					for(int l=0;l<isi+1;l++){
						if(k==isi||l==isi){
							cout<<"*";
						}
						else if(k==l&&tandap%2==tandal%2){
							 cout<<"\\";
						}
						else if((k+l==isi-1)&&tandap%2!=tandal%2){
							 cout<<"/";
						}
						else cout<<".";
					}
				}
				cout<<endl;
			}
		}
	if(t!=test-1) cout<<endl;
	}
}
