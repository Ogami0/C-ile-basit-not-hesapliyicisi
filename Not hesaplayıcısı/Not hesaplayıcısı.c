#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int dersNotlari[9][2]; 
    char dersAdlari[9][20] = { "1. DERS", "2. DERS", "3. DERS", "4. DERS", "5. DERS", "6. DERS", "7. DERS", "8. DERS", "9. DERS" };

    int i;

    for (i = 0; i < 6; i++) {
        printf("LÜTFEN %s 1. SİNAV NOTUNU GİRİNİZ\n", dersAdlari[i]);
        scanf_s("%d", &dersNotlari[i][0]);

        printf("LÜTFEN %s 2. SİNAV NOTUNU GİRİNİZ\n", dersAdlari[i]);
        scanf_s("%d", &dersNotlari[i][1]);

        printf("%s 1. SİNAV NOTU: %d\n", dersAdlari[i], dersNotlari[i][0]);
        printf("%s 2. SİNAV NOTU: %d\n", dersAdlari[i], dersNotlari[i][1]);

        if (dersNotlari[i][0] > dersNotlari[i][1]) {
            printf("%s 1. SİNAV NOTU 2. SİNAV NOTUNDAN YÜKSEK\n", dersAdlari[i]);
        }
        else if (dersNotlari[i][1] > dersNotlari[i][0]) {
            printf("%s 2. SİNAV NOTU 1. SİNAV NOTUNDAN YÜKSEK\n", dersAdlari[i]);
        }
        else {
            printf("%s 1. SİNAV NOTU 2. SİNAV NOTUNA EŞİTTİR\n", dersAdlari[i]);
        }

        int dersToplam = dersNotlari[i][0] + dersNotlari[i][1];
        printf("Toplam: %d\n", dersToplam);

        float dersOrtalama = (float)dersToplam / 2;
        printf("Ortalama: %.2f\n", dersOrtalama);
    }

    return 0;
}
