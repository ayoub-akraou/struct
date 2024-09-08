// Challenge 1 : Définition et Utilisation de Structure
// Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age. 
// Créez une variable de cette structure, 
// assignez des valeurs aux champs, et affichez ces valeurs.

#include <stdio.h>
#include <string.h>

int main()
{
    struct User {
        char nom[100]; 
        char prenom[100];
        int age;
    };
    
    struct User user1;
    
    strcpy(user1.nom, "akraou");
    strcpy(user1.prenom, "ayoub");
    user1.age = 23;
    
    printf("nom: %s\n", user1.nom);
    printf("prenom: %s\n", user1.prenom);
    printf("age: %d\n", user1.age);
}
