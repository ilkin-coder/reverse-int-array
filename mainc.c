/*#include<stdio.h>
int main()
{
    int ala [3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&ala[i][j]);
        }
    }
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", ala[i][j]);                                                                 
        }
        printf("\n"); 
    }
    return 0;
}
*/
#include <stdio.h>
void yaziyidondur(int num){
    printf("Error %d",num);
    }
int main()
{   
    int sayi;
    printf ("pls enter the number:");
    scanf("%d", &sayi);
    if(sayi<0){
    yaziyidondur(404);
    }
    else{
        printf("Congrutlation");
    }
    return 0;
}
