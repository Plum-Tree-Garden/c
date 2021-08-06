/*
 Plum Tree Garden
 contacts.c
 */

#define _CRT_SECURE_NO_WARNINGS

// INCLUDE CONTACTS.H AND STDIO.H
#include <stdio.h>
#include "contacts.h"


// DEFINE CONTACT getName FUNCTION
// STORE STD INPUT VALUES FOR NAME
void getName(struct Name *name) {
    
    char mi_y_or_n;
    
    // SCAN USER INPUT FOR CONTACT INFORMATION
    printf("Contact Management System\n");
    printf("-------------------------\n");
    
    // SCAN FIRST NAME
    printf("Please enter the contact's first name: ");
    fgets(name->firstName, 31, stdin);
    
    // IF LOWER/UPPER CASE 'Y', THEN SCAN MIDDLE NAME
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf("%c", &mi_y_or_n);
    
    if (mi_y_or_n == 'y' || mi_y_or_n == 'Y') {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%s", name->middleInitial);
    }
    
    // SCAN LAST NAME
    printf("Please enter the contact's last name: ");
    scanf("%s", name->lastName);
}


// DEFINE CONTACT getAddress FUNCTION
// STORE STD INPUT VALUES FOR ADDRESS
void getAddress(struct Address *address) {
    
    char appn_y_n;
    
    // SCAN STREET NUMBER
    printf("Please enter the contact's street number: ");
    scanf("%d", &address->streetNumber);
    
    // SCAN STREET ADDRESS
    printf("Please enter the contact's street name: ");
    scanf("%s", address->street);
    
    // SCAN APPARTMENT NUMBER IF LOW/UPPER CASE 'Y'
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf("%s", &appn_y_n);
    
    if (appn_y_n == 'y' || appn_y_n == 'Y') {
        printf("Please enter the contact's apartment number: ");
        scanf("%d", &address->appartmentNumber);
    }
    
    // SCAN POSTAL CODE
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", address->postalCode);
    
    // SCAN CITY
    printf("Please enter the contact's city: ");
    scanf("%s", address->city);
    
}


// DEFINE CONTACT getNumbers FUNCTION
// STORE STD INPUT VALUES FOR NUMBERS
void getNumbers(struct Numbers *numbers) {
    
    char cll_y_n, hme_y_n, bus_y_or_n;
    
    // SCAN CELL NUMBER IF LOWER/UPPER CASE 'Y'
    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf("%s", &cll_y_n);
    
    if (cll_y_n == 'y' || cll_y_n == 'Y') {
        printf("Please enter the contact's cell phone number: ");
        scanf("%s", numbers->cell);
    }
    
    // SCAN HOME NUMBER IF LOWER/UPPER CASE 'Y'
    printf("Do you want to enter a home phone number? (y or n): ");
    scanf("%s", &hme_y_n);
    
    if (hme_y_n == 'y' || hme_y_n == 'Y') {
        printf("Please enter the contact's home phone number: ");
        scanf("%s", numbers->home);
    }
    
    // SCAN BUSINESS NUMBER IF LOWER/UPPER CASE 'Y'
    printf("Do you want to enter a business phone number? (y or n): ");
    scanf("%s", &bus_y_or_n);
    
    if (bus_y_or_n == 'y' || bus_y_or_n == 'Y') {
        printf("Please enter the contact's business phone number: ");
        scanf("%s", numbers->business);
    }
    
}
