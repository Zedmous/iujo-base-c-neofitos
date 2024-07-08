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

int main(int argc, char *argv[]) {
    printf("----------INICIANDO PROGRAMA----------\n");
    printf("--------------------------------------\n");

    printf("----------PASO 1----------\n");
    printf("----------LECTURA DE DATOS----------\n");

    printf("----------PASO 2----------\n");
    printf("----------PROCESAR DATOS----------\n");

    printf("----------PASO 3----------\n");
    printf("----------SALIDAS DE DATOS----------\n");

    printf("----------FIN DEL PROGRAMA----------\n");
    printf("--------------------------------------\n");

    return 0;
}

