#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

/*O algoritmo de Euclides para o calculo do Maximo Divisor Comum
(MDC) entre dois numeros inteiros positivos m e n, apresentado em
300 a.C., e um dos algoritmos mais antigos do mundo.
O algoritmo pode ser resumido na seguinte formula:
mdc(m; n) =(m; se n = 0
mdc(n;m % n); se n > 0*/
int main()
{
    int aux, m, n;
    printf("Digite dois numero\n");
    n = GetInt();
    m = GetInt();
    while (n > 0)
    {
        aux = n;
        n = m % n;
        m = aux;
    }
    printf("MDC = %d\n", m);
    return 0;
}
