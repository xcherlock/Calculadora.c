
#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

int main(){
    int menu = 1;
    int sel = 0, a, b; 
    while(menu){   
        printf("\n-------- Bienvenido esta es una calculadora --------");
        printf("\nPuedes realizar las operaciones de: ");
        printf("\n1. Suma");
        printf("\n2. Resta");
        printf("\n3. Multiplicacion");
        printf("\n4. Division");
        printf("\n5. Salir");
        printf("\n----> Tu seleccion: ");
        scanf("%d", &sel);
        printf("\n\nIngresa el primer numero: ");
        scanf("%d", &a);
        printf("\nIngresa el segundo numero: ");
        scanf("%d", &b);
        switch(sel){
            case 1:
                printf("\n.... El resultado de la suma es %d", suma(a, b));
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                break;
        }
        printf("\n\n Quieres realizar otra operacion? (1 == SI, 0 == NO): ");
        scanf("%d", &menu);
        if(menu != 1){
            menu =0;
        }
    }
}

int suma(int a, int b){
    return a + b;
}
int resta(int a, int b){
    return 0;
}
int multiplicacion(int a, int b){
    return 0;}
int division(int a, int b){
    return 0;}