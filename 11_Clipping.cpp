#include <graphics.h>
#include <conio.h>

int xmin = 100, ymin = 100, xmax = 250, ymax = 250;

void clipLine(int x1, int y1, int x2, int y2) {
    rectangle(xmin, ymin, xmax, ymax);
    line(x1, y1, x2, y2);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    clipLine(50, 50, 300, 300);
    getch();
    closegraph();
    return 0;
}
