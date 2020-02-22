#include <stdio.h>
#include <string.h>

int dictionary();

int main(int argc, char** argv){
    char input[] = "The cat ate the fish. The dog barked and bit the cat. The dog ate John's bone.";
    dictionary(input);
}

int dictionary(char text[]) {
    char* token = strtok(text, ".");
    char words[] = "";
    int sentenceCount = 0;

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ".");
        sentenceCount++;
    }
}