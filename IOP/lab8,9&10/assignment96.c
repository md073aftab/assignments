#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter the number of strings:\n");
    scanf("%d", &n);
    getchar(); 

    char str[n][100], temp[100];

    
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0'; 
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    
    printf("Strings in ascending order \n");
    for (int i = 0; i < n; i++) {
        puts(str[i]);
    }

    return 0;
}
