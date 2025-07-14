#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    setfillstyle(SOLID_FILL, GREEN);
    bar3d(100, 100, 200, 200, 10, 1);
    getch();
    closegraph();
    return 0;
}
