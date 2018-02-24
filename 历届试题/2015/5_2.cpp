#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i,n;
    int temp,sum;
    while(~scanf("%d",&n)){
        sum=0;
        for(i=1;i<n;i++){
            temp=sqrt(n*n-i*i);
            if(temp*temp==n*n-i*i){
                sum++;
            }
        }
        printf("%d\n",sum/2);
    }
    return 0;
}
