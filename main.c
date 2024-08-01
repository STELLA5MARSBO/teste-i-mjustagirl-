#include <stdio.h>

int main() {
    char clima;

    printf("Digite o clima (S para ensolarado, C para chuvoso): ");
    scanf(" %c", &clima);

    if (clima == 'S' || clima == 's') {
        printf("Use sandálias ou tênis leves!\n");
    } else if (clima == 'C' || clima == 'c') {
        printf("Opte por sapatos fechados ou galochas!\n");
    } else {
        printf("Desculpe, não entendi o clima. Tente novamente com S ou C.\n");
    }

    return 0;
}


