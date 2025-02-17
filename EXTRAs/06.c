// Check Substring and Count Occurrences (Without Library Functions).
#include <stdio.h>
#include <string.h>

int isSubstring(char str[], char sub[]) {
    int i, j, count = 0;
    int strLen = strlen(str);
    int subLen = strlen(sub);

    for (i = 0; i <= strLen - subLen; i++) {
        j = 0;
        while (j < subLen && str[i + j] == sub[j]) {
            j++;
        }

        if (j == subLen) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], sub[50];

    printf("Enter the main string: ");
    scanf(" %[^\n]", str);
    
    printf("Enter the substring to search: ");
    scanf(" %[^\n]", sub);

    int occurrences = isSubstring(str, sub);

    if (occurrences > 0)
        printf("Substring found %d times.\n", occurrences);
    else
        printf("Substring not found.\n");

    return 0;
}
