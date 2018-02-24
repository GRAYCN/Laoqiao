#include<stdio.h>  
#include<string.h>   
int a[15];  
int  dfs(int n)  
{  
    if(n==4) n++;  
    if(n>6) return 1;  
    for(int i=3; i<=14; i++)  
    {  
        if(i==7 || i==9) continue;  
        if(i+n+1<=14 && a[i]==0 && a[i+n+1]==0)  
        {  
            a[i]=a[i+n+1]=n;  
            if(dfs(n+1))   
            {  
                return 1;  
            }             
            a[i]=a[i+n+1]=0;//dfs(n+1)已经将a[i]和a[i+n+1]改变  
        }  
    }  
    return 0;  
}  
int main()  
{  
    memset(a,0,sizeof(a));  
    a[1]=7;  
    a[2]=4;  
    a[9]=7;  
    a[7]=4;  
    dfs(1);  
    for(int i=1; i<=14; i++)  
    {  
        printf("%d",a[i]);  
    }  
    printf("\n");  
    return 0;  
}  
