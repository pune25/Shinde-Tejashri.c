#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "Hello, World!";
    char str2[100] = "HELLO, world!";
    char str3[100] = "   leading and trailing spaces   ";
    char str4[100] = "C programming is powerful";
    char buffer[100];
    char *token;
    char delim[] = " ,";

    
    printf("1. Length of str1: %lu\n", strlen(str1));

    // 2. strcpy
    strcpy(buffer, str1);
    printf("2. Copy str1 to buffer: %s\n", buffer);

    // 3. strncpy
    strncpy(buffer, str2, 5);
    buffer[5] = '\0';
    printf("3. Copy first 5 chars of str2 to buffer: %s\n", buffer);

    // 4. strcat
    strcpy(buffer, str1);
    strcat(buffer, " Goodbye!");
    printf("4. Concatenation: %s\n", buffer);

    // 5. strncat
    strncat(buffer, " C!", 2);
    printf("5. Concatenation (limit 2 chars): %s\n", buffer);

    // 6. strcmp
    printf("6. strcmp: %d\n", strcmp(str1, str2));

    // 7. strncmp
    printf("7. strncmp (5 chars): %d\n", strncmp(str1, str2, 5));

    // 8. strcasecmp (POSIX)
    printf("8. strcasecmp: %d\n", strcasecmp(str1, str2));

    // 9. strchr
    printf("9. strchr: %s\n", strchr(str1, 'W'));

    // 10. strrchr
    printf("10. strrchr: %s\n", strrchr(str1, 'l'));

    // 11. strstr
    printf("11. strstr: %s\n", strstr(str4, "programming"));

    // 12. strtok
    printf("12. strtok tokens from str4: ");
    strcpy(buffer, str4);
    token = strtok(buffer, delim);
    while (token != NULL) {
        printf("[%s] ", token);
        token = strtok(NULL, delim);
    }
    printf("\n");

    // 13. strdup (POSIX)
    char *dup = strdup(str1);
    printf("13. strdup: %s\n", dup);

    // 14. memset
    memset(buffer, '-', 10);
    buffer[10] = '\0';
    printf("14. memset: %s\n", buffer);

    // 15. memcmp
    printf("15. memcmp: %d\n", memcmp(str1, str2, 5));

    // 16. memcpy
    memcpy(buffer, str2, strlen(str2) + 1);
    printf("16. memcpy: %s\n", buffer);

    // 17. memmove
    memmove(buffer + 5, buffer, strlen(buffer) + 1);
    printf("17. memmove (safe overlapping): %s\n", buffer);

    // 18. strspn
    printf("18. strspn (from str1 with 'Hel'): %lu\n", strspn(str1, "Hel"));

    // 19. strcspn
    printf("19. strcspn (from str1 with ','): %lu\n", strcspn(str1, ","));

    // 20. strpbrk
    printf("20. strpbrk (find any 'aeiou' in str1): %s\n", strpbrk(str1, "aeiou"));

    // 21. strtok_r (reentrant version of strtok)
    printf("21. strtok_r tokens: ");
    char *rest;
    strcpy(buffer, str4);
    token = strtok_r(buffer, delim, &rest);
    while (token != NULL) {
        printf("[%s] ", token);
        token = strtok_r(NULL, delim, &rest);
    }
    printf("\n");

    free(dup); 

    return 0;
}