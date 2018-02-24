#include<iostream>  
#include<iomanip>  
#include<cmath>  
#include<cstdio>
using namespace std;  
  
//int main()  
//{  
//    double a=2.0,b=3.0,c=1,aa,bb,cc=1.0;  
//    while(fabs(cc)>1e-8)  
//    {  
//        c=(a+b)/2.0;  
//        aa=pow(a,a)-10.0,bb=pow(b,b)-10.0,cc=pow(c,c)-10.0;  
//        if(aa*cc<0) b=c;  
//        else if(bb*cc<0) a=c;  
//        cc=pow(c,c)-10.0;  
//    }  
//    cout<<fixed<<setprecision(7)<<c<<endl;  
//}

int main(){
	double a=2.0, b=3.0,c=1,aa,bb,cc=1.0,diff=1;
	while( fabs(diff)>1e-8 ){
		c=(a+b)/2.0;
		if(pow(c,c)>10){
			b=c;
		}else a=c;
		diff=pow(c,c)-10;
	}
	printf("%.8f",c);
}  
