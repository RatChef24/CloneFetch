//
// Created by ratchef on 12/08/22.
//

#include "util.h"
#include <stdio.h>
#include "fetch.h"
#include "logos.h"
#include "string.h"
#include <stdlib.h>


char str[];





//prints the get distro name function

void print_functions() {
    strcpy(str, "get_distro_name");
    if(strcmp(str, "EndeavourOS Linux")) {
        printArchLogo();
    } else if (strcmp(str, "Ubuntu Linux")) {
        printUbuntuLogo();
    } else if (strcmp(str, "Linux Mint")){
        printMintLogo();
        
    }

}


//merge two char arrays
char *merge_strings(char *a, char *b){
    char *c = malloc(strlen(a) + strlen(b) + 1);
    strcpy(c, a);
    strcat(c, b);
    return c;
}

//create an array that includes all the functions in fetch.h file and prints it

