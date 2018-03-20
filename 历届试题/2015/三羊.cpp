#include <cstdio>  
#include <iostream>  
#include <algorithm>  
#include <cstring>  
  
using namespace std;  

int main()  
{  
	for(int a=0;a<=9;a++)
		for(int b=0;b<=9;b++)
			for(int c=0;c<=9;c++)
				for(int d=1;d<=9;d++)
					for(int e=0;e<=9;e++)
						for(int f=0;f<=9;f++)
							for(int g=1;g<=9;g++)
								for(int h=0;h<=9;h++){
									if( a+b*10+c*100+d*1000+c+e*10+f*100+g*1000
									== h+c*10+b*100+f*1000+g*10000)			//还需要判定数字两两不等 
									 {
									 	if(a!=b && a!=c &&a!=d &&a!=e &&a!=f &&a!=g &&a!=h &&
											b!=c &&b!=d &&b!=e &&b!=f &&b!=g &&b!=h &&
											c!=d &&c!=e &&c!=f &&c!=g &&c!=h &&
											d!=e &&d!=f &&d!=g &&d!=h &&
											e!=f &&e!=g &&e!=h &&
											f!=g &&f!=h &&
										 	g!=h
										 )
									 		printf("%d %d %d %d\n",g,f,e,c);
									 }
								}
}  
