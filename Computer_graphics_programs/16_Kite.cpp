#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int pts[] = {200, 100, 250, 150, 200, 200, 150, 150, 200, 100};
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    drawpoly(5, pts);
    getch();
    closegraph();
    return 0;
}
