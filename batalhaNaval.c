#include <stdio.h>

void habilidade_cone() {
    int matriz[3][5] = {0};
    matriz[0][2] = 1;
    matriz[1][1] = matriz[1][2] = matriz[1][3] = 1;
    for (int i = 0; i < 5; i++) {
        matriz[2][i] = 1;
    }

    printf("Habilidade: Cone\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void habilidade_cruz() {
    int matriz[3][5] = {0};
    for (int i = 0; i < 5; i++) {
        matriz[1][i] = 1;
    }
    matriz[0][2] = matriz[2][2] = 1;

    printf("Habilidade: Cruz\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void habilidade_octaedro() {
    int matriz[3][5] = {0};
    matriz[0][2] = matriz[1][1] = matriz[1][2] = matriz[1][3] = matriz[2][2] = 1;

    printf("Habilidade: Octaedro\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    habilidade_cone();
    printf("\n");
    habilidade_cruz();
    printf("\n");
    habilidade_octaedro();

    return 0;
}
