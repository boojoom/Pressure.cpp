#include <stdio.h>
#include <math.h>//dla funkcji "exp()"
#include <iostream> //dla "cin>>..."
using namespace std;


float p0;
float T_K;
float h;
float p;



int main ()

{while(1){
	
 printf("Podaj ciśnienie atmosferyczne[bar]");
cin>>p0;
printf("Podaj Wysokość[m]");
cin>>h;
if(h>=0)
{printf("Podaj temperaturę[K]");
cin>>T_K;
p=p0*exp(-0.003417-h/T_K);
cout<<p<<endl;

}
else
{
	p=p0-0.09682*h;
cout<<p;
}
}
    
    
   
   
    return 0;
}
