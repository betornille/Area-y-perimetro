//Area y perimetro de un circulo
#include<stdio.h>
#define PI 3.1416
int main(){
        float area, perimetro, radio;
        printf("\nIngrese radio: "); 
        scanf("%f", &radio);
        area = (PI*radio*radio);
        perimetro = (2*PI*radio);
        printf ("\nEl área del circulo es: %f", area);
        printf ("\nEl perimetro del circulo es: %f", perimetro);
        
    return 0;
}