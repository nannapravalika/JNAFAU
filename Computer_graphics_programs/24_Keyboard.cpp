#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\Turboc3\BGI");
    for (int i = 0; i < 10; i++) {
        rectangle(50 + i * 30, 100, 80 + i * 30, 130);
    }
    for (int i = 0; i < 9; i++) {
        rectangle(65 + i * 30, 140, 95 + i * 30, 170);
    }
    getch();
    closegraph();
    return 0;
}
