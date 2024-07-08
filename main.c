#include <stdio.h>
#include <string.h>

// Función para imprimir un mensaje
void imprimirMensaje(const char* mensaje) {
    printf("%s\n", mensaje);
}

// Función para imprimir una cadena de caracteres
void imprimirString(const char* mensaje, const char* dato) {
    printf("%s%s\n", mensaje, dato);
}

// Función para imprimir un entero
void imprimirEntero(const char* mensaje, int dato) {
    printf("%s%d\n", mensaje, dato);
}

// Función para imprimir un flotante
void imprimirFloat(const char* mensaje, float dato) {
    printf("%s%f\n", mensaje, dato);
}

// Función para leer una cadena de caracteres
void leerString(const char* mensaje, char* r) {
    printf("%s", mensaje);
    scanf("%s", r);
}

// Función para leer un flotante
float leerFloat(const char* mensaje) {
    float r = 0.0;
    printf("%s", mensaje);
    scanf("%f", &r);
    return r;
}

// Función para leer un entero
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
    printf("----------INICIANDO PROGRAMA----------\n");
    printf("--------------------------------------\n");
	float numero1 = 0.0;
    float numero2 = 0.0;
    printf("----------PASO 1----------\n");
    printf("----------LECTURA DE DATOS----------\n");
	numero1 = leerFloat("Ingrese el numero 1: ");
    numero2 = leerFloat("Ingrese el numero 2: ");
    printf("----------PASO 2----------\n");
    printf("----------PROCESANDO DATOS----------\n");
	float suma = calcularSuma(numero1, numero2);
    printf("----------PASO 3----------\n");
    printf("----------SALIDAS DE DATOS----------\n");
	imprimirFloat("El resultado de la suma es: ",suma);
    printf("----------FIN DEL PROGRAMA----------\n");
    printf("--------------------------------------\n");
	
    return 0;
}

