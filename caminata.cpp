#include <iostream>
#include <stdlib.h>
#include <cmath>

using std::cout;
using std::endl;

//1000 pasos 

int main(){

    float x = 0;
    float y = 0; 
    float pi = 3.1416;
    srand48(10);
    for (int i=0;i<1000;i++) {
        std::cout << x << " " << y << std::endl;
        float x1 = (drand48()-0.5)*2*pi;
        float y1 = (drand48()-0.5)*2*pi;
        x = x + x1;
        y = y + y1;
        float norma= sqrt(x*x + y*y);
        
        
    
    
    }
    





    return 0;
}