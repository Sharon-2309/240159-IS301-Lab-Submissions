#include <stdio.h>
#include <stdlib.h>

/*
Algorithm: Payroll Register Program

1. Open employee.txt for reading
2. If file fails → show error and stop
3. Open payroll_register.txt for writing
4. If file fails → show error and stop
5. Skip header line
6. Write headers to output file
7. Loop through file:
   - Read data
   - Calculate base pay
   - Write to output file
8. Close files
9. Display success message
*/


int main() {
    FILE *inFile, *outFile;

    int empNo, dept, hoursWorked;
    float payRate, basePay;
    char exempt;
    char header[100];

    /* Open input file */
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }

    /* Open output file */
    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    /* Read and discard header line */
    fgets(header, sizeof(header), inFile);

    /* Write headers to output file */
    fprintf(outFile, "%-10s %-10s %-10s %-8s %-13s %-10s\n",
            "EmpNo", "Dept", "PayRate", "Exempt", "HoursWorked", "BasePay");

    /* Read employee records */
    while (fscanf(inFile, "%d %d %f %c %d",
                  &empNo, &dept, &payRate, &exempt, &hoursWorked) == 5) {

        basePay = payRate * hoursWorked;

        fprintf(outFile, "%-10d %-10d %-10.2f %-8c %-13d %-10.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    /* Close files */
    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}