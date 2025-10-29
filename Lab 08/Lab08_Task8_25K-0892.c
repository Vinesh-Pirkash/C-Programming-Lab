#include <stdio.h>

int main() {
    int a[3][3], i, j, even=0, odd=0, pos=0, neg=0, zero=0;
    printf("Enter 3x3 matrix elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]%2==0){
               even++; 
            }else {
               odd++;} 
            if(a[i][j]>0){ 
               pos++;}
            else if(a[i][j]<0) 
            {neg++;}
            else {
            zero++;}
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\nZeros: %d\n",even,odd,pos,neg,zero);
    return 0;
}
