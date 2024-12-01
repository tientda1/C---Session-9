#include <stdio.h>
#include <math.h>

int main() {
    int arr[100], size = 0, maxSize = 100, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In gia tri cac phan tu dang quan ly\n");
        printf("3. In cac phan tu chan va tinh tong\n");
        printf("4. In gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In cac phan tu la so nguyen to va tinh tong\n");
        printf("6. Thong ke so luong phan tu bang mot so nhap vao\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &size);

                if (size > maxSize || size < 0) {
                    printf("So phan tu khong hop le (toi da %d)!\n", maxSize);
                    size = 0;
                    break;
                }

                for (int i = 0; i < size; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                printf("Cac phan tu trong mang: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int sum = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;
            }
            case 4: {
                if (size == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                int max = arr[0], min = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;
            }
            case 5: {
                int sum = 0;
                printf("Cac phan tu la so nguyen to: ");
                for (int i = 0; i < size; i++) {
                    int isPrime = 1;
                    if (arr[i] < 2) isPrime = 0;
                    for (int j = 2; j <= sqrt(arr[i]); j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", sum);
                break;
            }
            case 6: {
                int x, count = 0;
                printf("Nhap mot so de thong ke: ");
                scanf("%d", &x);

                for (int i = 0; i < size; i++) {
                    if (arr[i] == x) count++;
                }
                printf("So phan tu bang %d trong mang: %d\n", x, count);
                break;
            }
            case 7: {
                if (size >= maxSize) {
                    printf("Mang da day, khong the them phan tu moi!\n");
                    break;
                }

                int value, index;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them (tu 0 den %d): ", size);
                scanf("%d", &index);

                if (index < 0 || index > size) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                for (int i = size; i > index; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[index] = value;
                size++;
                break;
            }
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}

