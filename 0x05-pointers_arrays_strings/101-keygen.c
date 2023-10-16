#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 63  // The length of the password

/**
 * main - initiating a password
 *result: always 0
 */
int main(void)
{
char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator

srand(time(NULL));  // Seed the random number generator with the current time

    // Define the characters that can be in the password
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
        // Generate a random index within the charset
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}

password[PASSWORD_LENGTH] = '\0';  // Null-terminate the password

printf("%s\n", password);

    return (0);
}
