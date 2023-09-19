#include<stdio.h>

int main(){
    float precioInic = 0;
    float descuento = 0;
    float precioFina = 0;

    printf("cuanto va a ser lo que va a pagar?\n");
    scanf("%f", &precioInic);
    //printf("%f",precioInic);//print de prueba

    if (precioInic > 0) {
        if (precioInic < 800) {
            precioFina = precioInic;
            printf("El precio tiene descuento de 0 por lo tanto su precio final es: %f", precioFina);
        } else if (precioInic >= 800 && precioInic <= 1500) { //&& es un y
            descuento = precioInic*0.1;
            precioFina = precioInic - descuento;
            printf("su descuento es de 0.1 o $%f y su precio final de $%f", descuento, precioFina);
        } else if (precioInic > 1500 && precioInic <=5000){
            descuento = precioInic*0.15;
            precioFina = precioInic - descuento;
            printf("su descuento es de 0.15 o $%f y su precio final de $%f", descuento, precioFina);
        } else if (precioInic > 5000 ){
            descuento = precioInic*0.2;
            precioFina = precioInic - descuento;
            printf("su descuento es de 0.2 o $%f y su precio final de $%f", descuento, precioFina);
        } else {
            precioFina = precioInic;
            printf("El precio tiene descuento de 0 por lo tanto su precio final es: %f", precioFina);
        }
    } else {
        printf("no puede ser el valor igual o menor a 0");
    }

    return 0;
}
