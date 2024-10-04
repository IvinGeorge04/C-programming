#include <stdio.h>
#include <string.h>

int main() {
    char string[30];
    int len, i, vow = 0, spc = 0, cons = 0;

    printf("Enter a string ending with $:");
    fgets(string, sizeof(string), stdin);

    // Remove the newline character from the string
    len = strlen(string);
    if (string[len - 1] == '\n') {
        string[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        char c = string[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vow++;
        } else if (string[i] == ' ') {
            spc++;
        } else {
            cons++;
        }
    }

    printf("Vowels=%d\nSpaces=%d\nConsonants=%d\n", vow, spc, cons);
    return 0;
}