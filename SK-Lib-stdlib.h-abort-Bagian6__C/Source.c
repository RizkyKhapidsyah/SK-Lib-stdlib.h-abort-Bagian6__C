#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* stream = NULL;
    errno_t err = 0;

    err = fopen_s(&stream, "NOSUCHF.ILE", "r");

    if ((err != 0) || (stream == NULL)) {
        perror("File could not be opened");
        abort();
    } else {
        fclose(stream);
    }

    _getch();
    return 0;
}