#include <stdio.h>

int main() {
    int products[10];
    int size = 10; 
    
    int i;
    for (i = 0; i < size; i++) {
      printf("Enter Product %d ID(3-digit numbers): ", i + 1);
      scanf("%d", &products[i]);
    }
    
    int id_remove;
    printf("\nEnter the product ID to remove: ");
    scanf("%d", &id_remove);
    
    int j;
    for (i = 0; i < size; i++) {
        if (products[i] == id_remove) {
            for (j = i; j < size - 1; j++) {
                products[j] = products[j + 1];
            }
            size--;   
            i--;      
        }
    }
    
    printf("\nUpdated list :\n");
    for (i = 0; i < size; i++) {
        printf("%d  ", products[i]);
    }

    if (size == 0){
        printf("\nAll products have been removed!");
    }

    return 0;
}
