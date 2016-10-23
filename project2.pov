global_settings{ assumed_gamma 1.0 } 
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//--------------------------------------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "glass.inc"
#include "metals.inc"
#include "golds.inc"
#include "stones.inc"
#include "woods.inc"
#include "shapes.inc"
#include "shapes2.inc"
#include "functions.inc"
#include "math.inc"
#include "transforms.inc"
#include "realskies.inc"

// ###################################
// Luz
// ###################################
#declare Light_Number = 1 ;
#switch ( Light_Number )
#case (1) // Dia
  #declare Light_Pos = <0.920, 0.331, 0.209>*9500       ;
  #declare Light_Color = color rgb <5.625, 5.713, 5.979>;
  sky_sphere {
    sky_realsky_01
  }
  
#break
#else // Noche
  #declare Light_Pos = <0.920, 0.331, 0.209>*9500 ;
  #declare Light_Color = rgb <5.625, 5.713, 5.979>;
// Cielo estrellado
sphere{ <0,0,0>, 1
        texture{ Starfield1 scale 3 rotate 90
               }
        scale 10000
      }
#break
#end 

light_source {
 Light_Pos
 Light_Color
}

// ###################################
// Camara
// ###################################
#declare Camera_Position = < 0,3, 4> ;  // diagonal view
#declare Camera_Look_At  = < 0, 3,0> ;
#declare Camera_Angle    =  42 ;


camera{
  location Camera_Position
  right    x*image_width/image_height
  angle    Camera_Angle
  look_at  Camera_Look_At
}




// ----------------------------------
#declare Pigment_1 = 
pigment{ crackle turbulence 0.35 scale 0.45 
         color_map{
          [0.00 color rgb<1,1,1>*0]
          [0.08 color rgb<1,1,1>*0]
          [0.40 color rgb<1,0.55,0>]
          [1.00 color rgb<1,1,0.8>]
         } // end of color_map
} // end of pigment -----------------

#declare fn_Pigment_1 = 
function {pigment{ Pigment_1} }


isosurface { 
  function{
    f_rounded_box(x,y,z,
                  0.15, // radius of curvature
                  10, 1.0, 10  // scale<x,y,z>
                 ) // 
     - fn_Pigment_1(x,y,z).gray*0.25
  } // end function
  threshold 0
  contained_by {box {<-10,-2,-10>,<10,2,10>}}
  max_gradient 5
  accuracy 0.0001
  //evaluate 1,20,0.99

  texture{ pigment{ Pigment_1 }
           normal { crackle 0.5 scale 0.045}
           finish { phong 1}
       } // end texture 
  translate < 1,0,2>
}

plane {
    y,0
    texture { 
        Water
        scale 10
    }
    rotate <10,0,0>
}    

