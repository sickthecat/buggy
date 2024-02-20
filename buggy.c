#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void secret_function() {
    printf("Congratulations! Meow!\n");
}

void vulnerable_function() {
    char buffer[128];
    printf("Enter some text: ");
    fflush(stdout);
    gets(buffer); 
    printf(buffer); 
    printf("\n");
}

void leak_function() {
    char *secret = "Mew mew mew mew!";
    printf("Debug info: %p\n", (void*)secret); 
}

int main(int argc, char **argv) {
    leak_function(); 
    vulnerable_function(); 
    return 0;
}
