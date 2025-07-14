#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    setfillstyle(SOLID_FILL, RED);
    bar(100, 100, 300, 130);
    setfillstyle(SOLID_FILL, WHITE);
    bar(100, 130, 300, 160);
    setfillstyle(SOLID_FILL, GREEN);
    bar(100, 160, 300, 190);
    circle(200, 145, 10);
    getch();
    closegraph();
    return 0;
}
