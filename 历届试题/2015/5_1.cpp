#include<stdio.h>  
#include<string.h>   
#include<cmath>
#include<iostream>
using namespace std;
int cnt=0;
void check(int n){
	for(int i=0;i<n/2;i++){
		if( fabs((sqrt(1.0*(n*n-i*i) )-(int)sqrt(1.0*(n*n-i*i) )))<1e-8 )
			cnt++;
	}
	cout<<cnt;
}

int main()  
{  
	int a;
	cin>>a;
	check(a);
    return 0;  
}  
