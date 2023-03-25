
#include <stdio.h>

int main()
{
    double w,h,area,perimeter;
    
    
    printf("밑변을 입력하세요:");
    scanf("%lf",&w);
    printf("높이를 입력하세요:");
    scanf("%lf",&h);
    
    area = w*h;
    perimeter =2*(w+h); /* 입력받기전에 선언하면 쓰레기값이 출력됨 */
    
    printf("사각형의 넓이:%lf\n",area);
    printf("사각형의 둘레:%lf\n",perimeter);
    return 0;
}

