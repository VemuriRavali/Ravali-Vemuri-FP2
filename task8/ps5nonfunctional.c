#include <stdio.h>
int main(){
    const float PI=3.14;
    float r,res;
    r=100;
    res=PI*(r*r);
    printf("%f \n",res);
    r=10;
    res=PI*r*r;
    printf("%f \n",res);
    r=15;
    res=PI*r*r;
    printf("%f \n",res);
    return 0;
}