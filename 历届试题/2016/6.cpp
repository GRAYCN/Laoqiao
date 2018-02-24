#include <stdio.h>

bool vis[15];

int num[15];

bool check(){
	if(num[1]+num[2]==num[3]&&
		num[4]-num[5]==num[6]&&
		num[7]*num[8]==num[9]&&
		num[10]/num[11]==num[12]
	  ) return true;
	else return false;
}

void print(){
	for(int i=1;i<=12;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
}

void dfs(int x){
	if(x==13){
		if(check()){
			print();
		}
		return;
	}
	
	for(int i=1;i<=13;i++){
		if(!vis[i]){
			num[x]=i;
			vis[i]=true;
			dfs(x+1);
			num[x]=0;
			vis[i]=false;
		}
	}
}

int main(){
	dfs(1);
}
