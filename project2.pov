#include "functions.inc"
#include "cm_landscape02.inc"
#include "stars.inc"

// Series de montañas basada en fractales para dar simular algo similar a una cordillera
#declare fn_Form=
  function {
    f_ridged_mf(x/3.762, y/3.762, 79.248, 0.1, 3.1, 7, 0.7, 0.8, 2)
  }

#declare fn_Terrain=
  function {
    z
    - fn_Form(x, y, 0)*2.039
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

// Pigmentación tipo montaña usando colores encontrados en una librería basados en fotos de la naturaleza
// para usarse con pigment maps y dar cambios de colores no tan drásticos en la textura
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


// Textura el terreno 
#declare LOTW_Tex_Terrain=
  texture {
    pigment { Pigm_Terrain }
    finish {
      ambient 0
      diffuse 0.65
    }
  }

// Camara viendo hacia el origen desde un poco arriba para que se alcancen a ver algunas sombras
camera {
  location <0, 8, 0.5>
  sky z
  look_at <0.000, 5.5, 1.450>
  angle 45
}

// Simulación de luz de la luna
light_source {
 <0.920, 0.331, 0.209>*9500
 color rgb <.8, .8, .8>
} 

// Cielo estrellado
sphere{ <0,0,0>, 1
        texture{ Starfield1 scale 3 rotate 90
               }
        scale 10000
      }

// Creación de la montaña
object {
  LOTW_Terrain
  texture {
    LOTW_Tex_Terrain
  }
}