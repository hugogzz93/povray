// Persistence Of Vision Ray Tracer Include File
// ---------------------------------------------
// File: @(#)cm_landscape04.inc
// Description: color map generated by Image_ColorMap 0.1 alpha
// Creation Date: $ Sun Jun 20 12:13:57 CEST 2004 $
// Last modified: $ Sun Jun 20 12:13:57 CEST 2004 $
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
//  color_map from image: landscape04.jpg
//            coordinates: 408,265->415,308
// ----------------------------------------
#declare CM_landscape04_1=
  color_map {
    [0.0000 ColorCorrect(<0.3882, 0.2471, 0.1529>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.3934, 0.2474, 0.1454>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.4365, 0.2790, 0.1747>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.4670, 0.3057, 0.1841>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.4805, 0.3139, 0.1758>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.4925, 0.3207, 0.1757>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.4842, 0.3135, 0.1736>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.4703, 0.3049, 0.1775>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.4664, 0.3024, 0.1804>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.4657, 0.3004, 0.1782>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.4846, 0.3223, 0.1988>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.4888, 0.3312, 0.1932>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.4863, 0.3333, 0.1667>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.4833, 0.3304, 0.1770>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.3816, 0.2248, 0.1276>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.3781, 0.2263, 0.1420>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4036, 0.2664, 0.1534>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.3891, 0.2627, 0.1323>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.3946, 0.2752, 0.1471>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.4025, 0.2820, 0.1633>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.3902, 0.2696, 0.1598>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.3917, 0.2622, 0.1671>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.3815, 0.2431, 0.1507>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.3806, 0.2421, 0.1366>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.4169, 0.2762, 0.1475>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.4202, 0.2722, 0.1260>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.3916, 0.2446, 0.0857>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.4255, 0.2765, 0.1238>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.4738, 0.3252, 0.1867>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.4129, 0.2685, 0.1582>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.4066, 0.2669, 0.1777>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.3780, 0.2481, 0.1749>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.3727, 0.2574, 0.1871>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.3690, 0.2669, 0.1937>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.3696, 0.2821, 0.1952>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.3772, 0.2939, 0.1998>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.3716, 0.2705, 0.1756>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.3692, 0.2585, 0.1565>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.3511, 0.2411, 0.1343>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.3647, 0.2616, 0.1544>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.3961, 0.2941, 0.1882>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape04.jpg
//            coordinates: 254,251->199,325
// ----------------------------------------
#declare CM_landscape04_2=
  color_map {
    [0.0000 ColorCorrect(<0.7137, 0.6235, 0.4902>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.6458, 0.5716, 0.4322>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.6730, 0.6046, 0.4341>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.6846, 0.6138, 0.4575>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.7122, 0.6329, 0.4776>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.8452, 0.7537, 0.5875>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.7292, 0.6084, 0.4297>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.6000, 0.4571, 0.2763>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.7153, 0.5569, 0.3835>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.7195, 0.5659, 0.3972>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.6010, 0.4618, 0.3005>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.5488, 0.3919, 0.2014>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.6973, 0.5318, 0.3075>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.8875, 0.7327, 0.5287>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.8005, 0.6575, 0.4317>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.7743, 0.6582, 0.4669>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.6565, 0.5506, 0.3741>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.5918, 0.4602, 0.2879>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.6598, 0.5367, 0.3751>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.6252, 0.5071, 0.3459>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.4922, 0.3627, 0.2118>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.5728, 0.4524, 0.2810>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.8571, 0.7249, 0.5201>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.5658, 0.4135, 0.1844>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.7631, 0.6086, 0.3976>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.6289, 0.4744, 0.2848>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.6727, 0.5241, 0.3459>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.5701, 0.4367, 0.2603>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.6588, 0.5294, 0.3600>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.6543, 0.5334, 0.3615>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.6873, 0.5755, 0.4044>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.7434, 0.6449, 0.4810>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.6816, 0.5984, 0.4478>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.7216, 0.6589, 0.5181>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.7474, 0.6949, 0.5604>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.7069, 0.6504, 0.5210>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.6745, 0.6110, 0.4682>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.6872, 0.6201, 0.4747>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.7079, 0.6507, 0.5087>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.7006, 0.6367, 0.4992>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.6314, 0.5608, 0.4118>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape04.jpg
//            coordinates: 603,291->564,339
// ----------------------------------------
#declare CM_landscape04_3=
  color_map {
    [0.0000 ColorCorrect(<0.7686, 0.7059, 0.6039>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.5100, 0.4472, 0.3453>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.6511, 0.5921, 0.4715>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.6188, 0.5600, 0.4388>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.6571, 0.5948, 0.4665>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.6667, 0.6034, 0.4755>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.6089, 0.5456, 0.4179>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.6344, 0.5717, 0.4410>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.6500, 0.5873, 0.4540>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.6318, 0.5690, 0.4294>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.6647, 0.5941, 0.4451>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.7071, 0.6319, 0.4753>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.6959, 0.6237, 0.4759>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.6785, 0.6079, 0.4667>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.7111, 0.6343, 0.4940>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.6765, 0.5980, 0.4608>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.6998, 0.6182, 0.4778>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.6278, 0.5454, 0.4077>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.6426, 0.5599, 0.4187>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.6515, 0.5731, 0.4288>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.6686, 0.5902, 0.4451>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.6525, 0.5765, 0.4242>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.6918, 0.6094, 0.4552>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.6918, 0.6055, 0.4539>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.7471, 0.6577, 0.4973>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.7225, 0.6338, 0.4569>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.7275, 0.6413, 0.4547>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.7393, 0.6507, 0.4744>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.7007, 0.6105, 0.4463>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.7915, 0.6981, 0.5274>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.6912, 0.5980, 0.4196>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.7205, 0.6337, 0.4455>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.7453, 0.6645, 0.4833>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.7355, 0.6609, 0.4926>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.7426, 0.6592, 0.4960>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.7760, 0.6853, 0.5196>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.7362, 0.6319, 0.4632>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.6194, 0.5284, 0.3587>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.7453, 0.6634, 0.5117>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.7141, 0.6278, 0.4749>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.6627, 0.5765, 0.4235>, Gamma, Color_Diff)]
  }
