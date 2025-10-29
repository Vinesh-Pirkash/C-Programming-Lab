#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3], sum;
    int i,j;
    printf("Enter first 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<3;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("Product Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
