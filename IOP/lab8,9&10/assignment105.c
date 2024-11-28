#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s ",str);
    }
    else {
        for (int i=l; i<=r; i++) {
            swap((str+l),(str+i));
            permute(str, l+1, r);
            swap((str+l),(str+i));
        }
    }
}

int main() {
    char *c = malloc(50 * sizeof(char));
    printf("Enter String: ");
    fgets(c,50,stdin);
    c[strcspn(c, "\n")] = '\0';
    int n = strlen(c);
    permute(c, 0, n-1);
    free(c);
    return 0;
}