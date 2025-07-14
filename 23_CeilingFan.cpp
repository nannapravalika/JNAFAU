#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

void drawFan(int angle) {
    int x = 200, y = 200;
    setcolor(WHITE);
    for (int i = 0; i < 4; i++) {
        int a = angle + i * 90;
        int x1 = x + 50 * cos(a * 3.14 / 180);
        int y1 = y + 50 * sin(a * 3.14 / 180);
        line(x, y, x1, y1);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\Turboc3\BGI");
    int angle = 0;
    while (!kbhit()) {
        cleardevice();
        drawFan(angle);
        delay(100);
        angle = (angle + 10) % 360;
    }
    closegraph();
    return 0;
}
