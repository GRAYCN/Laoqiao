#include<iostream> 
#include<algorithm>
using namespace std;

int res[10000][12],a[12];

bool same(int a[],int b[]){
	for(int k=0;k<12;k++){
		bool f=true;
		for(int i=0;i<12;i++){
			if(a[i]!=b[(i+k)%12]){
				f=false;
				break;
			}
		}
		if(f) return true;
		f=true;
		for(int i=0;i<12;i++){
			if(a[11-i]!=b[(i+k)%12]){
				f=false;
				break;
			}
		}
		if(f) return true;
	}
	return false;
}

int main(){
	int ans=0;
	a[0]=a[1]=a[2]=1;
	a[3]=a[4]=a[5]=a[6]=2;
	a[7]=a[8]=a[9]=a[10]=a[11]=3;
	do{
		bool ok=true;
		for(int i=1;i<=ans;i++){
			if(same(res[i],a)){
				ok=false;
				break;
			}
		}
		if(ok){
			ans++;
			for(int i=0;i<12;i++){
				res[ans][i]=a[i];
			}
		}
	}while(next_permutation(a,a+12));
	printf("%d",ans);
}
