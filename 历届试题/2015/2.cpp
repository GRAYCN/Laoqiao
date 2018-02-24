#include <cstring>
#include <algorithm>
#include <stdio.h> 
using namespace std;


int main()
{
	int n=100;
	double sum=0;
	for(int i=1;i<=100;i++){
		if(i%2==1)
			sum+=1.0/(2*i-1);
		else
			sum-=1.0/(2*i-1);
	} 
	sum*=4;
	printf("%.3f",sum);
	return 0;
}


