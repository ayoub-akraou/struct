/*Challenge 4 : Structure avec Pointeurs
Écrivez un programme C qui définit une structure pour représenter
un point dans un plan avec les champs x et y. 
Utilisez des pointeurs pour créer une variable de cette structure
et modifiez ses valeurs. Affichez les valeurs du point.*/

#include <stdio.h>

int main()
{
    // printf("Hello World");
    struct Plan {
        float x;
        float y;
    };
    
    struct Plan plan;
    struct Plan *plan1 = &plan;
    
    
    
    plan1->x = 15;
    plan1->y = 49;
    
    printf("%.2f\n", plan1->x);
    printf("%.2f\n", plan1->y);
    
    return 0;
}
