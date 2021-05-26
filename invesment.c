// to get the invesment 
#include <stdio.h>

int main() {
    int year , per;
    float amount , interest , value ;
    printf("Enter the amount ,interest , per :");
    scanf("%f %f %d",&amount ,&interest,&per);
    year = 1;
    while(year <= per)
    {
        value  = amount + (interest * amount)/100;
        printf("%2d Rs %10.2f \n",year,value);
        amount = value;
        year += 1;
    }
    
    return 0;
}
