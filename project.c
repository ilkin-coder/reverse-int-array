#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, element, arrLength = 0;

    // Dizi boyutu olarak kullanıcıdan alınan 'n' değeri kullanılmalıdır.
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {  // i'yi 0'dan başlatın
        bool check = true;
        scanf("%d", &element);

        // Dizi elemanlarını kontrol ederken arrLength yerine i kullanın.
        for (int j = 0; j < i; j++) {
            if (element == arr[j]) {
                check = false;
                break;
            }
        }

        if (check) {
            arr[i] = element;
            arrLength += 1;
        }
    }

    for (int t = 0; t < arrLength; t++) {
        printf("%d ", arr[t]);
    }

    return 0;  // main fonksiyon sonunda bir değer döndürülmelidir.
}


