#include <stdio.h>
#include <string.h>

// Funci�n para imprimir un mensaje
void imprimirMensaje(const char* mensaje) {
    printf("%s\n", mensaje);
}

// Funci�n para imprimir una cadena de caracteres
void imprimirString(const char* mensaje, const char* dato) {
    printf("%s%s\n", mensaje, dato);
}

// Funci�n para imprimir un entero
void imprimirEntero(const char* mensaje, int dato) {
    printf("%s%d\n", mensaje, dato);
}

// Funci�n para imprimir un flotante
void imprimirFloat(const char* mensaje, float dato) {
    printf("%s%f\n", mensaje, dato);
}

// Funci�n para leer una cadena de caracteres
void leerString(const char* mensaje, char* r) {
    printf("%s", mensaje);
    scanf("%s", r);
}

// Funci�n para leer un flotante
float leerFloat(const char* mensaje) {
    float r = 0.0;
    printf("%s", mensaje);
    scanf("%f", &r);
    return r;
}

// Funci�n para leer un entero
int leerEntero(const char* mensaje) {
    int r = 0;
    printf("%s", mensaje);
    scanf("%d", &r);
    return r;
}

//Funcion para calcular la suma de dos numeros
float calcularSuma(float a, float b) {
    return a + b;
}

int main(int argc, char *argv[]) {
    imprimirMensaje("----------INICIANDO PROGRAMA----------\n");
    imprimirMensaje("--------------------------------------\n");
	float numero1 = 0.0;
    float numero2 = 0.0;
    imprimirMensaje("----------PASO 1----------\n");
    imprimirMensaje("----------LECTURA DE DATOS----------\n");
	numero1 = leerFloat("Ingrese el numero 1: ");
    numero2 = leerFloat("Ingrese el numero 2: ");
    imprimirMensaje("----------PASO 2----------\n");
    imprimirMensaje("----------PROCESANDO DATOS----------\n");
	float suma = calcularSuma(numero1, numero2);
    imprimirMensaje("----------PASO 3----------\n");
    imprimirMensaje("----------SALIDAS DE DATOS----------\n");
	imprimirFloat("El resultado de la suma es: ",suma);
    imprimirMensaje("----------FIN DEL PROGRAMA----------\n");
    imprimirMensaje("--------------------------------------\n");
	
    return 0;
}

