#include <stdio.h>

double raizq(double);


int main()
{
    
    double n;
    scanf("%lf",&n);
    printf("%.2f\n",raizq(n));
    
    
}

double raizq(double X)
{
    double Ax,Bx,Axx,resultado;
     Ax=1;
   while((Bx=Ax*Ax)<=X){    
      Axx=Ax;
      Ax++;
   }
   if((Axx*Axx)==X)       
      return Axx;    
   resultado=((X/(((X/Axx)+Axx)/2))+(((X/Axx)+Axx)/2))/2;   
   return X/resultado;
}
  