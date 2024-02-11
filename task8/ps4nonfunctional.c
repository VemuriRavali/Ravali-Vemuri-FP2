#include <stdio.h>
int main(){
   int n1,n2,res;
   n1=100;
   n2=250;
   res=n1>n2?n1:n2;
   printf("%d\n",res);
   n1=300;
   n2=50;
   res=n1>n2?n1:n2;
   printf("%d\n",res);
   n1=1000;
   n2=2500;
   res=n1>n2?n1:n2;
   printf("%d\n",res);
   return 0;
}