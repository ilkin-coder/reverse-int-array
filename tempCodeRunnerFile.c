#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n,element,arrLength=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        bool check=true;
        scanf("%d",&element);
        for(int j=0;j<arrLength;j++){
            if(element==arr[j]){
                check=false;
                break;
            }
        }
        if(check){
            arr[arrLength]=element;
            arrLength+=1;
        }
    }
    for(int t=0;t<arrLength;t++){
        printf("%d ",arr[t]);
    }
}