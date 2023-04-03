#include <stdio.h>

int main() 
{
    FILE *file;
    file = fopen("data.bin", "rb");

    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    int data;
    while (fread(&data, sizeof(int), 1, file)) {
        printf("%d ", data);
    }

    fclose(file);
    return 0;
}
