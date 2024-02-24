
#include <stdio.h>
#include <math.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);
int factorial(int a);
int potencia ( int a, int b);
float raiz ( int a );
void clean();

int main(){
    int menu = 1;
    int sel = 0, a, b; 
    while(menu==1){
		clean();   
        printf("\n-------- Bienvenido esta es una calculadora --------");
        printf("\nPuedes realizar las operaciones de: ");
        printf("\n1. Suma");
        printf("\n2. Resta");
        printf("\n3. Multiplicacion");
        printf("\n4. Division");
        printf("\n5. Factorial ");
        printf("\n6. Potencia n");     
        printf("\n7. Raíz cuadrada ");
        printf("\n8. Salir");
        printf("\n----> Tu seleccion: ");
        scanf("%d", &sel);
       
        switch(sel){
            case 1:
            	printf("\n\nIngresa el primer numero: ");
        		scanf("%d", &a);
        		printf("\nIngresa el segundo numero: ");
        		scanf("%d", &b);
                printf("\n.... El resultado de la suma es %d", suma(a, b));
                break;
            case 2:
            	printf("\n\nIngresa el primer numero: ");
        		scanf("%d", &a);
        		printf("\nIngresa el segundo numero: ");
        		scanf("%d", &b);
        		 printf("\n.... El resultado de la resta es %d", resta(a, b));
                break;
            case 3:
            	printf("\n\nIngresa el primer numero: ");
        		scanf("%d", &a);
        		printf("\nIngresa el segundo numero: ");
        		scanf("%d", &b);
                break;
            case 4:
            	printf("\n\nIngresa el primer numero: ");
        		scanf("%d", &a);
        		printf("\nIngresa el segundo numero: ");
        		scanf("%d", &b);
                break;
            case 5:
                printf("\n\nIngresa el primer numero: ");
        		scanf("%d", &a);
                printf("El resultado del factorial es : \n %d",factorial(a));
                break;
																	case 6:
																							printf ("\n Ingrese la base:") ;
												scanf("%d", &a);
																							printf ("\n Ingrese la potencia :") ;
												scanf("%d", &b);
												printf ("\n El resultado de elevar %d a la potencia %d es: %d", a, b, potencia (a, b)) ;
																							break;
																	case 7:
																								printf( "\n Ingrese el número que desee saber la raiz cuadrada:");
											scanf("%d", &a); 
																								printf ("\n La raiz cuadrada de %d es: %f", a, raiz (a)) ;
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
    return a - b;
}
int multiplicacion(int a, int b){
    return 0;}
int division(int a, int b){
    return 0;}
int factorial(int a){
    int fac=1;
    for (int i = 1; i <= a; i++)
    {
        fac*=i;
    }
    return fac;
    
}

int potencia ( int a, int b) {
	return ( pow (a, b) ;
} 

float raiz ( int a ) {
	return ( sqrt(a) );
} 
    
void clean(){
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}
