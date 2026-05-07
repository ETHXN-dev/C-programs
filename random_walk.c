#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    char arr[10][10];
    memset(arr, '.', sizeof(arr));
    arr[0][0] = 'A';

    srand((unsigned)time(NULL));

    int i = 0, j = 0;
    char ch = 'B';

    while (ch <= 'Z') {

        if ((i - 1 < 0 || arr[i - 1][j] != '.') &&
            (j + 1 > 9 || arr[i][j + 1] != '.') &&
            (i + 1 > 9 || arr[i + 1][j] != '.') &&
            (j - 1 < 0 || arr[i][j - 1] != '.'))
            break;

        int move = rand() % 4;

        switch (move) {
            case 0:
                if (i - 1 < 0 || arr[i - 1][j] != '.')
                    break;
                else {
                    i--;
                    arr[i][j] = ch++;
                }
                break;
            case 1:
                if (j + 1 > 9 || arr[i][j + 1] != '.')
                    break;
                else {
                    j++;
                    arr[i][j] = ch++;
                }
                break;
            case 2:
                if (i + 1 > 9 || arr[i + 1][j] != '.')
                    break;
                else {
                    i++;
                    arr[i][j] = ch++;
                }
                break;
            case 3:
                if (j - 1 < 0 || arr[i][j - 1] != '.')
                    break;
                else {
                    j--;
                    arr[i][j] = ch++;
                }
                break;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("\n");
        for (int j = 0; j < 10; j++) {
            printf("%c    ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
