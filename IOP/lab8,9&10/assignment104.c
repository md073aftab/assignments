#include <stdio.h>
int main() {
    enum color { Red = 1, Green, Yellow, Blue};
    enum color my_color;
    int color_input;
    printf("1 - Red, 2 - Green, 3 - Yellow, 4 - Blue\n");
    printf("Enter a number for colour :");
    scanf("%d", &color_input);
    my_color = (enum color) color_input;
    switch (my_color) {
        case Red:
            printf("#FF0000\n");
            break;
        case Green:
            printf("#00FF00\n");
            break;
        case Yellow:
            printf("#FFFF00\n");
            break;
        case Blue:
            printf("#CCEEFF\n");
            break;
        default:
            printf("Invalid Color\n");
            break;
    }
    return 0;
}