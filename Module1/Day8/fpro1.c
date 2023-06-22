#include <stdio.h>

#define BUFFER_SIZE 4096

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    // Get the source file path
    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    // Open the source file in binary mode
    sourceFile = fopen(sourcePath, "rb");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    // Get the destination file path
    printf("Enter the path of the destination file: ");
    scanf("%s", destinationPath);

    // Open the destination file in binary mode
    destinationFile = fopen(destinationPath, "wb");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
