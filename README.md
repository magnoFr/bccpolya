Descrição:
O problema consiste em desenvolver uma função que calcule a aproximação da raiz de qualquer numero real;


Solução matemática:
Atravéz do método babilônico foi feito:
A0=média aritimética das raizes exatas sucessoras e antecessoras de n
n=variavel
B0=n/A0

após isso deve verificar o erro de aproximação dado por E=|B(k)2-n|>10^-4
coso falso usar a posiçao K
K=1
A1=(A0+B0)/2 e B1=n/A1

k2=
A2=(A1+B1)/2 e B1=n/A2

esse processo continuará até E ser verdadeiro

Após analizar poderá observar  que
B(k)=n/A(k) 
B(k)=((n/(((n/A(k-1))+A(k-1))/2))+(((n/A(k-1))+A(k-1))/2))/2
Sendo que A(k-1) pode ser dado como a raiz exata mais próxima de n;






Português estruturado:
funçao raiz

    
    real n;
    leia(n);
    escreva(raizq(n));
    
    


real raizq(real X)

    real Ax,Bx,Axx,resultado;
     Ax=1;
   enquanto((Bx=Ax*Ax)<=X)    
      Axx=Ax;
      Ax++;
      fim_enquanto
   
   se((Axx*Axx)==X)       
      retorne Axx;    
   resultado=((X/(((X/Axx)+Axx)/2))+(((X/Axx)+Axx)/2))/2;   
   retorne X/resultado;

fim
 




Termo "polya":
O uso desse termo como nome do repositório se dá pelo matemático George Pólya, que desenvolvel o método de solucionar problemas. A ligação dele é dada pelo problema que que nos foi apresentado e apartir desse problema chegar até uma solução que poderia ser resolvido usando seus métodos;# bccpolya
