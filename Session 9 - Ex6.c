#include <stdio.h>
#include <math.h>

int main() {
    int arr[100][100], hang = 0, cot = 0, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua ma tran\n");
        printf("2. In gia tri cac phan tu cua ma tran theo ma tran\n");
        printf("3. In gia tri cac phan tu le va tinh tong\n");
        printf("4. In cac phan tu tren duong bien va tinh tich\n");
        printf("5. In cac phan tu tren duong cheo chinh\n");
        printf("6. In cac phan tu tren duong cheo phu\n");
        printf("7. In dong co tong gia tri cac phan tu lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so hang cua ma tran: ");
                scanf("%d", &hang);
                printf("Nhap so cot cua ma tran: ");
                scanf("%d", &cot);

                for (int i = 0; i < hang; i++) {
                    for (int j = 0; j < cot; j++) {
                        printf("Nhap phan tu [%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }
            case 2: {
                printf("Ma tran:\n");
                for (int i = 0; i < hang; i++) {
                    for (int j = 0; j < cot; j++) {
                        printf("%4d", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                int sum = 0;
                printf("Cac phan tu le: ");
                for (int i = 0; i < hang; i++) {
                    for (int j = 0; j < cot; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", sum);
                break;
            }
            case 4: {
                int element = 1;
                printf("Cac phan tu tren duong bien: ");
                for (int i = 0; i < hang; i++) {
                    for (int j = 0; j < cot; j++) {
                        if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                            printf("%d ", arr[i][j]);
                            element *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", element);
                break;
            }
            case 5: {
                if (hang == cot) {
                    printf("Cac phan tu tren duong cheo chinh: ");
                    for (int i = 0; i < hang; i++) {
                        printf("%d ", arr[i][i]);
                    }
                    printf("\n");
                } else {
                    printf("Chi ap dung cho ma tran vuong!\n");
                }
                break;
            }
            case 6: {
                if (hang == cot) {
                    printf("Cac phan tu tren duong cheo phu: ");
                    for (int i = 0; i < hang; i++) {
                        printf("%d ", arr[i][hang - 1 - i]);
                    }
                    printf("\n");
                } else {
                    printf("Chi ap dung cho ma tran vuong!\n");
                }
                break;
            }
            case 7: {
                int maxSum = 0, sum = 0, maxHang = 0;
                for (int i = 0; i < hang; i++) {
                    sum = 0;
                    for (int j = 0; j < cot; j++) {
                        sum += arr[i][j];
                    }
                    if (i == 0 || sum > maxSum) {
                        maxSum = sum;
                        maxHang = i;
                    }
                }
                printf("Dong co tong lon nhat la dong %d (tong = %d)\n", maxHang + 1, maxSum);
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

