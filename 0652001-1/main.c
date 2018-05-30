#include <stdio.h>
#include <stdlib.h>
void Bubble(const int* const ,int* ,const int const );

int main()
{
   int num[10]={10,8,6,4,2,1,9,7,5,3,1};
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

void Bubble(const int const *num,int *numbers,const int const Time)
{
    int Temp=0;
    int x=0, y=0;
    for( x = 0;x<Time; x++) {
        for( y=x;y< Time;y++) {
            if( numbers[y] > numbers[x] ) 
            {
                Temp = numbers[y];
                numbers[y] = numbers[x];
                numbers[x] = Temp;
            }
        }
    }
}
