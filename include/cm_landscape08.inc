// Persistence Of Vision Ray Tracer Include File
// ---------------------------------------------
// File: @(#)cm_landscape08.inc
// Description: color map generated by Image_ColorMap 0.1 alpha
// Creation Date: $ Sun Jun 20 00:33:19 CEST 2004 $
// Last modified: $ Sun Jun 20 00:33:19 CEST 2004 $
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
//  color_map from image: landscape08.jpg
//            coordinates: 201,105->376,186
// ----------------------------------------
#declare CM_landscape08_1=
  color_map {
    [0.0000 ColorCorrect(<0.2431, 0.0941, 0.0196>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.3164, 0.1689, 0.0912>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.1989, 0.1045, 0.0306>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.2396, 0.1245, 0.0628>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.1388, 0.0447, 0.0139>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.2051, 0.0925, 0.0333>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.2878, 0.1419, 0.0878>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.3668, 0.1748, 0.0468>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.4431, 0.2722, 0.1702>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.2201, 0.0994, 0.0094>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.2811, 0.1363, 0.0591>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.3764, 0.1989, 0.0989>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.4514, 0.2408, 0.1029>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.2514, 0.1045, 0.0692>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.4079, 0.2451, 0.1563>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.3910, 0.1733, 0.0830>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.3725, 0.1882, 0.0784>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.4231, 0.2044, 0.0765>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.2593, 0.1527, 0.0801>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.3735, 0.2164, 0.1081>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.3431, 0.1529, 0.0627>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.3202, 0.1370, 0.0527>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.4308, 0.2402, 0.1188>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.4483, 0.2645, 0.1579>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.3208, 0.1835, 0.0706>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.4783, 0.2371, 0.1170>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.4070, 0.1794, 0.0775>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.3759, 0.1628, 0.0545>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.4098, 0.1365, 0.0186>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.3560, 0.1446, 0.0324>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.5745, 0.3368, 0.2032>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.3013, 0.1583, 0.0671>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.2110, 0.0824, 0.0212>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.3182, 0.2138, 0.1439>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.2862, 0.1268, 0.0442>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.4719, 0.3027, 0.1971>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.3667, 0.2012, 0.1024>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.3507, 0.2082, 0.1150>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.3237, 0.1825, 0.0886>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.3104, 0.1859, 0.1139>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.3569, 0.2235, 0.1765>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape08.jpg
//            coordinates: 13,509->180,347
// ----------------------------------------
#declare CM_landscape08_2=
  color_map {
    [0.0000 ColorCorrect(<0.2745, 0.1020, 0.0039>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.4056, 0.1967, 0.0946>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.2363, 0.0938, 0.0223>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.2275, 0.1350, 0.0705>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.2645, 0.1085, 0.0518>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.2477, 0.1428, 0.0972>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.6515, 0.4263, 0.3563>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.2135, 0.0719, 0.0105>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.1746, 0.0751, 0.0056>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.2357, 0.1330, 0.0960>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.1946, 0.0730, 0.0348>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.2395, 0.1369, 0.0839>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.1907, 0.0905, 0.0479>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.1814, 0.0873, 0.0580>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.2268, 0.1315, 0.0888>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.2213, 0.0776, 0.0276>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.3118, 0.1672, 0.0544>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.2093, 0.1171, 0.0536>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.2821, 0.1718, 0.1165>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.2597, 0.1264, 0.0868>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.1863, 0.0863, 0.0471>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.2359, 0.1459, 0.0910>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.1760, 0.0879, 0.0386>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.1159, 0.0187, 0.0023>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.2339, 0.1089, 0.0646>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.3440, 0.1776, 0.1056>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.2331, 0.1182, 0.0513>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.2229, 0.0784, 0.0369>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.1725, 0.0530, 0.0355>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.2896, 0.1236, 0.0788>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.2941, 0.1461, 0.0412>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.2990, 0.1311, 0.0424>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.3155, 0.1812, 0.0808>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.2212, 0.0587, 0.0241>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.3694, 0.2095, 0.1222>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.4407, 0.2697, 0.1806>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.1936, 0.0426, 0.0084>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.3960, 0.2657, 0.1521>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.2931, 0.1138, 0.0320>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.3474, 0.1763, 0.0857>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.4235, 0.2392, 0.1686>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape08.jpg
//            coordinates: 364,216->511,224
// ----------------------------------------
#declare CM_landscape08_3=
  color_map {
    [0.0000 ColorCorrect(<0.4000, 0.1294, 0.0157>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.7550, 0.3986, 0.2235>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.6472, 0.3022, 0.1135>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.4464, 0.1881, 0.0427>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.3806, 0.2056, 0.0997>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.3985, 0.2392, 0.1338>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.1989, 0.0679, 0.0276>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.4048, 0.1549, 0.0475>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.5738, 0.2842, 0.1544>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.6275, 0.2996, 0.1223>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.2863, 0.0833, 0.0000>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.4241, 0.2085, 0.1045>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.4830, 0.2362, 0.1446>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.4196, 0.2038, 0.1113>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.6034, 0.3142, 0.1951>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.4725, 0.1603, 0.0324>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4765, 0.2535, 0.1600>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.5271, 0.3002, 0.1526>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.3376, 0.1266, 0.0185>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.4602, 0.2230, 0.0748>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.4392, 0.2451, 0.1137>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.4094, 0.2082, 0.1169>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.2614, 0.0840, 0.0265>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.3395, 0.1850, 0.1034>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.3987, 0.2166, 0.1390>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.3873, 0.1975, 0.1118>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.3820, 0.2153, 0.1176>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.4425, 0.2889, 0.1838>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.3950, 0.2262, 0.0965>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.2500, 0.0436, 0.0199>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.4088, 0.2343, 0.1098>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.5465, 0.3391, 0.2081>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.1821, 0.0452, 0.0188>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.4002, 0.2153, 0.1455>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.6476, 0.4401, 0.3136>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.4583, 0.2554, 0.1324>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.4652, 0.3238, 0.2415>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.2765, 0.1153, 0.0203>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.4053, 0.2127, 0.0930>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.3558, 0.1675, 0.0601>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.5059, 0.3294, 0.2392>, Gamma, Color_Diff)]
  }