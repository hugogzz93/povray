// Persistence Of Vision Ray Tracer Include File
// ---------------------------------------------
// File: @(#)cm_landscape06.inc
// Description: color map generated by Image_ColorMap 0.1 alpha
// Creation Date: $ Sun Jun 20 00:26:34 CEST 2004 $
// Last modified: $ Sun Jun 20 00:26:34 CEST 2004 $
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
//  color_map from image: landscape06.jpg
//            coordinates: 203,18->181,106
// ----------------------------------------
#declare CM_landscape06_1=
  color_map {
    [0.0000 ColorCorrect(<0.5529, 0.4510, 0.3137>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.5300, 0.4229, 0.2545>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.5718, 0.4997, 0.3253>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.4969, 0.4733, 0.3232>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.4400, 0.4350, 0.2999>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.4480, 0.4186, 0.2765>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.4736, 0.3844, 0.2249>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.6501, 0.5098, 0.3269>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.5837, 0.4651, 0.2213>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.4711, 0.3574, 0.0837>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.4314, 0.3235, 0.0667>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.5964, 0.4855, 0.2396>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.5940, 0.4888, 0.2347>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.5044, 0.4210, 0.1700>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.2581, 0.2386, 0.0750>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.1745, 0.1686, 0.0353>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.1725, 0.1719, 0.0411>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.2525, 0.2557, 0.0865>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.1715, 0.1685, 0.0045>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.1949, 0.1720, 0.0000>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.3373, 0.2863, 0.1529>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.2662, 0.2062, 0.0478>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.3274, 0.2242, 0.0870>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.3869, 0.2316, 0.1056>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.4345, 0.2391, 0.1147>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.8304, 0.6108, 0.4755>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.4617, 0.2492, 0.1000>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.5271, 0.3239, 0.1663>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.5205, 0.3344, 0.1809>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.6984, 0.4924, 0.3300>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.5667, 0.3392, 0.1471>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.6545, 0.4224, 0.2104>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.6973, 0.5082, 0.3046>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.3353, 0.1931, 0.0215>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.3332, 0.2408, 0.0842>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.2559, 0.1941, 0.0559>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.1887, 0.1449, 0.0097>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.2680, 0.1503, 0.0225>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.3832, 0.2065, 0.0788>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.4261, 0.2555, 0.1110>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.3608, 0.2118, 0.0588>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape06.jpg
//            coordinates: 333,497->438,438
// ----------------------------------------
#declare CM_landscape06_2=
  color_map {
    [0.0000 ColorCorrect(<0.6118, 0.2627, 0.1294>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.6103, 0.2376, 0.0951>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.6035, 0.2858, 0.1458>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.5339, 0.3005, 0.1559>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.3488, 0.2145, 0.0055>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.8709, 0.6902, 0.3740>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.2990, 0.1817, 0.0402>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.1281, 0.0757, 0.0159>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.2549, 0.2024, 0.0784>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.4061, 0.2773, 0.0347>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.7164, 0.4350, 0.1051>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.8143, 0.4466, 0.1550>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.6098, 0.2700, 0.0424>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.6294, 0.3025, 0.0950>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.3708, 0.1761, 0.0359>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.2926, 0.1436, 0.0078>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4949, 0.2400, 0.0157>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.8574, 0.4798, 0.1755>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.7825, 0.3912, 0.0888>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.6856, 0.3542, 0.0808>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.6235, 0.2471, 0.0059>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.7829, 0.3648, 0.0494>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.7837, 0.4019, 0.0677>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.7051, 0.3678, 0.0548>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.7192, 0.3976, 0.0729>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.6340, 0.3203, 0.0043>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.6484, 0.4321, 0.1164>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.4363, 0.3610, 0.0651>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.7224, 0.7078, 0.3443>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.5227, 0.4659, 0.0757>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.5287, 0.4395, 0.0956>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.5694, 0.4995, 0.1834>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.4784, 0.3765, 0.0471>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.4624, 0.3936, 0.0897>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.6358, 0.5315, 0.1889>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.5562, 0.4299, 0.1131>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.5851, 0.4467, 0.1857>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.5590, 0.4072, 0.1841>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.6033, 0.4807, 0.2571>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.5158, 0.3997, 0.1734>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.5176, 0.4157, 0.1843>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape06.jpg
//            coordinates: 5,363->51,506
// ----------------------------------------
#declare CM_landscape06_3=
  color_map {
    [0.0000 ColorCorrect(<0.3490, 0.2588, 0.0980>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.3330, 0.2147, 0.1029>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.3971, 0.2414, 0.1059>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.6682, 0.5022, 0.4040>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.8005, 0.5785, 0.4679>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.7534, 0.5494, 0.4564>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.2392, 0.1307, 0.0991>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.3997, 0.2376, 0.1499>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.4951, 0.3920, 0.2875>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.2789, 0.2503, 0.1258>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.1858, 0.1936, 0.0103>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.1725, 0.1575, 0.0000>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.3238, 0.2385, 0.0760>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.3752, 0.3201, 0.1519>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.4255, 0.3624, 0.0657>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.3814, 0.3441, 0.0581>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4645, 0.4463, 0.1145>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.3821, 0.3769, 0.0562>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.6206, 0.5971, 0.2465>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.6214, 0.5797, 0.1758>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.3510, 0.3294, 0.0000>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.3584, 0.3488, 0.0166>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.4571, 0.4551, 0.1683>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.1168, 0.0473, 0.0099>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.6737, 0.3366, 0.0839>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.6512, 0.3098, 0.0842>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.5345, 0.2100, 0.0076>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.5363, 0.3270, 0.1409>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.2033, 0.1307, 0.0202>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.3376, 0.2184, 0.0679>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.4985, 0.3534, 0.1961>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.7792, 0.6856, 0.4469>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.9804, 0.8511, 0.4908>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.9567, 0.8303, 0.4968>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.7551, 0.6269, 0.3331>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.8175, 0.6846, 0.4188>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.8576, 0.7350, 0.4451>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.8880, 0.8150, 0.4526>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.6570, 0.5608, 0.2466>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.7176, 0.5945, 0.2096>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.3294, 0.2314, 0.0000>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape06.jpg
//            coordinates: 418,1->391,131
// ----------------------------------------
#declare CM_landscape06_4=
  color_map {
    [0.0000 ColorCorrect(<0.8863, 0.6353, 0.3569>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.6237, 0.3635, 0.0574>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.6123, 0.3227, 0.0633>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.7576, 0.4454, 0.2132>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.7333, 0.4165, 0.1588>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.7326, 0.5341, 0.2679>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.6875, 0.5692, 0.3124>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.6938, 0.5775, 0.2709>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.5875, 0.4635, 0.1169>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.5621, 0.4802, 0.1623>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.3735, 0.3373, 0.2142>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.5855, 0.4559, 0.2522>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.6631, 0.5259, 0.2992>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.5585, 0.4785, 0.2263>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.6684, 0.5945, 0.2694>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.9790, 0.9279, 0.4235>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.7537, 0.6769, 0.1796>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.7550, 0.7147, 0.2956>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.6774, 0.6331, 0.2416>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.6350, 0.5278, 0.1211>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.4431, 0.2667, 0.0000>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.5830, 0.3436, 0.0192>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.8598, 0.5793, 0.2481>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.8148, 0.5426, 0.2130>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.9224, 0.6478, 0.3294>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.9047, 0.5630, 0.2898>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.9479, 0.6033, 0.3432>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.8097, 0.4275, 0.2192>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.9227, 0.4957, 0.3427>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.6723, 0.2211, 0.0733>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.7422, 0.3770, 0.1721>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.8939, 0.6947, 0.4369>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.9812, 0.8698, 0.5898>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.8208, 0.6849, 0.4286>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.8276, 0.6890, 0.4552>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.9414, 0.8098, 0.6058>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.9851, 0.8541, 0.6741>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.9922, 0.8908, 0.6353>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.9492, 0.8626, 0.5552>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.8824, 0.7736, 0.4520>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.9098, 0.7882, 0.4667>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape06.jpg
//            coordinates: 244,401->277,219
// ----------------------------------------
#declare CM_landscape06_5=
  color_map {
    [0.0000 ColorCorrect(<1.0000, 0.9529, 0.6078>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.8221, 0.7684, 0.2981>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.7703, 0.6618, 0.1520>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.8928, 0.7517, 0.3551>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.4682, 0.3700, 0.0928>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.5279, 0.4885, 0.0735>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.4627, 0.4358, 0.0932>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.6397, 0.6141, 0.1728>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.4331, 0.3809, 0.0104>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.4149, 0.3443, 0.0297>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.4235, 0.3412, 0.0534>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.4396, 0.3685, 0.0468>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.2704, 0.2367, 0.0353>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.5363, 0.4963, 0.0128>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.5650, 0.5026, 0.1570>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.4838, 0.4370, 0.0777>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4395, 0.3660, 0.0689>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.4039, 0.3496, 0.0249>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.3495, 0.3186, 0.0185>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.4298, 0.3876, 0.0248>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.5510, 0.5216, 0.0510>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.4924, 0.4789, 0.0975>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.4108, 0.3886, 0.0137>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.9414, 0.8805, 0.4205>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.9264, 0.8971, 0.4392>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.6619, 0.6203, 0.1265>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.6222, 0.5773, 0.0173>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.7416, 0.6789, 0.1099>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.6938, 0.6014, 0.1063>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.5114, 0.3977, 0.0006>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.6868, 0.5672, 0.1000>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.4012, 0.3093, 0.0027>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.4930, 0.3598, 0.1112>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.5973, 0.4671, 0.2125>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.5596, 0.4394, 0.2618>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.4640, 0.3260, 0.0756>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.8307, 0.6802, 0.4903>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.7659, 0.6250, 0.4566>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.6138, 0.4666, 0.3060>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.2823, 0.2083, 0.1363>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.0824, 0.0667, 0.0196>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape06.jpg
//            coordinates: 5,15->50,226
// ----------------------------------------
#declare CM_landscape06_6=
  color_map {
    [0.0000 ColorCorrect(<0.6627, 0.4980, 0.3490>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.7110, 0.5346, 0.3727>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.6761, 0.5065, 0.3232>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.6489, 0.5310, 0.1907>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.6433, 0.4853, 0.2567>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.7854, 0.6115, 0.4153>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.6059, 0.4387, 0.3068>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.6546, 0.4953, 0.3517>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.6133, 0.4839, 0.3467>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.4661, 0.3558, 0.2063>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.4566, 0.3446, 0.1752>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.6486, 0.5270, 0.3547>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.4837, 0.3492, 0.2114>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.4287, 0.2978, 0.1561>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.2861, 0.1760, 0.0311>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.3438, 0.2316, 0.0969>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.7067, 0.5639, 0.3694>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.4211, 0.3699, 0.1722>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.5720, 0.5090, 0.2781>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.4924, 0.3807, 0.1857>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.6039, 0.4725, 0.1667>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.6953, 0.5607, 0.2643>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.7443, 0.5560, 0.3252>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.6372, 0.4239, 0.2406>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.7082, 0.5122, 0.3122>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.5784, 0.3835, 0.2134>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.7717, 0.6151, 0.4581>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.6873, 0.5014, 0.3320>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.5086, 0.3306, 0.0910>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.9399, 0.7787, 0.3988>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.4328, 0.3051, 0.0870>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.4747, 0.3668, 0.1005>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.8745, 0.7200, 0.3843>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.7269, 0.5821, 0.2443>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.8238, 0.7152, 0.4567>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.4119, 0.2825, 0.0621>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.5025, 0.3853, 0.1263>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.5216, 0.4413, 0.2185>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.5526, 0.5011, 0.1582>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.3430, 0.2602, 0.0099>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.4431, 0.3882, 0.0000>, Gamma, Color_Diff)]
  }
