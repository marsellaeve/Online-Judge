#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,panjang,lebar,isi;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>panjang>>lebar>>isi;
		int kiri=isi,kanan=isi-1,batas=isi*2,tanda=0;
		for(int j=0;j<panjang;j++){
			for(int l=0;l<isi*2;l++){
				if(kiri>0) kiri-=1;
				else if(kiri==0) kiri=batas-1;
				if(kanan<batas-1) kanan+=1;
				else if(kanan==batas-1) kanan=0;
				for(int k=0;k<lebar;k++){
					tanda=0;
					for(int m=0;m<isi*2;m++){
						if(m==kiri){
							tanda++;
							cout<<"/";
						} 
						else if(m==kanan){
							tanda++;
							cout<<"\\";
						}
						else if(tanda==1){
							cout<<"*";
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
