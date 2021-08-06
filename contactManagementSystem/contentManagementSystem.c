/*
 Plum Tree Garden

 contactMangementSystem.c
 */

#define _CRT_SECURE_NO_WARNINGS

// INCLUDE CONTACTS.H AND STDIO.H
#include <stdio.h>
#include "contacts.h"


// INITIALIZE STRUCTURES
struct Name name = {{0}};
struct Numbers numbers = {{0}};
struct Address address = {{0}};


int main(void) {
    

    // INITIALIZE CONTACT STRUCTURE   	
    struct Contact kontakt = {{{0}}};
    
    // CALL CONTACT FUNCTION getName TO STORE VALUES FOR NAME MEMBER
    getName(&kontakt.name);
    
    // CALL CONTACT FUNCTION getAddress TO STORE VALUES FOR NAME MEMBER
    getAddress(&kontakt.address);
    
    // CALL CONTACT FUNCTION getNumbers TO STORE VALUES FOR NAME MEMBER
    getNumbers(&kontakt.numbers);
    

    printf("\n");
    
    // LIST CONTACT DETAILS
    printf("Contact Details\n");
    printf("---------------\n");
    
    
    // PRINT NAME DETAILS
    printf("Name Details\n");
    
    printf("First name: %s", kontakt.name.firstName);
    printf("Middle initial(s): %s\n", kontakt.name.middleInitial);
    printf("Last name: %s\n\n", kontakt.name.lastName);
    
    // PRINT ADDRESS DETAILS
    printf("Address Details\n");
    
    printf("Street number: %d\n", kontakt.address.streetNumber);
    printf("Street name: %s\n", kontakt.address.street);
    printf("Apartment: %d\n", kontakt.address.appartmentNumber);
    printf("Postal code: %s\n", kontakt.address.postalCode);
    printf("City: %s\n\n", kontakt.address.city);
    
    // PRINT PHONE NUMBERS
    printf("Phone Numbers:\n");
    
    printf("Cell phone number: %s\n", kontakt.numbers.cell);
    printf("Home phone number: %s\n", kontakt.numbers.home);
    printf("Business phone number: %s\n\n", kontakt.numbers.business);
    
    // CONCLUDE STRUCTURE
    printf("Structure test for Contact using functions done!\n");
    
    
    return 0;
}

