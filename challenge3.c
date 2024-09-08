// Challenge 3 : Passage de Structure en Argument
// Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur. 
// Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. 
// Affichez l'aire dans le programme principal.

#include <stdio.h>

struct Rectangle {
    float longueur; 
    float largeur;
};

float calculer_aire(struct Rectangle arg) {
    float air = arg.longueur * arg.largeur;
    return air;
}

int main()
{
    struct Rectangle rectangle1 = { 100, 40};
    printf("l'air: %.2f\n", calculer_aire(rectangle1));
}
