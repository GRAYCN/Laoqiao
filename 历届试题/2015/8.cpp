#include<iostream> 
#include<algorithm>
using namespace std;



int main(){
	int N;
	cin>>N;
	int num;
	int pg;
//	int pre=num;
	num=pg=N;
	while(pg>=3){
		num+=pg/3;
		pg=pg/3+pg%3;
	}
	cout<<num;
}
