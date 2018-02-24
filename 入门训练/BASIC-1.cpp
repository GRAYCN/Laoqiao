#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check(int year){
	if((year%4==0 && year%400 != 0) || year%400==0 )
		return true;
	return false;
}

int main() {
	int year;
	cin>>year;
	if(check(year))
		cout<<"yes";
	else cout<<"no";
} 
