global_settings{ assumed_gamma 1.0 } 
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//--------------------------------------------------------------------------

#include "./include/colors.inc"
#include "./include/textures.inc"
#include "./include/glass.inc"
#include "./include/metals.inc"
#include "./include/golds.inc"
#include "./include/stones.inc"
#include "./include/woods.inc"
#include "./include/shapes.inc"
#include "./include/shapes2.inc"
#include "./include/functions.inc"
#include "./include/math.inc"
#include "./include/transforms.inc"
#include "./include/realskies.inc"

//palmera
#include "./include/palm.inc"


// ###################################
// Light
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
// Camera
// ###################################
#declare Camera_Position = < 0,3, 4> ;  // diagonal view
#declare Camera_Look_At  = < 0, 3,0> ;
#declare Camera_Angle    =  42 ;


camera{
  location Camera_Position
  angle    Camera_Angle
  look_at  Camera_Look_At
}



// ###################################
// Ocean
// ###################################
plane {
    y,0
    texture { 
        Water
        scale 10
    }
}    

// ###################################
// Sand
// ###################################
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

// ###################################
// Beachfront
// ###################################

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
       }
  translate < 1,0,-6>
  rotate <-5,0,0>
}





// ###################################
// Teth
// ###################################
 #declare teth1    = <1.00, 0.00>;
  #declare teth2 = <1.75, 1.00>;
  #declare teth3 = <2.50, 2.00>;
  #declare teth4  = <2.00, 3.00>;
  #declare teth5   = <1.50, 4.00>;

  #declare teth = lathe {
    linear_spline
    5,
    teth1,
    teth2,
    teth3,
    teth4,
    teth5
    pigment { White }
    finish { ambient 1 }
  }


// ###################################
// Far beach
// ###################################
  #declare HEIGHT = palm_13_height * 1.3;
  #declare WIDTH = HEIGHT*400/600;

  #declare Red_Point    = <2.5, 7.0>;
  #declare Orange_Point = <2.0,6.0>;
  #declare Green_Point  = <1.2,4.6>;
  #declare Blue_Point   = <1.1,3.2>;
  #declare Green_Point2 = <0.9,1.8>;
  #declare Orange_Point2= <0.3,0.6>;
  #declare Red_Point2   = <0,0>;

  #declare far_beach_front = object {
        lathe {
          bezier_spline
          8,
          Red_Point, Orange_Point, Green_Point, Blue_Point
          Blue_Point, Green_Point2, Orange_Point2, Red_Point2
          texture{ Sandalwood }
          finish { ambient 1 }
        }
      }


  #declare palm = union {
      object { 
          palm_13_stems
          pigment { color rgb <144/255, 104/255, 78/255> }
      }
      object { 
          palm_13_leaves
          texture { 
              pigment { color rgb <0, 1, 0> }
              finish { ambient 0.15 diffuse 0.8 }
          }
      } 
    }

  #declare tree_line1 = union {
    #local i = 0;
    #while (i < 4)
        object { 
            palm
            rotate 45*y*i
            translate <WIDTH*0.3*i,0,WIDTH>
            pigment {color rgb 0.9} 
        }
        #local i = i + 1;
    #end 
  }

  #declare tree_line2 = union {
    #local i = 0;
    #while (i < 4)
        object { 
            palm
            rotate -25*y*i
            translate <WIDTH*0.5*i,0,WIDTH>
        }
        #local i = i + 1;
    #end 
  }

  #declare tree_line3 = union {
    #local i = 0;
    #while (i < 4)
        object { 
            palm
            rotate -55*y*i
            translate <WIDTH*0.15*i,0,WIDTH>
        }
        #local i = i + 1;
    #end 
  }

  #declare palms = object {
    union {
      object {
        tree_line1
      }
      object {
        tree_line2
        translate <3,0,-2>
      }
      object {
        tree_line3
        translate <5,0,-6>
      }
    }
    scale <0,0.65,0>
  }



  object {
    union {
        object {far_beach_front
          scale <0.5,0,0>
        }
        object {
          object {
            palms
            rotate <0,0,95>
            scale 0.25
            translate <0,0,-2>
          }
          translate <0,2.5,0>
        }
      }
    rotate <0,0,-90>
    scale 3
    translate <20,1,-100>
  }

