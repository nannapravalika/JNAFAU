#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    line(100, 100, 300, 100);
    line(100, 120, 300, 150);
    line(100, 140, 300, 200);
    getch();
    closegraph();
    return 0;
}
