#include <stdio.h>

int main() {
    char name[100];
    
    printf("Enter character name: ");
    scanf("%s", name);
    
    printf("Hello, %s! Welcome!\n", name);
    return 0;
}