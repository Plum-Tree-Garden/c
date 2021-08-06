/*
 Plum Tree Garden
 contacts.h
 */

#include <stdio.h>

// DEFINE STRUCTURE NAME
struct Name {
    
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// DEFINE STRUCTURE ADDRESS
struct Address {
    
    char street[31];
    char city[41];
    int streetNumber;
    int appartmentNumber;
    char postalCode[8];
};

// DEFINE STRUCTURE NUMBERS
struct Numbers {
    
    char cell[21];
    char home[21];
    char business[21];
};

// DEFINE CONTACT: NAME/ADDRESS/NUMBERS
struct Contact {
    
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};


// RETRIEVE AND STORE STD INPUT FOR NAMES
void getName(struct Name *name);

// RETRIEVE AND STORE STD INPUT FOR ADDRESS
void getAddress(struct Address *address);

// RETRIEVE AND STORE STD INPUT FOR NUMBERS
void getNumbers(struct Numbers *numbers);
