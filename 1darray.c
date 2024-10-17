// //create a 1D array
#include <stdio.h>
int main(){
    int marks[10]={70,80,90,85,75,60,70,80,90,85};
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
}
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