/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Amir khosravi
Student ID#: 166800227
Email      : akhosravi4@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int apples, oranges, pears, tomatoes, cabbages;
    int pickedApples, pickedOranges, pickedPears, pickedTomatoes, pickedCabbages;
    int endloop;

do {
    printf("Grocery Shopping\n");
    printf("================\n");

    do {
        printf("How many APPLES do you need? : ");
        scanf("%d", &apples);
        if (apples < 0) {
            printf("ERROR: Value must be 0 or more.\n");
        }
    } while (apples < 0);

    printf("\n");

    do {
        printf("How many ORANGES do you need? : ");
        scanf("%d", &oranges);
        if (oranges < 0) {
            printf("ERROR: Value must be 0 or more.\n");
        }
    } while (oranges < 0);

    printf("\n");

    do {
        printf("How many PEARS do you need? : ");
        scanf("%d", &pears);
        if (pears < 0) {
            printf("ERROR: Value must be 0 or more.\n");
        }
    } while (pears < 0);

    printf("\n");

    do {
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &tomatoes);
        if (tomatoes < 0) {
            printf("ERROR: Value must be 0 or more.\n");
        }
    } while (tomatoes < 0);

    printf("\n");

    do {
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &cabbages);
        if (cabbages < 0) {
            printf("ERROR: Value must be 0 or more.\n");
        }
    } while (cabbages < 0);

    printf("\n");

    printf("--------------------------\n");
    printf("Time to pick the products!\n");
    printf("--------------------------\n");
    printf("\n");


    if (apples > 0){
        while (apples > 0) {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &pickedApples);
                if (pickedApples > apples){
            printf("You picked too many... only %d more APPLE(S) are needed.\n", apples);
                } else if (pickedApples < 1){
            printf("ERROR: You must pick at least 1!\n");
                } else {
                    if (apples > pickedApples){
                        printf("Looks like we still need some APPLES...\n");
                        apples -= pickedApples; 

                    } else {
                        printf("Great, that's the apples done!\n");
                        printf("\n");   
                        break;
                        }
                    }
    } 
    }
    if (oranges > 0){
        while (oranges > 0) {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &pickedOranges);
                if (pickedOranges > oranges){
            printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges);
                } else if (pickedOranges < 1){
            printf("ERROR: You must pick at least 1!\n");
                } else {
                    if (oranges > pickedOranges){
                        printf("Looks like we still need some ORANGES...\n");
                        oranges -= pickedOranges; 

                    } else {
                        printf("Great, that's the oranges done!\n");
                        printf("\n");
                        break;
                        }
                    }
    } 
    }
    if (pears > 0){
        while (pears > 0) {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pickedPears);
                if (pickedPears > pears){
            printf("You picked too many... only %d more PEAR(S) are needed.\n", pears);
                } else if (pickedPears < 1){
            printf("ERROR: You must pick at least 1!\n");
                } else {
                    if (pears > pickedPears){
                        printf("Looks like we still need some PEARS...\n");
                        pears -= pickedPears; 

                    } else {
                        printf("Great, that's the pears done!\n");
                        printf("\n");
                        break;
                        }
                    }
    } 
    }
    if (tomatoes > 0){
        while (tomatoes > 0) {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &pickedTomatoes);
                if (pickedTomatoes > tomatoes){
            printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes);
                } else if (pickedTomatoes < 1){
            printf("ERROR: You must pick at least 1!\n");
                } else {
                    if (tomatoes > pickedTomatoes){
                        printf("Looks like we still need some TOMATOES...\n");
                        tomatoes -= pickedTomatoes; 

                    } else {
                        printf("Great, that's the tomatoes done!\n");
                        printf("\n");
                        break;
                        }
                    }
    } 
    }if (cabbages > 0){
        while (cabbages > 0) {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &pickedCabbages);
                if (pickedCabbages > cabbages){
            printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbages);
                } else if (pickedCabbages < 1){
            printf("ERROR: You must pick at least 1!\n");
                } else {
                    if (cabbages > pickedCabbages){
                        printf("Looks like we still need some CABBAGES...\n");
                        cabbages -= pickedCabbages; 

                    } else {
                        printf("Great, that's the cabbages done!\n");
                        printf("\n");
                        break;
                        }
                    }
    } 
    }
    printf("All the items are picked!\n");
    printf("\n");
    printf("Do another shopping? (0=NO): ");
    scanf("%d", &endloop);
    printf("\n");

} while (endloop != 0);
    printf("Your tasks are done for today - enjoy your free time!\n");
    return 0;
}