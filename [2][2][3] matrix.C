// C arrays
#include <stdio.h>
int main() {
    int i, j, k;
    int marks[2][2][3]={
       { {78,89,76},
        {86,76,90}},
       { {78,89,76},
        {86,76,90}}
};   
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
    printf("marks[%d][%d][%d]=%d\n",i,j,k, marks[i][j][k]);
    }}}
 return 0;   
}