#include <stdio.h>

int Iarray(int arr[], int size) {
    int i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return size;
}

int Arr(int arr[], int size) {
    int i;
    printf("Mang hien tai: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int input(int arr[], int size) {
    int value, index;
    if (size >= 100) {
        printf("Mang da day, khong the them phan tu moi!\n");
        return size;
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them (tu 0 den %d): ", size);
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Vi tri khong hop le!\n");
        return size;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    size++;
    return size;
}
int edit(int arr[], int size) {
    int index, value;
    printf("Nhap vi tri can sua (tu 0 den %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Vi tri khong hop le!\n");
        return -1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[index] = value;
    return 0;
}

int removeArr(int arr[], int size) {
    int index;
    printf("Nhap vi tri can xoa (tu 0 den %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Vi tri khong hop le!\n");
        return size;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    return size;
}

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
            size = Iarray(arr, size);
        } else if (choice == 2) {
            Arr(arr, size);
        } else if (choice == 3) {
            size = input(arr, size);
        } else if (choice == 4) {
            edit(arr, size);
        } else if (choice == 5) {
            size = removeArr(arr, size);
        } else if (choice == 6) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}

