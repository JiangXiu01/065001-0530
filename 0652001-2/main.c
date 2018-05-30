#include <stdio.h>
#include <stdlib.h>

void Bubble(int*const ,int const);

int main()
{
    int num[10]={7,6,5,4,3,2,1,9,8};
    int a=0;
        
    printf("排序前：");
    
     for(a = 0; a < 10; a++ ) {
        printf("%3d", num[a]);
    }
   
    Bubble(num,10);
   
    printf("\n\n排序後:");
    for(a = 0; a < 10; a++ ) {
        printf("%3d", num[a]);
    }    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}


void Bubble(int *const num,int const Time)
{
    int *Temp=0;
    int a=0, b=0,i=0;
    for(a = 0;a<Time; a++) {
        for(b=a;b<Time;b++) {
            if( num[b] > num[a] ) 
            {
                Temp = num[b];
                num[b] = num[a];
                num[a] = Temp;
            }
        }
    }
  return 0;
}
