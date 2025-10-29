#include <stdio.h>

int main() {
    int a[3][3], r[3][3], i, j;
    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            r[j][2-i]=a[i][j];
        }
    }
    int same=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]!=r[i][j]) {
                same=0;}
        }
    }
    if(same) {
        printf("Rotated matrix is same as original.\n");
    }else{
        printf("Rotated matrix is not same as original.\n");
    }
    printf("Rotated Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}
