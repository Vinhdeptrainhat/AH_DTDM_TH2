//Bài 2: Viết chương trình đếm và in ra các số chính phương nhỏ hơn n với n là số nguyên dương nhập từ bàn phím. 
// Yêu cầu viết hàm kiểm tra số chính phương và hàm đếm số chính phương. Biết rằng số chính phương là số khi lấy căn bặc 2 có kết quả là nguyên.
//Ví dụ : với n = 50, xuất ra màn hình 7 số chính phương là : 49, 36, 25, 16, 9, 4, 1.
#include <stdio.h>
#include <math.h>


int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf_s("%d", &n);

    printf("Cac so chinh phuong nho hon %d la:\n", n);
    
    for (int i = 1; i < n; i++) {
        int a= sqrt(i);
        if(a*a==i)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
