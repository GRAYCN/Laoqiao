#include<stdio.h>  
#include<string.h>  
#include<math.h>  
int t;  
int flag[10];  //???????  
int map[4][5];  
int sum=0;  
int judge()  
{//????????  
    int i,j;  
    for(i=0;i<3;i++)  
    {  
        for(j=0;j<4;j++)  
            if(fabs(map[i][j]-map[i][j+1])==1||fabs(map[i][j]-map[i+1][j])==1||fabs(map[i][j]-map[i+1][j-1])==1||fabs(map[i][j]-map[i+1][j+1])==1)  
              return 0;  
    }  
    return 1;  
}  
void dfs(int t)  
{//DFS?????,  
    int i;  
    if(t==11)  
    {  
       if(judge())  
        sum++;  
       return;  
    }  
    for(i=0;i<=9;i++)  
    {  
        if(!flag[i])  
        {  
            flag[i]=1;  
            map[t/4][t%4]=i;  
            dfs(t+1);  
            flag[i]=0;  
        }  
    }  
}  
int main()  
{  
    int i;  
    for(i=0;i<4;i++)  
    {  
        map[i][4]=1000;  
    }  
    memset(flag,0,sizeof(flag));  
    for(i=0;i<5;i++)  
        map[3][i]=1000;  
    map[0][0]=map[2][3]=1000;  
    dfs(1);  
    printf("%d\n",sum);  
    return 0;  
}  

