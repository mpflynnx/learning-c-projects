#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_BUFFER 100

int main(void)
{
    char buffer[LINE_BUFFER] = { 0 };
    printf("Enter your full name: ");
    fgets(buffer, 100, stdin);

    // https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
    buffer[strcspn(buffer, "\n")] = 0;
    
    printf("Enter your age: ");
    int age;
    scanf_s("%d", &age);

    size_t length = strlen(buffer);
    int i = (int)length;

    printf("Your age + length of name is: %d\n", (age + i));

    return 0;
}
