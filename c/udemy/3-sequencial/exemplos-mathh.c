// implementar um programa para testar funções matemáticas básicas;
// https://www.ufrgs.br/reamat/ComputacaoCientifica/livro/iapcel-a_biblioteca_mathh.html

#include <stdio.h>  
#include <math.h>  

main (void){

    double x = 8.62;  
    
    printf("Biblioteca math.h \n\n");  
    
    printf("Valor aproximado para baixo de %f é %f\n",x, floor(x));  
    printf("Valor aproximado para cima de %f é %f\n", x, ceil(x));  
    
    printf("Raiz quadrada de %f é %f\n",x,sqrt(x));  
    printf("%.2lf ao quadrado é %.2f \n",x,pow(x,2));  
    
    printf("Valor de seno de %.2f = %.2f \n",x,sin(x));  
    printf("Valor de cosseno de %.2f = %.2f \n",x,cos(x));  
    printf("Valor de tangente de %.2f = %.2f \n",x,tan(x));  

    printf("Logaritmo natural de %.2f = %.2f \n",x,log(x));  
    printf("Logaritmo de %.2f  na base 10 = %.2f \n",x,log10(x));  
    printf("Exponencial de %.2f = %e \n",x,exp(x));  

    printf("O valor aproximado de pi é %e \n",M_PI);  
    printf("O valor aproximado de pi/2 é %e \n",M_PI_2);  

    printf("O módulo de -3.2 é %f \n",fabs(-3.2));  
    printf("O módulo de -3 é %d \n",abs(-3));
    
    return 0;

}