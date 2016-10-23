// Persistence Of Vision Ray Tracer Include File
// ---------------------------------------------
// File: @(#)cm_landscape10.inc
// Description: color map generated by Image_ColorMap 0.1 alpha
// Creation Date: $ Sun Jun 20 00:42:29 CEST 2004 $
// Last modified: $ Sun Jun 20 00:42:29 CEST 2004 $
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
//  color_map from image: landscape10.jpg
//            coordinates: 335,81->194,248
// ----------------------------------------
#declare CM_landscape10_1=
  color_map {
    [0.0000 ColorCorrect(<0.4039, 0.3843, 0.2275>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.2948, 0.3200, 0.2016>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.1946, 0.2008, 0.1473>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.1516, 0.1630, 0.0481>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.1367, 0.1391, 0.1147>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.1714, 0.1823, 0.0662>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.2664, 0.2669, 0.2622>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.3489, 0.3695, 0.2843>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.0883, 0.1280, 0.0515>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.3634, 0.4023, 0.2992>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.3314, 0.3417, 0.2912>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.2345, 0.2298, 0.2260>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.2551, 0.2669, 0.1939>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.3683, 0.3800, 0.3041>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.2474, 0.2631, 0.1646>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.2675, 0.2621, 0.2931>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.1802, 0.1802, 0.1802>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.1630, 0.1630, 0.1630>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.3840, 0.3840, 0.3875>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.2366, 0.2366, 0.2366>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.4833, 0.4833, 0.4833>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.3094, 0.3094, 0.3094>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.3902, 0.3902, 0.3902>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.2979, 0.2979, 0.2979>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.4384, 0.4384, 0.4384>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.5004, 0.5004, 0.5004>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.5256, 0.5256, 0.5256>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.4363, 0.4363, 0.4363>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.4878, 0.4878, 0.4878>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.6756, 0.6756, 0.6756>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.4243, 0.4243, 0.4243>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.4509, 0.4504, 0.4596>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.4521, 0.4521, 0.4449>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.1126, 0.1165, 0.0933>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.3500, 0.3506, 0.3410>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.2663, 0.2663, 0.2663>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.3501, 0.3501, 0.3423>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.6535, 0.6535, 0.6535>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.4535, 0.4535, 0.4535>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.2690, 0.2690, 0.2690>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.3059, 0.3059, 0.3059>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape10.jpg
//            coordinates: 163,385->242,227
// ----------------------------------------
#declare CM_landscape10_2=
  color_map {
    [0.0000 ColorCorrect(<0.3137, 0.3020, 0.2824>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.2201, 0.2355, 0.1815>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.1511, 0.1593, 0.1035>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.2472, 0.2408, 0.1905>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.2593, 0.2546, 0.1473>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.3808, 0.3784, 0.2966>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.1815, 0.1939, 0.0801>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.2520, 0.2750, 0.1412>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.2729, 0.2921, 0.2066>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.3404, 0.3700, 0.2084>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.3902, 0.3990, 0.3010>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.3915, 0.4022, 0.2970>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.3774, 0.3832, 0.2296>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.4278, 0.4400, 0.3542>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.4545, 0.4518, 0.4076>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.2415, 0.2426, 0.2327>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.3624, 0.3624, 0.3702>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.4439, 0.4439, 0.4361>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.6316, 0.6316, 0.6238>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.7666, 0.7666, 0.7587>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.4235, 0.4235, 0.4157>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.5843, 0.5882, 0.5647>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.1563, 0.1602, 0.1288>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.3984, 0.4062, 0.3631>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.5079, 0.5118, 0.4922>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.4873, 0.4873, 0.4873>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.4928, 0.4928, 0.4928>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.5368, 0.5368, 0.5368>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.5588, 0.5588, 0.5588>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.3611, 0.3611, 0.3611>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.1833, 0.1833, 0.1833>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.5003, 0.5003, 0.5003>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.3923, 0.3923, 0.3923>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.5532, 0.5532, 0.5454>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.5547, 0.5547, 0.5468>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.5697, 0.5697, 0.5619>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.7437, 0.7437, 0.7358>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.3820, 0.3860, 0.3658>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.5022, 0.5061, 0.4826>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.4676, 0.4715, 0.4519>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.5647, 0.5647, 0.5569>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape10.jpg
//            coordinates: 402,282->236,319
// ----------------------------------------
#declare CM_landscape10_3=
  color_map {
    [0.0000 ColorCorrect(<0.3020, 0.3098, 0.2549>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.4815, 0.4703, 0.4405>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.4316, 0.4326, 0.3218>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.2848, 0.2870, 0.1734>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.2964, 0.2819, 0.2678>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.4398, 0.4393, 0.3850>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.4046, 0.4129, 0.3452>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.3032, 0.3129, 0.2642>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.1752, 0.1846, 0.1672>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.3582, 0.3651, 0.3222>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.3397, 0.3475, 0.3015>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.4044, 0.4141, 0.3524>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.2587, 0.2706, 0.1994>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.2750, 0.2984, 0.1968>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.2368, 0.2560, 0.1684>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.3114, 0.3227, 0.2893>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4601, 0.4687, 0.4431>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.2342, 0.2381, 0.2141>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.5677, 0.5756, 0.5324>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.3305, 0.3384, 0.2907>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.3275, 0.3353, 0.2490>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.3550, 0.3471, 0.2926>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.2305, 0.2265, 0.2095>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.2958, 0.3155, 0.2758>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.1139, 0.1385, 0.0778>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.2675, 0.2793, 0.2107>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.4042, 0.4085, 0.3760>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.3798, 0.3835, 0.3645>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.3209, 0.3245, 0.3051>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.4345, 0.4384, 0.4188>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.3652, 0.3672, 0.3534>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.2937, 0.2937, 0.2937>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.6147, 0.6144, 0.5768>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.4946, 0.5102, 0.3696>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.2154, 0.2268, 0.1080>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.4900, 0.4896, 0.4593>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.3340, 0.3380, 0.3144>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.2879, 0.2963, 0.2457>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.4366, 0.4417, 0.4064>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.6301, 0.6265, 0.6490>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.2353, 0.2314, 0.2157>, Gamma, Color_Diff)]
  }