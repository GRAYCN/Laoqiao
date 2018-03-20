#include <cstring>
#include <algorithm>
#include <stdio.h> 
using namespace std;

int main(){
	for(int i=1;i<=33;i++){
		for(int j=i;j<=33;j++){
			for(int k=j;k<=33;k++){
				if(i*i+j*j+k*k==1000){
					printf("%d %d %d\n",i,j,k);
				}
			}
		}	
	}
}

//so the answer is 10
