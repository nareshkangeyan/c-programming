#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[100];
    char search_str[100];
    char line[1000];
    FILE *file;

    // Prompt the user for the filename and search string
    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Enter search string: ");
    scanf("%s", search_str);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read each line of the file and print lines that contain the search string
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, search_str) != NULL) {
            printf("%s", line);
        }
    }

    // Close the file
    fclose(file);

    return 0;
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

    // Open the input file for reading
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }
