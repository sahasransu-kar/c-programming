// km to m ,feet ,inch ,cm
#include <stdio.h>

int main() {
    float km , m ,feet ,inch ,cm;
    printf("Enter the amount:");
    scanf("%f",&km);
    m = km/1000;
    feet = 3.28 * m;
    inch =  feet/12;
    cm = m/100;
    printf("%.4f\n",feet);
    
    return 0;
}
