
global_settings {
  assumed_gamma 1.0
  max_trace_level 15
  radiosity {
    pretrace_start 0.08
    pretrace_end   0.01
    count 20
    nearest_count 3
    error_bound 3.0
    recursion_limit 1
    low_error_factor 1
    gray_threshold 0.0
    minimum_reuse 0.015
    brightness 0.75
    always_sample off
  }
}

// --- part written by terrain.inc ---


#include "functions.inc"

#declare fn_Hill_Spline=
function {
  spline {
    cubic_spline
    -100, <-100, 0.0>,
    -2.3, <-1.6, 0.15>,
    -1.0, <-1.1, 0.8>,
       0, < 0.0, 1.0>,
     1.0, < 1.1, 0.8>,
     2.3, < 1.6, 0.15>,
     100, < 100, 0.0>
  }
}

#declare Bkg_Dist=663.82;

#local fn_Form=
  function {
    f_ridged_mf(x/3.762, y/3.762, 79.248, 0.1, 3.1, 7, 0.7, 0.8, 2)
  }

#local fn_Base=
  function {
    pattern {
      wrinkles
      rotate 88.09
      scale 2.176
    }
  }

#local fn_Struct=
  function {
    pattern {
      agate
      scale <0.499, 0.499, 0.250>
      warp { turbulence 0.5 omega 0.55 octaves 7 }
      scale <1,1,0.4>
      rotate <30.000, 29.670, 296.172>
    }
  }

#declare LOTW_Terrain_Struct_Function=
  function {
    fn_Struct(x, y, z)
  }

#local fn_Terrain=
  function {
    z
    - fn_Form(x, y, 0)*2.039
    - fn_Base(x, y, z)*0.372
    - fn_Struct(x, y, z)*0.025
  }

#declare LOTW_Terrain_Trace=
isosurface {
  function { fn_Terrain(x, y, z) }
  contained_by {
    box { <-350, -20, -0.1>, <350, 750, 3.5> }
  }
  accuracy 0.0005
  max_gradient 50
}

#declare LOTW_Terrain=
isosurface {
  function { fn_Terrain(x, y, z) }
  contained_by {
    box { <-350, -20, -0.1>, <350, 750, 3.5> }
  }
  accuracy 0.0005
  max_gradient 5
}

#declare LOTW_Terrain_Grass=object { LOTW_Terrain_Trace }
#declare Gamma=2.2;
#include "cm_landscape02.inc"
#declare Pigm_Terrain=
  pigment {
    slope z
    pigment_map {
      [0.125
        granite
        color_map { CM_landscape02_4 }
        warp { turbulence 0.6 omega 0.6 }
        translate 0.000
        scale 0.3
      ]
      [0.375
        granite
        color_map { CM_landscape02_3 }
        warp { turbulence 0.6 omega 0.6 }
        translate 5.000
        scale 0.3
      ]
      [0.625
        granite
        color_map { CM_landscape02_2 }
        warp { turbulence 0.6 omega 0.6 }
        translate 10.000
        scale 0.3
      ]
      [0.875
        granite
        color_map { CM_landscape02_1 }
        warp { turbulence 0.6 omega 0.6 }
        translate 15.000
        scale 0.3
      ]
    }
  }


#declare LOTW_Tex_Terrain_Dry=
  texture {
    pigment { Pigm_Terrain }
    finish {
      ambient 0
      diffuse 0.65
    }
  }

#declare LOTW_Tex_Terrain_Wet=
  texture {
    pigment { Pigm_Terrain }
    finish {
      ambient 0
      diffuse 0.2
    }
  }

#declare LOTW_Tex_Terrain=
  texture {
    function {
      (z>0.81)
    }
    texture_map {
      [0.5 LOTW_Tex_Terrain_Wet]
      [0.5 LOTW_Tex_Terrain_Dry]
    }
  }



// --- part written by camera.inc ---

#declare Cam_Loc=<0.200, 5.000, 1.450>;
#declare Cam_Look=<0.000, 0.000, 1.450>;
#declare Cam_Angle=45.000;

camera {
  location  Cam_Loc
  direction y
  sky       z
  up        z
  right     (image_width/image_height)*x
  look_at   Cam_Look
  angle     Cam_Angle
}


// --- part written by skies.inc ---

// ----------------------------------------
//  >>>> skysphere sky <<<<
// ----------------------------------------

#declare fn_horizon=function { max(z, 0) }
#declare fn_sun=
  function { 
    pattern {
      spherical
      scale 3
      translate -y
      rotate -12.04*x
      rotate -250.24*z
    }
  }

sky_sphere {
  pigment {
    function { pow(fn_horizon(x,y,z)*(1-fn_sun(x,y,z)), 0.518) }
    color_map {
      [0.000 color rgb <1.000, 1.000, 1.000>]
      [0.366 color rgb <0.200, 0.300, 0.800>]	
    }
  }
}



// --- part written by lighting.inc ---

light_source {
 <0.920, 0.331, 0.209>*9500
 color rgb <5.625, 5.713, 5.979>
}

sphere {
  0, 1 
  hollow on
  no_shadow
  pigment { rgbt 1 }
  interior {
    media {
      emission 1/100
      density {
        spherical
        poly_wave 4
        density_map {
          [0.0 rgb 0]
          [0.5 color rgb <1.688, 1.714, 1.794>]
          [1.0 color rgb <5.625, 5.713, 5.979>]
        }
      }
      samples 1,1 intervals 1 confidence .1
      method 3
    }
  }
  scale 240
  translate <0.920, 0.331, 0.209>*9500
}


object {
  LOTW_Terrain
  texture {
    LOTW_Tex_Terrain
  }
}