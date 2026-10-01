#include <stdio.h>

int main() {
    // 3 adet sensör verisi tutacak bir dizi (array) tanımlıyoruz
    int sensor_data[3]; 

    // Yanlışlıkla 4. sıraya veri yazmaya çalışıyoruz!
    sensor_data[3] = 100; 

    // Başlangıç değeri atanmamış (uninitialized) bir değişken
    int temperature; 
    
    if (temperature > 50) {
        printf("Sicaklik cok yuksek!\n");
    }

    return 0;
}