#include <cstring>
#include <algorithm>
#include <stdio.h> 
using namespace std;

int main(){
	int cnt=0;
	for(int i=27;i<=99;i++){
		int j=i-27;
		int k=(i%10)*10+i/10;
		if(k==j){
			cnt++;
			printf("%d\n",i);
		}
	}
	printf("%d",cnt);
} 


