#include <stdio.h>

int main() {
    int arr[100];
    int n, index;
    printf("Nhap vao so phan tu ban muon (toi da 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le! Hay nhap trong khoang 1 den 100.\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri can xoa (bat dau tu 1): ");
    scanf("%d", &index);
    if (index < 1 || index > n) {
        printf("Vi tri khong hop le! Hay nhap trong khoang 1 den %d.\n", n);
        return 1;
    }
    for (int i = index - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Mang sau khi xoa la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

