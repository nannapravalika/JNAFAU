#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawCurve() {
    for (float t = 0; t < 6.28; t += 0.01) {
        int x = 200 + 100 * cos(t);
        int y = 200 + 50 * sin(t);
        putpixel(x, y, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    drawCurve();
    getch();
    closegraph();
    return 0;
}
