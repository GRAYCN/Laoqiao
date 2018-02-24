#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//int fn[1000002];

//int cal(int n){
//	if(n==1 || n==2){
//		fn[n]=1;
//		return 1;
//	}
//	if(fn[n]==0) fn[n]=cal(n-1)+cal(n-2);
//	else return fn[n];
//}

//int main() {
//	int n;
//	cin>>n;
//	cal(n);
//	cout<<fn[n];
//} 

const int N = 1000000;
int F[N];
int main(){
	F[1]=F[2]=1;
	for(int i=3;i<=N;i++){
		F[i]=(F[i-1]+F[i-2])%10007;
	}
	int n;
	cin>>n;
	cout<<F[n];
} 
