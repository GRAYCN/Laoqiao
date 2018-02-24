#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	else return(b,a%b);
} 

int lcm(int a,int b){
	int d=gcd(a,b);
	return a*b/d;
}

int main() {
	int n;
	cin>>n;
	int cnt=0;
	int result=1;
	while(cnt<3){
		if(lcm(result,n)==result*n){
			result=result*n;
			cnt++;
		}
		n--;
	}
} 
