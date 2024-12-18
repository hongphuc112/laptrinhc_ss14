#include <stdio.h>
int main() {
    char chuoi[] = "DinhHongPhuc";
    int count = 0;
    int flag = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != ' ') {
            if (flag == 0) {
                count++;
                flag = 1;
            }
        } else {
            flag = 0;
        }
    }
    printf("So tu trong chuoi: %d", count);
    return 0;
}

