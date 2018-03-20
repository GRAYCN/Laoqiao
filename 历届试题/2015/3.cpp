#include<iostream>  
#include<iomanip>  
#include<cmath>  
#include<cstdio>
#include<string>
using namespace std;  
int count[11];
int main(){
	int a,b;
	string astr,bstr;
	for(int i=1;i<1000;i++){
		fill(count,count+10,0);
		a=i*i;
		b=i*i*i;
		astr=to_string(a);
		bstr=to_string(b);
		for(int j=0;j<astr.length();j++){
			count[astr[j]-'0']++;
		}
		for(int j=0;j<bstr.length();j++){
			count[bstr[j]-'0']++;
		}
		bool flag=true;
		for(int j=0;j<9;j++){
			if(count[j]!=1) flag=false;
		}
		if(false==false) continue;
		printf("%d\n",i);
	}
}  
