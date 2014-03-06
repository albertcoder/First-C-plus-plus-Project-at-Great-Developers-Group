#include <iostream>
#include <stdlib.h>
#include "../include/dxf_2D.h"

using namespace std;

int main()
{
   int radius=10,start_pt=45,end_pt=90;
  /* Create DXF file */
  dxf file("flowers.dxf"); // name of output file
  
  /* write multiple layers */
  /*some layers may not have been used*/
  layer outer("myLayer", 1, 40, "CONTINUOUS", file);
  layer inner("yourLayer", 256, 40, "DASHED", file);
  layer outer6("Layer6", 6, 70, "CONTINUOUS", file);
  layer outer7("Layer7", 7, 70, "CONTINUOUS", file);
  layer outer8("Layer8", 8, 70, "CONTINUOUS", file);
  layer outer9("Layer9", 9, 70, "CONTINUOUS", file);
  layer outer10("Layer10", 10, 70, "CONTINUOUS", file);
  layer outer11("Layer11", 11, 70, "CONTINUOUS", file);
  layer outer12("Layer12", 12, 30, "CONTINUOUS", file);
  layer outer13("Layer13", 13, 70, "CONTINUOUS", file);
  layer outer14("Layer14", 14, 70, "CONTINUOUS", file);
  
  /* Draw entities */
  file.draw();
  point pt1(start_pt,end_pt),pt2(end_pt,start_pt),pt3(30,30);
  for(int i=1;i<45;i++)
 { 
   point pt1(start_pt+i,end_pt+i),pt2(end_pt+i,start_pt+i),pt3(30+i,30+i);
   circle box1(pt1, radius+i, "Layer3", file);
   circle box2(pt2, radius+i, "Layer10", file);
   circle box3(pt3, radius+i, "Layer4", file);
 
 }
  



  /* save file */
  file.save();
  return 0;
}
