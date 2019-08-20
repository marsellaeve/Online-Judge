#include<bits/stdc++.h>
using namespace std;
int main(){
	int u,tc,a,max=0;
	string mail;
	cin>>u;
	for(int p=1;p<=u;p++){
	map<string,int> arr;
	cin>>tc;
	while(tc--){
		max=0;
		string temp;
		cin>>temp;
		for(int i=0;i<temp.length();i++){
			if(temp[i]=='@') a=i+1;
		}
		temp=temp.substr(a,temp.length()-a);
		arr[temp]++;
	}
	cout<<"Kasus #"<<p<<": ";
	for(auto it=arr.begin();it!=arr.end();it++){
		if(it->second>max){
			max=it->second;
			mail=it->first;
		}
	}
	cout<<mail<<endl;
	}
}
