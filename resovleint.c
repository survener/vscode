#include <stdio.h>

int main(){

// 70000
// 70000/10000 = 7
// 70000%10000 = 0
// 10000/10 = 1000
// 0%1000 = 0
// 0/1000 = 0
// 1000/10 = 100

// 1325
// 1325/1000 = 1
// 1325%1000 = 325
// 1000/10 = 100
// 325/100 = 3
// 325%100 = 25
// 100/10 = 10
// 25/10 = 2
// 25%10 = 5
// 10/10 = 1
// 5/1 = 5
// 5%1 = 5
// 1/10 = 0
  
    
//第一次从右向左输出数字并记录
int n;
scanf("%d", &n);

int i;
int x=0;
while ( n>0 )
{
    i = n%10;
    n /= 10;
    x = x*10+i;
}

//第二次从右向左依次输出数位
//    scanf("%d", &x);

    int d;
    do{ d = x%10;
        printf("%d", d);
        x /= 10;
        if( x>0 ){
            printf(" ");
            }    
    } while ( x>0 ); 
   
  // printf("\n");
    return 0;    
}
