#include <stdio.h>
#include <string.h>
#include <ctype.h>

void atbash_sifreleme(char *metin) {
    for (int i = 0; metin[i] != '\0'; i++) {
        if (isalpha(metin[i])) {
            if (isupper(metin[i])) {
                metin[i] = 'Z' - (metin[i] - 'A');
            } else {
                metin[i] = 'z' - (metin[i] - 'a');
            }
        }
    }
}

int main() {
    char metin[100];

    printf("Siflemek istediginiz metni giriniz: ");
    fgets(metin, sizeof(metin), stdin);
    metin[strcspn(metin, "\n")] = 0;

    atbash_sifreleme(metin);

    printf("Atbash ile sifrelenmis metin: %s\n", metin);
    return 0;
}
