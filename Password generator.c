#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12 // You can change this to the desired password length

void generatePassword(char *password, int length) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";
    int charsetSize = sizeof(charset) - 1;

    for (int i = 0; i < length; i++) {
        int key = rand() % charsetSize;
        password[i] = charset[key];
    }
    password[length] = '\0'; // Null-terminate the string
}

int main() {
    char password[PASSWORD_LENGTH + 1];
    
    srand(time(NULL)); // Seed the random number generator
    
    generatePassword(password, PASSWORD_LENGTH);
    
    printf("Generated Password: %s\n", password);
    
    return 0;
}
