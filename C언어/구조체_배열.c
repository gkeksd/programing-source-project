#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point2D;

int main() {
    Point2D p[3]; //크기가 3인 구조체 배열
    /*또는 Point2D p[3] = { { .x = 10, .y = 20 }, { .x = 30, .y = 40 }, { .x = 50, .y = 60 } }
    로 정의와 동시에 초기화도 가능*/

    p[0].x = 10;
    p[0].y = 20;
    p[1].x = 30;
    p[1].y = 40;
    p[2].x = 50;
    p[2].y = 60;

    printf("%d %d\n", p[0].x, p[0].y);
    printf("%d %d\n", p[1].x, p[1].y);
    printf("%d %d\n", p[2].x, p[2].y);

    return 0;
}
