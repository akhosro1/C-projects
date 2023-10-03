/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  : Amir khosravi  
Student ID#: 166800227
Email      : akhosravi4@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    
    const double GRAMS_IN_LBS = 453.5924;
    char coffeeType1 , coffeeType2 , coffeeType3;
    int coffeeWeight1, coffeeWeight2, coffeeWeight3;
    char coffeeCream1 , coffeeCream2 , coffeeCream3;
    char coffeePreferance;
    char coffeeCreamPreferance;
    int numberOfServings;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n");

    printf("\n");    

    printf("Enter the coffee product information being sold today...\n");

    printf("\n");    

    printf("COFFEE-1...\n");

    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType1);
    printf("Bag weight (g): ");
    scanf("%d", &coffeeWeight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeCream1);
    printf("\n");
    
    printf("COFFEE-2...\n");

    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType2);
    printf("Bag weight (g): ");
    scanf("%d", &coffeeWeight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeCream2);
    printf("\n");

    printf("COFFEE-3...\n");

    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType3);
    printf("Bag weight (g): ");
    scanf("%d", &coffeeWeight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeCream3);
    printf("\n");
    
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n"
    ,coffeeType1 == 'l' ||coffeeType1 == 'L' ,coffeeType1 == 'm' || coffeeType1 == 'M',coffeeType1 == 'r' || coffeeType1 == 'R',coffeeWeight1,coffeeWeight1 / GRAMS_IN_LBS, coffeeCream1 == 'y' || coffeeCream1 == 'Y');
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n"
    ,coffeeType2 == 'l' ||coffeeType2 == 'L',coffeeType2 == 'm' || coffeeType2 == 'M' ,coffeeType2 == 'r' || coffeeType2 == 'R',coffeeWeight2,coffeeWeight2 / GRAMS_IN_LBS, coffeeCream2 == 'y' || coffeeCream2 == 'Y');
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n"
    ,coffeeType3 == 'l' ||coffeeType3 == 'L',coffeeType3 == 'm' || coffeeType3 == 'M',coffeeType3 == 'r' || coffeeType3 == 'R',coffeeWeight3,coffeeWeight3 / GRAMS_IN_LBS, coffeeCream3 == 'y' || coffeeCream3 == 'Y');
    printf("\n");

    printf("Enter how you like your coffee...\n");

    printf("\n"); 

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffeePreferance);

    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeCreamPreferance);

    printf("Typical number of daily servings: ");
    scanf("%d", &numberOfServings);

    printf("\n");

    printf("The below table shows how your preferences align to the available products:\n");

    printf("\n");

    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n"
    ,((coffeePreferance == 'l' || coffeePreferance == 'L') && (coffeeType1 == 'l' || coffeeType1 == 'L')) ||
    ((coffeePreferance == 'm' || coffeePreferance == 'M') && (coffeeType1 == 'm' || coffeeType1 == 'M')) ||
    ((coffeePreferance == 'r' || coffeePreferance == 'R') && (coffeeType1 == 'r' || coffeeType1 == 'R')),
    (numberOfServings >= 1 && numberOfServings <= 4 && coffeeWeight1 == 250) ||
    (numberOfServings >= 5 && numberOfServings <= 9 && coffeeWeight1 == 500) ||
    (numberOfServings >= 10 && coffeeWeight1 == 1000),
    ((coffeeCreamPreferance == 'y' || coffeeCreamPreferance == 'Y') && (coffeeCream1 == 'y' || coffeeCream1 == 'Y')) ||
    ((coffeeCreamPreferance == 'n' || coffeeCreamPreferance == 'N') && (coffeeCream1 == 'n' || coffeeCream1 == 'N')));
    printf(" 2|       %d         |      %d      |   %d   |\n"
    ,((coffeePreferance == 'l' || coffeePreferance == 'L') && (coffeeType2 == 'l' || coffeeType2 == 'L')) ||
    ((coffeePreferance == 'm' || coffeePreferance == 'M') && (coffeeType2 == 'm' || coffeeType2 == 'M')) ||
    ((coffeePreferance == 'r' || coffeePreferance == 'R') && (coffeeType2 == 'r' || coffeeType2 == 'R')),
    (numberOfServings >= 1 && numberOfServings <= 4 && coffeeWeight2 == 250)||
    (numberOfServings >= 5 && numberOfServings <= 9 && coffeeWeight2 == 500)||
    (numberOfServings >= 10 && coffeeWeight2 == 1000),
    ((coffeeCreamPreferance == 'y' || coffeeCreamPreferance == 'Y') && (coffeeCream2 == 'y' || coffeeCream2 == 'Y')) ||
    ((coffeeCreamPreferance == 'n' || coffeeCreamPreferance == 'N') && (coffeeCream2 == 'n' || coffeeCream2 == 'N')));
    printf(" 3|       %d         |      %d      |   %d   |\n"
    ,((coffeePreferance == 'l' || coffeePreferance == 'L') && (coffeeType3 == 'l' || coffeeType3 == 'L')) ||
    ((coffeePreferance == 'm' || coffeePreferance == 'M') && (coffeeType3 == 'm' || coffeeType3 == 'M')) ||
    ((coffeePreferance == 'r' || coffeePreferance == 'R') && (coffeeType3 == 'r' || coffeeType3 == 'R')),
    (numberOfServings >= 1 && numberOfServings <= 4 && coffeeWeight3 == 250)||
    (numberOfServings >= 5 && numberOfServings <= 9 && coffeeWeight3 == 500)||
    (numberOfServings >= 10 && coffeeWeight3 == 1000),
    ((coffeeCreamPreferance == 'y' || coffeeCreamPreferance == 'Y') && (coffeeCream3 == 'y' || coffeeCream3 == 'Y')) ||
    ((coffeeCreamPreferance == 'n' || coffeeCreamPreferance == 'N') && (coffeeCream3 == 'n' || coffeeCream3 == 'N')));

    printf("\n");

    printf("Enter how you like your coffee...\n");

    printf("\n"); 

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffeePreferance);

    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeCreamPreferance);

    printf("Typical number of daily servings: ");
    scanf("%d", &numberOfServings);

    printf("\n");

    printf("The below table shows how your preferences align to the available products:\n");

    printf("\n");

    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n"
    ,((coffeePreferance == 'l' || coffeePreferance == 'L') && (coffeeType1 == 'l' || coffeeType1 == 'L')) ||
    ((coffeePreferance == 'm' || coffeePreferance == 'M') && (coffeeType1 == 'm' || coffeeType1 == 'M')) ||
    ((coffeePreferance == 'r' || coffeePreferance == 'R') && (coffeeType1 == 'r' || coffeeType1 == 'R')),
    (numberOfServings >= 1 && numberOfServings <= 4 && coffeeWeight1 == 250) ||
    (numberOfServings >= 5 && numberOfServings <= 9 && coffeeWeight1 == 500) ||
    (numberOfServings >= 10 && coffeeWeight1 == 1000),
    ((coffeeCreamPreferance == 'y' || coffeeCreamPreferance == 'Y') && (coffeeCream1 == 'y' || coffeeCream1 == 'Y')) ||
    ((coffeeCreamPreferance == 'n' || coffeeCreamPreferance == 'N') && (coffeeCream1 == 'n' || coffeeCream1 == 'N')));
    printf(" 2|       %d         |      %d      |   %d   |\n"
    ,((coffeePreferance == 'l' || coffeePreferance == 'L') && (coffeeType2 == 'l' || coffeeType2 == 'L')) ||
    ((coffeePreferance == 'm' || coffeePreferance == 'M') && (coffeeType2 == 'm' || coffeeType2 == 'M')) ||
    ((coffeePreferance == 'r' || coffeePreferance == 'R') && (coffeeType2 == 'r' || coffeeType2 == 'R')),
    (numberOfServings >= 1 && numberOfServings <= 4 && coffeeWeight2 == 250)||
    (numberOfServings >= 5 && numberOfServings <= 9 && coffeeWeight2 == 500)||
    (numberOfServings >= 10 && coffeeWeight2 == 1000),
    ((coffeeCreamPreferance == 'y' || coffeeCreamPreferance == 'Y') && (coffeeCream2 == 'y' || coffeeCream2 == 'Y')) ||
    ((coffeeCreamPreferance == 'n' || coffeeCreamPreferance == 'N') && (coffeeCream2 == 'n' || coffeeCream2 == 'N')));
    printf(" 3|       %d         |      %d      |   %d   |\n"
    ,((coffeePreferance == 'l' || coffeePreferance == 'L') && (coffeeType3 == 'l' || coffeeType3 == 'L')) ||
    ((coffeePreferance == 'm' || coffeePreferance == 'M') && (coffeeType3 == 'm' || coffeeType3 == 'M')) ||
    ((coffeePreferance == 'r' || coffeePreferance == 'R') && (coffeeType3 == 'r' || coffeeType3 == 'R')),
    (numberOfServings >= 1 && numberOfServings <= 4 && coffeeWeight3 == 250)||
    (numberOfServings >= 5 && numberOfServings <= 9 && coffeeWeight3 == 500)||
    (numberOfServings >= 10 && coffeeWeight3 == 1000),
    ((coffeeCreamPreferance == 'y' || coffeeCreamPreferance == 'Y') && (coffeeCream3 == 'y' || coffeeCream3 == 'Y')) ||
    ((coffeeCreamPreferance == 'n' || coffeeCreamPreferance == 'N') && (coffeeCream3 == 'n' || coffeeCream3 == 'N')));

    printf("\n");
    printf("Hope you found a product that suits your likes!\n");
    printf("\n");


    






    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/