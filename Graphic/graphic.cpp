#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
int main()
{
  int driver=0, mode = 0, maloi;
  initgraph(&driver,&mode,(char*)"");
  if ( (maloi=graphresult()) !=0 )
  {
    printf("khong the khoi dong do hoa \n");
    printf("ma loi : %d \nTran Van Nhuom %s ",maloi, grapherrormsg(maloi) );
    getch();
    exit(1);
}
setcolor(BACKGROUND_GREEN); // đặt màu cho nét vẽ là màu 
setcolor(BLACK);
arc(320,240,45,135,100); //vẽ một cung tròn với góc từ 450 đến 1350
getch(); // tạm dừng màn hình
cleardevice(); // xoá màn hình đồ hoạ
ellipse(320,240,0,360,150,110); /* vẽ một cung elip với góc vẽ từ 00 đến 3600 (vẽ một elip) */
getch();
cleardevice();
circle(320,240,160); // vẽ đường tròn
getch();
cleardevice();
rectangle(140,60,500,420); // vẽ đường chữ nhật
getch();
cleardevice();
setfillstyle(1,YELLOW); // đặt mẫu tô và màu tô cho những hàm có phần tô miền
pieslice(320,240,45,300,200); /*vẽ và tô màu một hình quạt với màu và mẫu tô được xác định bởi setfillstyle */
getch();
cleardevice();
for (int i=0; i<12; i++) // tô miền đóng với 12 mẫu tô khác nhau
{
   setfillstyle(i,getmaxcolor()); // kiểu tô dược thay lần lượt giá trị từ 0 -> 11
   sector(320,240,45,250,300,200); // vẽ và tô màu một mảnh elip
   getch();
}
cleardevice();
setfillstyle(1,LIGHTMAGENTA);
bar(20,260,300,460); // vẽ và tô màu một hình chữ nhật
bar3d(340,120,520,360,50,1);// vẽ và tô màu một hình hộp
getch();
closegraph();
}