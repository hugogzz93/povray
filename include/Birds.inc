//  Birds.inc    December 1998  © Neil Alexander
// Bird used in cosms.pov animation




// ---------------- Wings ------------------------

#declare Wing = blob {
  threshold 0.56
  cylinder {<-1,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.375>}

  cylinder {<-0.875,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.375>
    rotate y*-4
    translate -z*0.375}

  cylinder {<-0.75,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.375>
    rotate y*-8
    translate -z*0.75}

  cylinder {<-0.625,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.375>
    rotate y*-12
    translate -z*1.125}

  texture {
    pigment { bozo
      color_map {
        [0 rgb <0.7,0.53,0.58>]
        [0.5 rgb <0.3,0.4,0.4>]
        [1 rgb <1,0.87,0.6>]
        }
      turbulence 0.3
      }
    scale <1,0.1,0.1>
    rotate y*-30
    }
  }  // end Wing

#declare Wingtip = blob {
  threshold 0.56
  cylinder {<-0.5,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.375>}

  cylinder {<-0.375,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.375>
    rotate y*-15
    translate <-0.125,0,-0.375>}

  cylinder {<-0.375,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.312>
    rotate y*-30
    translate <-0.25,0,-0.75>}

  cylinder {<-0.375,0,0>,<0,0,0>,1,1
    scale <1,0.188,0.25>
    rotate y*-50
    translate <-0.375,0,-1.125>}

  texture {
    pigment { bozo
      color_map {
        [0 rgb <0.7,0.63,0.58>]
        [0.5 rgb <0.4,0.4,0.4>]
        [1 rgb <1,0.8,0.6>]
        }
      turbulence 0.3
      }
    scale <1,0.1,0.1>
    rotate y*-30
    }
  }  // end Wingtip


#macro Bird (F)

#declare Flap = sin(F*2*pi);
#declare Tipflap = sin(F*2*pi-pi/2); // 90° lag

union {
  union {  // right wing
    object { Wingtip
      rotate <-15+35*Tipflap,-24,0>
      translate -z*1.25
      }
    object { Wing }
    rotate <60*Flap,-7,10>
    translate <0.5,0.438,-0.625>
    }
  union {  // left wing
    object { Wingtip
      rotate <15-35*Tipflap,-24,0>
      translate -z*1.25
      }
    object { Wing }
    rotate <180-60*Flap,7,10>
    translate <0.5,0.438,0.625>
    }
  sphere {0,1 // right eye
    scale <0.094,0.094,0.04>
    rotate x*10
    translate <1.875,0.812,-0.344>
    texture {
      pigment { color rgb 0.1}
      finish { phong 1 phong_size 100 }
      }
    }
 sphere {0,1 // left eye
    scale <0.094,0.094,0.04>
    rotate x*-10
    translate <1.875,0.812,0.344>
    texture {
      pigment { color rgb 0.1}
      finish { phong 1 phong_size 100 }
      }
    }
  blob {
    threshold 0.56
    sphere {<0,0,0>,1,1 // body
      scale <3,1.5,1.5>
      rotate z*10
      }
    sphere {<0,0,0>,1,1 // tail
      scale <1.5,0.25,0.75>
      rotate z*15
      translate <-1.75,0,0>
      }
    sphere {<0,0,0>,1,1 // head
      scale <1,0.625,0.625>
      rotate <0,0,-15>
      translate <1.75,0.75,0>
      }
    cylinder {<0,0,0>,<0.25,0,0>,1,1 // beak
      scale <1,0.25,0.125>
      rotate <0,0,-15>
      translate <2,0.625,0>
      texture { pigment { color rgb <1,0.8,0>}}
      }
    }    // end blob
  texture {
    pigment { bozo
      color_map {
        [0 rgb <0.7,0.63,0.58>]
        [0.5 rgb <0.4,0.4,0.4>]
        [1 rgb <1,0.8,0.6>]
        }
      turbulence 0.3
      }
    scale <2,0.1,0.1>
    rotate z*10
    }
  translate -y*Flap*0.25
  }   // end union
#end  // end Bird

object { Bird (clock)
  rotate y*55
  }
