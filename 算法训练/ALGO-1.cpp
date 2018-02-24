#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int cmp(int a, int b){return a > b;}

int main() {
	int n, m;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m;
    vector<int> result(m);
	for(int i=0;i<m;i++){
		int l,r,k;
		cin>>l>>r>>k;
		vector<int> temp;
		temp=a;
		sort(temp.begin()+1+l-1,temp.begin()+r+1,cmp);
		result[i]=temp[l+k-1];
	}
	for (int i = 0; i < m; i++) {
        cout << result[i] << endl;
    }		 
} 
