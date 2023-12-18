#include "graphics.h"
#pragma comment(lib, "graphics.lib")

int main()
{
   int gd = DETECT, gm; 
   initgraph(&gd, &gm, "c:\\tc\\bgi");
   
   int x1 = 150, y1 = 200;
   int x2 = 400, y2 = 350;
   line(x1, y1, x2, y2);

   getch();
   closegraph();   

   return 0;
}
