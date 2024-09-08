// Challenge 2 : Structure avec Tableau
// Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom,
// prenom, et un tableau d'entiers pour stocker les notes. Assignez des valeurs aux champs et aux notes,
// puis affichez les informations de l'étudiant.

#include <stdio.h>
#include <string.h>

int main()
{
    struct Etudiant {
        char nom[100]; 
        char prenom[100];
        float notes[10];
    };
    
    struct Etudiant etudiant1;
    
    strcpy(etudiant1.nom, "akraou");
    strcpy(etudiant1.prenom, "ayoub");
    etudiant1.notes[0] = 18;
    etudiant1.notes[1] = 14;
    etudiant1.notes[2] = 19.5;
    
    //j ai besoin de 3 mais j ai obtenu 10
    int l_notes = sizeof(etudiant1.notes) / sizeof(float);
    
    
    printf("nom: %s\n", etudiant1.nom);
    printf("prenom: %s\n", etudiant1.prenom);
    
    printf("*** notes ***\n");
    for(int i = 0; i < l_notes; i++) {  
        if(etudiant1.notes[i] == 0) break;
        printf("note %d: %.2f\n", i + 1, etudiant1.notes[i]);
    }
}
