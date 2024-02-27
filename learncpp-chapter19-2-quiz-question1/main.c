//https://github.com/portfoliocourses/c-example-code/blob/main/dynamic_array_of_strings.c

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096 // in bytes

int getLength()
{
    printf("How many names would you like to enter? ");
    int length = 0;
    scanf_s("%d", &length);

    return length;
}

int main(void) // main function
{
    int totalStrings = getLength();

    printf("%d", totalStrings);

    //creating an array of pointers to char.
    char** strings;
        
    strings = malloc(totalStrings * sizeof(char*));

    char buffer[BUFFER_SIZE];

    size_t stringLength = 0;

    // flush out new line from printf call.
    // make it safe to use fgets()
    while (getchar() != '\n');

    printf("\n");
    for (int i = 0; i < totalStrings; i++)
    {
        printf("Name #%d:", i + 1);
        fgets(buffer, BUFFER_SIZE, stdin); //fgets will store "name\n"
        stringLength = strlen(buffer);
        buffer[stringLength - 1] = '\0'; // null terminator moved to "name\0" moves new line '\n'
        // alocate space on heap
        strings[i] = malloc(stringLength * sizeof(char));
        // copy string from buffer
        strcpy_s(strings[i], 0 ,buffer);
    }

    printf("\nHere is your sorted list :\n");
    for (int i = 0; i < totalStrings; i++) {
        printf("strings[%d] = %s\n", i, strings[i]);
    }
    printf("\n");


    //int i;
    //for (i = 0; i < totalstrings; ++i) {
    //    array[i] = (char*)malloc(stringsize + 1); // +1 for the null terminator
    //}


    //for (i = 0; i < totalstrings; ++i) {
    //    free(array[i]);
    //}
    //free(array);


    return 0;
}