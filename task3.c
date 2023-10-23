#include<stdio.h>
int main(){
	float avg,sum;
	float score[]={78.9,65.3,98.0};
	int size,n;
	size=sizeof(score)/sizeof(score[0]);
	for (n=0;n<size; n++){
		sum+=score[n];
		}
	avg=sum/size;
	printf ("Your average score is %.2f", avg);
	}