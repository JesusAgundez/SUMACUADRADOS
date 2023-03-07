#include <stdio.h>

struct Numeros {
    int num;
    int suma_cuadrados;
};

int main() {
    struct Numeros n;
    int i;
    n.suma_cuadrados = 0;

    printf("Introduce un numero entero: ");
    scanf("%d", &n.num);

    for (i = 1; i <= n.num; i += 4) {
        n.suma_cuadrados += i * i;
    }

    printf("La suma de los cuadrados de los numeros de 4 en 4 hasta %d es: %d\n", n.num, n.suma_cuadrados);
    return 0;
}
