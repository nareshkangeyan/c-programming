#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_LETTERS 26

int main() {
    char input_filename[] = "data.txt";
    char output_filename[] = "statistics.txt";
    FILE *input_file, *output_file;
    char buffer[1000];
    int letter_count[NUM_LETTERS] = {0};
    char letter;

   
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    while ((letter = fgetc(input_file)) != EOF) {
        if (isalpha(letter)) {
            letter_count[tolower(letter) - 'a']++;
        }
    }

   
    fclose(input_file);

   
    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }

   
    for (int i = 0; i < NUM_LETTERS; i++) {
        fprintf(output_file, "%c: %d\n", 'a' + i, letter_count[i]);
    }

  
    fclose(output_file);

    printf("Letter frequency statistics written to '%s'\n", output_filename);

    return 0;
}
