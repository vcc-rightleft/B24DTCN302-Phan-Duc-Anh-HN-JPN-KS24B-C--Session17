#include <stdio.h>
#include <string.h>
#include <ctype.h>


int demChuCai(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {  
            count++;
        }
        str++;
    }
    return count;
}


int demChuSo(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {  
            count++;
        }
        str++;
    }
    return count;
}

int demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalnum(*str) && !isspace(*str)) {  
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];  
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();  // Lo?i b? ký t? '\n' còn sót l?i sau khi nh?p

        switch (choice) {
            case 1:
                printf("Nhap chuoi: ");
                fgets(str, sizeof(str), stdin);
                // Xóa ký t? '\n' ? cu?i chu?i n?u có
                str[strcspn(str, "\n")] = '\0';
                break;
            case 2:
                printf("Chuoi vua nhap: %s\n", str);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", demChuCai(str));
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", demChuSo(str));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", demKyTuDacBiet(str));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}

