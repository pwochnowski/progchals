


#include <stdio.h>
#include <stdlib.h>

int main(){

    int row, col;
    long long tmp;
    scanf("%d %d", &row, &col);

    int min, maxRow, max;
    min = 0;
    
    int i, j;
    
    for( i = 0; i < row; i++){
        scanf("%lld", &tmp);
        min = tmp;
        for( j = 1; j < col; j++) {
            scanf("%lld", &tmp);

            if( tmp < min){
                min = tmp;
            }
        }
        if( min > max){
            max = min;
            maxRow = i;
        }
    }

    //printf("Row: %d, quickest song %d\n", maxRow, max);
    printf("%d\n", max);

    return EXIT_SUCCESS;
}
        

