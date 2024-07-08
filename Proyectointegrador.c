#include <stdio.h>

int main() {
    int anio;
    do {
        printf("Introduce un año entre el 2010 hasta el 2050.\n");
        scanf("%d", &anio);

        if (anio < 2010 || anio > 2050) {
            printf("Por favor, introduce un año valido entre 2010 y 2050.\n");
        }
    } while (anio < 2010 || anio > 2050);

    int meses[] = {1, 4, 7, 10}; // Meses que inician cada trimestre
    int i, mes, dia, a, y, m, d;

    for (i = 0; i < 4; i++) {
        mes = meses[i];

        // Encontrar el primer lunes del mes
        for (dia = 1; dia <= 7; dia++) {
            a = (14 - mes) / 12;
            y = anio - a;
            m = mes + 12 * a - 2;
            d = (dia + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;

            if (d == 1) { // Si el día es lunes
                printf("Primer lunes del trimestre %d: %d/%d/%d\n", i + 1, dia, mes, anio);
                break;
            }
        }
    }

    return 0;
}
