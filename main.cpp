#include "ccc_win.h"
#include<string>

int ccc_win_main()
{  
   const double ORIGINX = 0;
   const double ORIGINY = 0;
   const double XWIDTH = 5500;
   const double YWIDTH = 5;
   cwin.coord(ORIGINX,ORIGINY,XWIDTH,YWIDTH);
   //string bridge_name = cwin.get_string("Enter the bridge name:");
  // int bridge_length = cwin.get_int("Enter the bridge length:");
   string bridge_name = "San Francisco";
   int bridge_length = 4200;
   Point p1TL(ORIGINX+100,ORIGINY+0.5);
   Point p1TR(ORIGINX+bridge_length,ORIGINY+0.5);
   Point p1BL(ORIGINX+100,ORIGINY+1.0);
   Point p1BR(ORIGINX+bridge_length,ORIGINY+1.0);
   cwin << p1TL;
   cwin << p1TR;
   cwin << p1BL;
   cwin << p1BR;
   cwin << Message(Point(ORIGINX+100,ORIGINY+0.75),bridge_name);
   //bridge_name = cwin.get_string("Enter the bridge name:");
   //bridge_length = cwin.get_int("Enter the bridge length:");
   p1TL.move(0,3.0);
   cwin << p1TL;
   bridge_name = "Brooklyn";
   bridge_length = 1595;
   Point p2TL(ORIGINX+100,ORIGINY+1.5);
   Point p2TR(ORIGINX+bridge_length,ORIGINY+1.5);
   Point p2BL(ORIGINX+100,ORIGINY+2.0);
   Point p2BR(ORIGINX+bridge_length,ORIGINY+2.0);
   cwin << p2TL;
   cwin << p2TR;
   cwin << p2BL;
   cwin << p2BR;

   return 0;
}
