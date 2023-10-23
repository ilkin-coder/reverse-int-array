#include <stdio.h>
void reverse(int arr[], int n,int reversearr[]){
    for(int i=0; i<n; i++){
        reversearr[i]=arr[n-1-i];
    }
}

int main() {
    int n;
    printf("nece elemanli olsun ?\n");
    scanf("%d",&n);
    int reversearr[n];

    int a[n];
    printf("arrayi olustur;");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    reverse(a,n,reversearr);

    for(int i=0; i<n; i++){
        printf("%d ", reversearr[i]);
    }
    return 0;
}

