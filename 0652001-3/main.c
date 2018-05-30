#include <stdio.h>
#include <stdlib.h>

void BubbleSort(const int* ,int *,int);

int main()
{
   int num[10]={7,6,5,4,3,2,1,9,8};
    int a=0;    
    
    printf("排序前:");
    
     for( a = 0; a < 10; a++ ) {
        printf("%3d", num[a]);
    }
   
    Bubble(num,num,10);
   
    printf("\n\n排序後:");
    for( a = 0; a < 10; a++ ) {
        printf("%3d", num[a]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}

void Bubble(const int *NumBers1,int *NumBers,int Times)
{
    int step=0;
    int a=0, b=0;
    for(a = 0;a<Times; a++) {
        for( b=a;b < Times;b++) {
            if( NumBers[b] > NumBers[a] ) 
            {
            step = NumBers[b];
                NumBers[b] = NumBers[a];
                NumBers[a] = step;
            }
        }
    }
}
