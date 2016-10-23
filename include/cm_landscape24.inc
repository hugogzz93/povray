// Persistence Of Vision Ray Tracer Include File
// ---------------------------------------------
// File: @(#)cm_landscape24.inc
// Description: color map generated by Image_ColorMap 0.1 alpha
// Creation Date: $ Sun Jun 20 00:47:59 CEST 2004 $
// Last modified: $ Sun Jun 20 00:47:59 CEST 2004 $
// Author: Image_ColorMap 0.1 alpha
//

#macro ColorCorrect(Color,Gamma, ColDiff)
  #local Color_Int=Color+<0,0,0>;
  #local ColDiff_Int=ColDiff+<0,0,0>;
  rgb <pow(Color_Int.red+ColDiff_Int.red,Gamma),pow(Color_Int.green+ColDiff_Int.green,Gamma),pow(Color_Int.blue+ColDiff_Int.blue,Gamma)>
#end

#ifndef (Gamma)
  #local Gamma=1.0;
#end

#ifndef (Color_Diff)
  #local Color_Diff=<0,0,0>;
#end


// ----------------------------------------
//  color_map from image: landscape24.jpeg
//            coordinates: 174,171->350,206
// ----------------------------------------
#declare CM_landscape24_1=
  color_map {
    [0.0000 ColorCorrect(<0.6706, 0.3804, 0.2824>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.9512, 0.5888, 0.4280>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.8459, 0.5102, 0.3573>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.7087, 0.4619, 0.3860>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.7020, 0.4455, 0.3337>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.4598, 0.2750, 0.2275>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.3943, 0.2339, 0.1914>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.7052, 0.4885, 0.4380>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.5459, 0.3067, 0.2188>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.7524, 0.5318, 0.4547>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.6333, 0.3784, 0.3186>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.4948, 0.3090, 0.2701>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.4561, 0.3110, 0.2643>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.4154, 0.2501, 0.2056>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.3776, 0.2227, 0.1814>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.3863, 0.2534, 0.2147>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.5208, 0.3435, 0.3020>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.4840, 0.3034, 0.2457>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.4480, 0.2763, 0.2567>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.4924, 0.3024, 0.2272>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.5980, 0.3353, 0.2118>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.7359, 0.4295, 0.3360>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.8675, 0.5525, 0.4024>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.9493, 0.6115, 0.4640>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.6933, 0.3820, 0.2722>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.8221, 0.5098, 0.4044>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.8288, 0.5292, 0.4312>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.8331, 0.5312, 0.3438>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.6380, 0.4290, 0.3306>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.8373, 0.5228, 0.4215>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.6990, 0.4029, 0.3049>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.6118, 0.3173, 0.1951>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.6580, 0.3443, 0.2086>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.7528, 0.4289, 0.2781>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.7475, 0.4159, 0.2657>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.6456, 0.3387, 0.2186>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.6486, 0.3651, 0.2549>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.8553, 0.4860, 0.3586>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.8216, 0.4965, 0.3747>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.6374, 0.3521, 0.2703>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.7647, 0.4706, 0.3961>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape24.jpeg
//            coordinates: 43,49->7,269
// ----------------------------------------
#declare CM_landscape24_2=
  color_map {
    [0.0000 ColorCorrect(<0.6980, 0.3765, 0.2196>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.8935, 0.5629, 0.3929>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.8204, 0.4973, 0.3529>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.7065, 0.4265, 0.2755>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.7835, 0.4776, 0.3318>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.6245, 0.3598, 0.2520>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.5804, 0.3200, 0.1945>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.6069, 0.3667, 0.2239>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.5004, 0.3647, 0.2933>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.3400, 0.1973, 0.1010>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.1608, 0.0824, 0.0471>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.3755, 0.2439, 0.1706>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.3514, 0.2251, 0.1773>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.2896, 0.1769, 0.1188>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.2839, 0.1718, 0.1404>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.2902, 0.2049, 0.2029>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.2173, 0.1522, 0.1388>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.3788, 0.2275, 0.1759>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.3451, 0.2275, 0.1961>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.3704, 0.1978, 0.1253>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.5451, 0.3529, 0.2863>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.5951, 0.3506, 0.2325>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.8620, 0.5906, 0.4886>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.8378, 0.5212, 0.3780>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.6259, 0.3671, 0.2761>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.2539, 0.1578, 0.1000>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.4565, 0.2690, 0.1851>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.3341, 0.1816, 0.1175>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.5090, 0.2541, 0.1467>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.4580, 0.2739, 0.1831>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.5882, 0.4235, 0.3255>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.5367, 0.3475, 0.2900>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.3349, 0.1906, 0.1294>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.3094, 0.1776, 0.1239>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.4988, 0.2675, 0.1914>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.7422, 0.5029, 0.3412>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.6212, 0.4055, 0.3169>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.5720, 0.3641, 0.2963>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.8008, 0.6063, 0.5169>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.7363, 0.4820, 0.3445>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.5216, 0.3255, 0.2196>, Gamma, Color_Diff)]
  }