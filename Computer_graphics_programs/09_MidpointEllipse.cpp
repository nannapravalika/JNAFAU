#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    ellipse(250, 200, 0, 360, 100, 50);
    getch();
    closegraph();
    return 0;
}
