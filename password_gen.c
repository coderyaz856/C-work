#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//We define the arrays that the program is going to use
char lowercase[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char uppercase[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int num[9] = {1,2,3,4,5,6,7,8,9};
int j, selector, length;

int main() {
    printf("give password length:");
    scanf("%d", &length);
    printf("the password is:");
    
    //Initialise generator seed
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        selector = 1 + rand() % 3;
        switch (selector) {
            //At each iteration, we're going to generate a random index that will select the characters which we will use to make the password    
            case 1:
                j = rand() % 26;
                printf("%c", lowercase[j]);
                break;
            case 2:
                j = rand() % 26;
                printf("%c", uppercase[j]);
                break;
            case 3:
                j = rand() % 9;
                printf("%d", num[j]);
                break;
        }
    }

    return 0;
}
