
#include <stdio.h>

int main() {
    int arr[10] = {3, 12, 5, 8, 23, 2, 17, 9, 1, 6};  // Array di esempio
    int max = arr[0];  // Inizializza il valore massimo con il primo elemento dell'array
    
    // Scorre l'array e confronta ogni elemento con il valore massimo corrente
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Aggiorna il valore massimo
        }
    }
    
    printf("Il valore massimo nell'array è: %d\n", max);
    
    return 0;
}
