#include <cstdio>  
#include <iostream>  
#include <algorithm>  
#include <cstring>  
  
using namespace std;  
  
int a[5] = {1, 2, 3, 5, 6};  
int tem[14];  
bool vis[10];  
  
//void dfs(int dep) {  
//	// Êä³ö 
//    if (dep == 5) {  
//        for (int i = 0; i < 14; i++) {  
//            printf("%d", tem[i]);  
//        }  
//        puts("");  
//        return ;  
//    }  
//    //  
//    for (int i = dep; i < 5; i++) {  
//        if (!vis[a[i]]) {  
//            for (int j = 0; j < 14; j++) {  
//                //??????,&&????   
//                if (tem[j] == 0 && j + a[i] + 1 < 14 && tem[j + a[i] + 1] == 0) {  
//                    tem[j] = tem[j + a[i] + 1] = a[i];  
//                    vis[a[i]] = true;  
//                    dfs(dep + 1);  
//                    vis[a[i]] = false;  
//                    tem[j] = tem[j + a[i] + 1] = 0;  
//                }  
//            }  
//        }  
//    }  
//}  

//void dfs(int dep){
//	if(dep==5){
//		//output
//		for (int i = 0; i < 14; i++) {  
//            printf("%d", tem[i]);  
//        }  
//		return;
//	}
//	for(int i=dep;i<5;i++){
//		if(!vis[a[i]]){
//			for(int j=0;j<14;j++){
//				if(tem[j]==0 && j+a[i]+1<14 && tem[j+a[i]+1]==0) {
//					tem[j]=tem[ j+a[i]+1 ]=a[i];
//					vis[a[i]]=true;
//					dfs(dep+1);
//					vis[a[i]]=false;
//					tem[j]=tem[j+a[i]+1]=0;
//				}
//			}
//		}
//	}
//} 

void dfs(int dep){
	if(dep == 5){
		//print
		for (int i = 0; i < 14; i++) {  
            printf("%d", tem[i]);  
        }  
		return;
	}
	for(int i=dep;i<5;i++){
		if(!vis[a[i]]){
			for(int j=0;j<14;j++){
				if(tem[j]==0 && j+a[i]+1<14 && tem[j+a[i]+1]==0){
					tem[j]=tem[ j+a[i]+1 ]=a[i];
					vis[a[i]]=true;
					dfs(dep+1);
					tem[j]=tem[ j+a[i]+1 ]=0;
					vis[a[i]]=false;
				}
			}
		}
	}
}

int main()  
{  
    memset(tem, 0, sizeof(tem));  
    memset(vis, false, sizeof(vis));  
    vis[4] = vis[7] = true;  
    tem[8] = tem[0] = 7;  
    tem[6] = tem[1] = 4;  
    dfs(0);  
    return 0;  
}  
