#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main(void) {
    char input_file[] = "input.txt";
    char error_file[] = "error_log.txt";
    char line[MAX_LINE_LENGTH];

   
    FILE* input_fp = fopen(input_file, "r");
    if (input_fp == NULL) {
        perror("Failed to open input file");
        exit(EXIT_FAILURE);
    }

   
    FILE* error_fp = fopen(error_file, "w");
    if (error_fp == NULL) {
        perror("Failed to open error file");
        fclose(input_fp);
        exit(EXIT_FAILURE);
    }

  
    while (fgets(line, MAX_LINE_LENGTH, input_fp) != NULL) {
        if (strstr(line, "error") != NULL) {
            fputs(line, error_fp);
        }
    }


    fclose(input_fp);
    fclose(error_fp);

   
    error_fp = fopen(error_file, "r");
    if (error_fp == NULL) {
        perror("Failed to open error file");
        exit(EXIT_FAILURE);
    }

    printf("Contents of %s:\n", error_file);

    while (fgets(line, MAX_LINE_LENGTH, error_fp) != NULL) {
        printf("%s", line);
    }

    fclose(error_fp);

    return EXIT_SUCCESS;
}
