#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../inc/home.h"

int main() {

    home_t *myHouse;
    char myCity[] = "Guimarães";
    char myCountry[] = "Portugal"; 

    myHouse->city = malloc(sizeof(myCity));
    if (myHouse->city == NULL) {
        return 1;
    }
    strcpy(myHouse->city, myCity);

    myHouse->country = malloc(sizeof(myCountry));
    if (myHouse->country == NULL) {
        free(myHouse->city);
        return 1;
    }
    strcpy(myHouse->country, myCountry);

    free(myHouse->country);
    free(myHouse->city);
    return 0;
}