#include <stdio.h>
#include <string.h>

void main() { 
    int i;
    char input[500];
    char *Morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                     "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                     "..-", "...-", ".--", "-..-", "-.--", "--.."};
    printf("Enter your Morse code :\n");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    char *token = strtok(input, " ");
    while (token != NULL) {
        if (strcmp(token, "/") == 0) {
            printf(" ");
        } else {
            for (i = 0; i < 26; i++) {
                if (strcmp(token, Morse[i]) == 0) {
                    printf("%c", 'a' + i);
                    break;
                }
            }
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}
