//2d Array
#include <stdio.h>
int main(){
    int marks[3][3]={
        {70,80,90},
        {80,90,85},
        {90,85,75}
    };
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}