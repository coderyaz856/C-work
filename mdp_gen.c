#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//On définit les tableaux sur lesquels le programme va se baser ainsi que certaines variables
char minuscule[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char majuscule[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int chiffre[9] = {1,2,3,4,5,6,7,8,9};
int j, selector, length;

int main() {
    printf("donnez la longueur du mot de passe:");
    scanf("%d", &length);
    printf("the password is:");
    
    //On initialise la graine du générateur
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        selector = 1 + rand() % 3;
        switch (selector) {
            //A chaque fois, on va générer un indice aléatoire qui va sélectionner les caractères qui vont constituer le mot de passe    
            case 1:
                j = rand() % 26;
                printf("%c", minuscule[j]);
                break;
            case 2:
                j = rand() % 26;
                printf("%c", majuscule[j]);
                break;
            case 3:
                j = rand() % 9;
                printf("%d", chiffre[j]);
                break;
        }
    }

    return 0;
}
