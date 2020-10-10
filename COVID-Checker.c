#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Calculates how many people might have COVID-19 in a given area in the U.S. based on population size.
// Please keep in mind that this is still highly inaccurate as the infection rates and total number of U.S. cases can vary as time goes on.

#define usCases (float)637218 // The number of cases of COVID-19 was taken from The New York Times for Sep. 26 to Oct. 9.
#define usPopulation (float)328239523 // The total U.S. population was taken from the U.S. Census as of 2019.
#define covidInfectRate (float)0.04 // The U.S. COVID-19 spread rate is about 4% taken from ourworldindata.org/coronavirus. 

float covidNum(int areaPop);

int main() {

    float percentSick, numSick;
    int areaPop;

    printf("Enter the amount of people that will be in a given area.\n");
    scanf("%d", &areaPop);

    printf("The expected number of people in that area with COVID-19 is: %.2f\n", covidNum(areaPop));
    printf("The expected number of people in that area that will get COVID-19 is: %.2f \n", covidNum(areaPop)*covidInfectRate);
    printf("Remember to wash your hands and wear a mask!!!");

    return 0;
}

// Finds the number of people in a given population (or sample) that have COVID-19 if it's in the U.S.
float covidNum(int areaPop) {
    float percentSick = usCases/usPopulation;
    float numSick = areaPop * percentSick;
    return numSick;
}































/* Can encrypt or decrypt a message by the user.

int main() {

    char userMessage[100];
    char encryptedMessage[100];
    char decryptedMessage[100];
    char userInput[1];
    char a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9 , j = 10, k = 11, l = 12, m = 13, n = 14, o = 15, p = 16, q = 17, r = 18, s = 19, t = 20, u = 21, v = 22, w = 23, x = 24, y = 25, z = 26;

    printf("Enter 1 to encrypt a message or 2 to decrypt a message.\n");
    fgets(userInput, 2, stdin);
    
    if (*userInput == '1') {

        fflush(stdin);
        printf("Type your message!\n");
        fgets(userMessage, 100, stdin);
        
        for (int i; i < strlen(userMessage); i++) {
                printf("%c ", userMessage[i]);
            }

    } else if (*userInput == '2') {

        fflush(stdin);
        printf("Type your message!\n");
        fgets(userMessage, 100, stdin);

    } else {
        printf("You have not typed in 1 or 2. Please restart the program and try again.");
    }
    return 0;
} */