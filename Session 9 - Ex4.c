#include <stdio.h>

int main() {
    int arr[100], size = 0, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so phan tu cua mang: ");
            scanf("%d", &size);
            for (int i = 0; i < size; i++) {
                printf("Nhap phan tu thu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        } else if (choice == 2) {
            printf("Mang hien tai: ");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 3) {
            if (size >= 100) {
                printf("Mang da day, khong the them phan tu moi!\n");
            } else {
                int value, index;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them (tu 0 den %d): ", size);
                scanf("%d", &index);

                if (index < 0 || index > size) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = size; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    size++;
                }
            }
        } else if (choice == 4) {
            int index, value;
            printf("Nhap vi tri can sua (tu 0 den %d): ", size - 1);
            scanf("%d", &index);

            if (index < 0 || index >= size) {
                printf("Vi tri khong hop le!\n");
            } else {
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[index] = value;
            }
        } else if (choice == 5) {
            int index;
            printf("Nhap vi tri can xoa (tu 0 den %d): ", size - 1);
            scanf("%d", &index);

            if (index < 0 || index >= size) {
                printf("Vi tri khong hop le!\n");
            } else {
                for (int i = index; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
            }
        } else if (choice == 6) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}

