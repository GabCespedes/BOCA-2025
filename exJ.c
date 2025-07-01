#include <stdio.h>
#include <stdlib.h>

#define MAX 1000001

int divisores[MAX];

void calcula_divisores() {
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            divisores[j]++;
        }
    }
}

int main() {
    int N;

    calcula_divisores();

    while (1) {
        if (scanf("%d", &N) != 1 || N == 0) break;

        int melhor, max_div;
        scanf("%d", &melhor);
        max_div = divisores[melhor];

        for (int i = 1; i < N; i++) {
            int num;
            scanf("%d", &num);

            int qtd = divisores[num];

            if (qtd > max_div || (qtd == max_div && num < melhor)) {
                melhor = num;
                max_div = qtd;
            }
        }

        printf("%d\n", melhor_num);
    }

    return 0;
}
