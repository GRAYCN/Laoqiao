#include <cstring>
#include <algorithm>
#include <stdio.h> 
#include <stdlib.h>
using namespace std;

int calSum(int x){
	int sum=0;
	for(int i=1;i<=x;i++){
		sum+=i;
	}
	return sum;
}

int main(){
	for(int i=1;i<=100;i++){
		for(int j=1;j<i;j++){
			if(calSum(i)-calSum(j)==236){
				printf("%d %d\n",i,j);
				exit(0);
			}
		}
	}
} 


