#include <stdio.h>
#include <stdlib.h>
#include <minha_biblioteca.h>

double func_val(int x, float b) {
    return x - (b * 100);
}

int main() {
    const char* texto = "Hello, World!";
    float b = 0.5; 
    int i;

    processa_string(texto, b, i);  
    return 0;
}
