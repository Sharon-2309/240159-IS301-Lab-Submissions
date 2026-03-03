/*  Problem:  Generate a customer bill for 5 products with tax.
    Algorithm:
              1. Define constants for unit prices and tax rate.
              2. Prompt the user to enter quantities for each product.
              3. Calculate total price for each product = quantity × unit price.
              4. Compute subtotal = sum of all product totals.
              5. Compute tax = subtotal × tax rate.
              6. Compute final total = subtotal + tax.
              7. Display results in tabular format with QTY, DESCRIPTION, UNIT PRICE, TOTAL PRICE.
              8. Display subtotal, tax, and total neatly formatted.
    Developed by:Sharon PETER
    Date:26/02/2026

*/

#include <stdio.h>

int main(){

// Constants 
const float TV_PRICE = 400.00; 
const float MONITOR_PRICE = 220.00; 
const float FLASHDRIVE_PRICE = 35.20; 
const float HARDDRIVE_PRICE = 150.00; 
const float PRINTER_PRICE = 300.00; 
const float TAX_RATE = 0.0835; // 8.35% 
// Variables 
int qtyTV, qtyMonitor, qtyFlash, qtyHard, qtyPrinter; 
float totalTV, totalMonitor, totalFlash, totalHard, totalPrinter; 
float subtotal, tax, total;
// Input 
printf("How many TVs were sold? "); 
scanf("%d", &qtyTV); 
printf("How many Monitors were sold? "); 
scanf("%d", &qtyMonitor); 
printf("How many Flash Drives were sold? "); 
scanf("%d", &qtyFlash); 
printf("How many Hard Drives were sold? "); 
scanf("%d", &qtyHard); 
printf("How many Deskjet Printers were sold? "); 
scanf("%d", &qtyPrinter); 
// Calculations 
totalTV = qtyTV * TV_PRICE; 
totalMonitor = qtyMonitor * MONITOR_PRICE; 
totalFlash = qtyFlash * FLASHDRIVE_PRICE; 
totalHard = qtyHard * HARDDRIVE_PRICE; 
totalPrinter = qtyPrinter * PRINTER_PRICE; 

subtotal = totalTV + totalMonitor + totalFlash + totalHard + totalPrinter; 
tax = subtotal * TAX_RATE; 
total = subtotal + tax;
// Output 
printf("\nQTY DESCRIPTION UNIT PRICE TOTAL PRICE\n");
 printf("--------------------------------------------------------\n"); 
 printf("%-5d %-15s %10.2f %15.2f\n", qtyTV, "TV", TV_PRICE, totalTV); 
 printf("%-5d %-15s %10.2f %15.2f\n", qtyMonitor, "Monitor", MONITOR_PRICE, totalMonitor); 
 printf("%-5d %-15s %10.2f %15.2f\n", qtyFlash, "Flash Drive", FLASHDRIVE_PRICE, totalFlash); 
 printf("%-5d %-15s %10.2f %15.2f\n", qtyHard, "Hard Drive", HARDDRIVE_PRICE, totalHard); 
 printf("%-5d %-15s %10.2f %15.2f\n", qtyPrinter, "Deskjet Printer", PRINTER_PRICE, totalPrinter); 

 printf("--------------------------------------------------------\n"); 
 printf("Subtotal: %34.2f\n", subtotal); printf("Tax: %39.2f\n", tax); 
 printf("Total: %37.2f\n", total); 
 
return 0;
}
