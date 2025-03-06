#include <stdio.h>

int main() {
    FILE *file;

    // Writing to a file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Hello, File Handling in C!\n");
    fclose(file);

    // Reading from a file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, file)) {
        printf("%s", buffer);
    }
    fclose(file);

    // Appending to a file
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Appending this line!\n");
    fclose(file);

    // Renaming the file
    if (rename("example.txt", "new_example.txt") == 0)
        printf("\nFile renamed successfully!\n");

    // Deleting the file
    if (remove("new_example.txt") == 0)
        printf("File deleted successfully!\n");

    return 0;
}
