#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void BubbleSort(int* ,int* ,int);

int main()
{
   int NumBer[10]={5,3,4,2,1,6,8,9,10,7};
    int a=0;
    
    
    printf("排序前:");
    
     for( a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
   
    BubbleSort(NumBer, NumBer,10);
   
    printf("\n\n排序後:");
    for( a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}

void BubbleSort(int *NumBers,int *Time,int test)
{
    int step=0;
    int a=0, b=0;
    for(a = 0;a<test; a++) {
        for( b=a;b < test;b++) {
            if( NumBers[b] > NumBers[a] ) 
            {
            step = NumBers[b];
                NumBers[b] = NumBers[a];
                NumBers[a] = step;
            }
        }
    }
}
