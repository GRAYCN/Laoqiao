#include <stdio.h>

bool vis[15];

int num[15];

bool check(){
    if(num[1]+num[2]==num[3]&&
       num[4]-num[5]==num[6]&&
       num[7]*num[8]==num[9]&&
       num[10]/num[11]==num[12]&&
       num[10]%num[11]==0       //最后这一个地方很容易忽略，整数相处一定要保证取余后为0
       ) return true;
    else return false;
}

void print(){
    for(int i=1;i<=12;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

int cnt=0;

void dfs(int x){
    if(x==13){
        if(check()){
            cnt++;
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
    printf("%d",cnt);
}
