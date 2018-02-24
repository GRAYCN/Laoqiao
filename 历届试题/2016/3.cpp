#include <cstring>
#include <algorithm>
#include <stdio.h> 
#include <stdlib.h>
#include <cmath>
using namespace std;
int t;
bool flag[10];
int map[4][5];
int sum=0;

bool judge(){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(fabs(map[i][j]-map[i][j+1])==1||fabs(map[i][j]-map[i+1][j])==1||fabs(map[i][j]-map[i+1][j-1])==1||fabs(map[i][j]-map[i+1][j+1])==1)  
              return false;  	
		}
	}
	return true;
}

void dfs(int x){
	if(x==11){
		if(judge()){
			sum++;
		}
		return;
	}
	for(int i=0;i<=9;i++){
		if(!flag[i]){
			flag[i]=true;
			map[i/4][i%4]=i;
			dfs(x+1);
			flag[i]=false;
		}
	}
}

int main(){
	int i;
	for(i=0;i<4;i++){
		map[i][4]=1000;
	}
	for(i=0;i<5;i++){
		map[3][i]=1000;
	}
	map[0][0]=map[2][3]=1000;
	fill(flag,flag+10,false);
	dfs(1);
	printf("%d\n",sum);
} 


