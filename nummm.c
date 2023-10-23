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