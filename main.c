#include <stdio.h>

int main(void) {
  int i,c,d;
  float a,b,sum;
  printf("M e n u \n");
  printf("\t1. Add (+) \n");
  printf("\t2. Subtract (-) \n");
  printf("\t3. Multiply (*) \n");
  printf("\t4. Divide (/) \n");
  printf("\t5. Modulo (%) \n");
  printf("Enter Number 1 :");
  scanf("%f",&a);
  printf("Enter Number 2 :");
  scanf("%f",&b);
  printf("Select Choice :");
  scanf("%d",&i);
  switch(i){
    case 1 : 
    sum = a + b ;
    printf("Answer is %.2f + %.2f = %.2f",a,b,sum);
    break ;
    case 2 : 
    sum = a - b ;
    printf("Answer is %.2f - %.2f = %.2f",a,b,sum);
    break ;
    case 3 : 
    sum = a * b ;
    printf("Answer is %.2f * %.2f = %.2f",a,b,sum);
    break ;
    case 4 : 
    if(b != 0){
    sum = a / b ;
    printf("Answer is %.2f / %.2f = %.2f",a,b,sum);
    }else printf("Divide by Zero!!!");
    break ;
    case 5 : 
    if(b != 0){
    c = a;
    d = b;
    sum = c % d ;
    printf("Answer is %.2f (%) %.2f = %.2f",a,b,sum);
    }else printf("Divide by Zero!!!");
    break ;
  }
  return 0;
}