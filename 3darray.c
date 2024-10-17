//3D Array
#include <stdio.h>
int main(){
    int marks[3][3][3]={
        {{70,80,90},{80,90,85},{90,85,75}},
        {{80,90,85},{90,85,75},{85,75,65}},
        {{90,85,75},{85,75,65},{75,65,55}}
    };
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d\t",marks[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}