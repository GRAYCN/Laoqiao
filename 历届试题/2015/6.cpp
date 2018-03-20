#include<cstdio> 
using namespace std;

int cnt[15],ans=0;

void dfs(int dep,int last)
{
    if (dep>13) {
        ans++;
        return;
    }
    for (int i=last;i<=13;i++) {
        if (cnt[i]<4) {
            cnt[i]++;
            dfs(dep+1,i);
            cnt[i]--;
        }
    }
}

int main()
{
    dfs(1,1);
    printf("%d\n",ans);
    return 0;
}
