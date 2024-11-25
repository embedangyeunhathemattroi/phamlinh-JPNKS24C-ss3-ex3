#include <stdio.h>
int main() {
   
    float PI = 3.14159; 
    float radian, duong_tron, dien_tich; 
      printf("Nhap ban kinh hinh tron (r): ");
      scanf("%f", &radian);
      duong_tron= 2 * PI * radian; 
      dien_tich= PI * radian * radian;  
    
    printf("Chu vi hinh tron: %.2f\n",duong_tron);
    printf("Dien tich hinh tron: %.2f\n", dien_tich);
       return 0;
}

