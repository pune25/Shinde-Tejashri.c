#include <stdio.h>
char *my_strrchr(const char *s, int c) 
{
    const char *last = NULL;
    char ch = (char)c;
    while (*s != '\0') {
        if (*s == ch) {
            last = s;
        }
        s++;
    }
    if (ch == '\0') {
        return (char *)s;
    }
    return (char *)last;
}

int main(void) {
    const char *text = "abcaXyzXaX";
    char targets[] = {'a', 'X', 'z', '\0', 'Q'};
    for (int i = 0; i < 5; i++) {
        char t = targets[i];
        char *res = my_strrchr(text, t);
        if (res) {
            printf("Last '%c' in \"%s\" is at index %td: \"%s\"\n",
                   t, text, res - text, res);
        } else {
            printf("Character '%c' not found in \"%s\"\n", t, text);
        }
    }
}