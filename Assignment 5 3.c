#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *input_file, *output_file;
    char input_filename[] = "input.txt";
    char output_filename[] = "output.txt";
    char buffer[1000];
    char *replace_str = "blue";
    char *search_str = "red";
    char *pos, *start;
    int replace_len = strlen(replace_str);
    int search_len = strlen(search_str);
    int count = 0;

  
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }

    
    while (fgets(buffer, sizeof(buffer), input_file)) {
        start = buffer;
        while ((pos = strstr(start, search_str)) != NULL) {
         
            fwrite(start, sizeof(char), pos - start, output_file);
            
            fwrite(replace_str, sizeof(char), replace_len, output_file);
            
            start = pos + search_len;
           
            count++;
        }
     
        fwrite(start, sizeof(char), strlen(start), output_file);
    }


    fclose(input_file);
    fclose(output_file);

    printf("Replaced %d occurrences of '%s' with '%s' in '%s' and wrote to '%s'\n",
           count, search_str, replace_str, input_filename, output_filename);

    return 0;
}
