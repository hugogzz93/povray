// Persistence Of Vision Ray Tracer Include File
// ---------------------------------------------
// File: @(#)cm_landscape19.inc
// Description: color map generated by Image_ColorMap 0.1 alpha
// Creation Date: $ Sun Jun 20 12:17:15 CEST 2004 $
// Last modified: $ Sun Jun 20 12:17:15 CEST 2004 $
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
//  color_map from image: landscape19.jpg
//            coordinates: 211,79->271,106
// ----------------------------------------
#declare CM_landscape19_1=
  color_map {
    [0.0000 ColorCorrect(<0.8235, 0.6824, 0.6824>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.8324, 0.6992, 0.6859>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.8578, 0.7325, 0.7088>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.8569, 0.7389, 0.7036>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.8671, 0.7412, 0.7047>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.8728, 0.7434, 0.7081>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.9045, 0.7786, 0.7359>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.8968, 0.7656, 0.7281>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.9004, 0.7671, 0.7318>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.8201, 0.6907, 0.6639>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.7824, 0.6471, 0.6304>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.8381, 0.7008, 0.6812>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.8569, 0.7188, 0.6953>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.8442, 0.6930, 0.6655>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.8551, 0.6982, 0.6633>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.8328, 0.6713, 0.6284>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.8714, 0.7067, 0.6596>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.8416, 0.6727, 0.6218>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.9882, 0.8169, 0.7665>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.8615, 0.7040, 0.6595>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.7118, 0.5627, 0.5235>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.8429, 0.6864, 0.6522>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.8547, 0.6861, 0.6508>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.8276, 0.6579, 0.6141>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.8612, 0.6902, 0.6400>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.7733, 0.6069, 0.5645>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.7810, 0.6124, 0.5814>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.8365, 0.6649, 0.6363>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.7580, 0.5890, 0.5608>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.8066, 0.6379, 0.6136>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.7647, 0.6069, 0.5775>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.7446, 0.5839, 0.5637>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.7522, 0.5914, 0.5835>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.7202, 0.5533, 0.5573>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.7675, 0.5953, 0.5918>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.7730, 0.6005, 0.5917>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.7855, 0.6169, 0.5898>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.7869, 0.6201, 0.5792>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.8202, 0.6555, 0.6033>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.8330, 0.6671, 0.6096>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.8863, 0.7176, 0.6549>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape19.jpg
//            coordinates: 99,129->106,168
// ----------------------------------------
#declare CM_landscape19_2=
  color_map {
    [0.0000 ColorCorrect(<0.5725, 0.4275, 0.4549>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.6168, 0.4593, 0.4693>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.5595, 0.3844, 0.3884>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.5940, 0.4075, 0.4036>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.5977, 0.4059, 0.3989>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.5839, 0.3903, 0.3865>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.6419, 0.4521, 0.4512>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.4819, 0.3034, 0.3057>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.4798, 0.3016, 0.3103>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.5319, 0.3532, 0.3627>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.6684, 0.4838, 0.4875>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.7146, 0.5182, 0.5103>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.6220, 0.4112, 0.3947>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.6737, 0.4474, 0.4220>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.6646, 0.4371, 0.4130>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.5742, 0.3737, 0.3661>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4933, 0.3142, 0.3208>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.5018, 0.3254, 0.3417>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.4912, 0.3099, 0.3363>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.4654, 0.2832, 0.3186>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.4480, 0.2735, 0.3157>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.3618, 0.2032, 0.2475>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.3596, 0.2209, 0.2647>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.5272, 0.4101, 0.4499>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.5241, 0.4185, 0.4513>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.4044, 0.3006, 0.3275>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.4029, 0.2958, 0.3161>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.4360, 0.3118, 0.3283>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.4762, 0.3280, 0.3437>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.5294, 0.3576, 0.3732>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.5257, 0.3306, 0.3444>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.5591, 0.3458, 0.3515>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.6246, 0.4030, 0.3896>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.6917, 0.4659, 0.4412>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.6749, 0.4473, 0.4316>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.7786, 0.5525, 0.5383>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.5412, 0.3166, 0.3102>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.6962, 0.4772, 0.4736>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.6996, 0.4883, 0.4887>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.7330, 0.5293, 0.5373>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.6196, 0.4275, 0.4392>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape19.jpg
//            coordinates: 346,167->331,209
// ----------------------------------------
#declare CM_landscape19_3=
  color_map {
    [0.0000 ColorCorrect(<0.7059, 0.5059, 0.4941>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.6650, 0.4704, 0.4621>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.5268, 0.3336, 0.3209>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.5114, 0.3192, 0.3035>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.6314, 0.4376, 0.4227>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.5615, 0.3615, 0.3498>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.5451, 0.3451, 0.3333>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.5883, 0.3900, 0.3784>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.5302, 0.3396, 0.3271>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.5392, 0.3493, 0.3458>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.5917, 0.4034, 0.4034>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.5874, 0.3992, 0.3982>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.5373, 0.3549, 0.3498>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.5262, 0.3499, 0.3393>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.5315, 0.3577, 0.3460>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.6625, 0.4900, 0.4782>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.5443, 0.3686, 0.3569>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.5629, 0.3864, 0.3746>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.4900, 0.3029, 0.2947>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.5752, 0.3795, 0.3754>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.5569, 0.3569, 0.3529>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.5248, 0.3144, 0.3140>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.6113, 0.3993, 0.3994>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.5159, 0.2985, 0.2998>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.6180, 0.3906, 0.3859>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.6449, 0.4192, 0.4123>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.6618, 0.4390, 0.4331>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.6586, 0.4390, 0.4351>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.6416, 0.4235, 0.4188>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.6536, 0.4357, 0.4310>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.6603, 0.4368, 0.4328>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.6675, 0.4408, 0.4369>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.6133, 0.3906, 0.3867>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.6392, 0.4291, 0.4233>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.5443, 0.3503, 0.3428>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.5640, 0.3819, 0.3786>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.4149, 0.2412, 0.2369>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.3397, 0.1738, 0.1766>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.5121, 0.3404, 0.3423>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.5974, 0.4025, 0.4137>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.6118, 0.3961, 0.4157>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape19.jpg
//            coordinates: 122,194->108,251
// ----------------------------------------
#declare CM_landscape19_4=
  color_map {
    [0.0000 ColorCorrect(<0.4863, 0.2549, 0.2706>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.3751, 0.1762, 0.1854>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.2751, 0.1068, 0.1151>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.4113, 0.2616, 0.2669>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.4245, 0.2844, 0.2944>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.5114, 0.3724, 0.3882>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.4609, 0.3136, 0.3266>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.3884, 0.2240, 0.2361>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.4675, 0.2825, 0.2924>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.4780, 0.2762, 0.2944>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.4353, 0.2588, 0.2858>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.5235, 0.3773, 0.3906>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.4010, 0.2666, 0.2614>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.2327, 0.0815, 0.0743>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.4308, 0.2273, 0.2430>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.4942, 0.2570, 0.2938>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.4899, 0.2558, 0.3038>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.4480, 0.2404, 0.2685>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.4784, 0.2635, 0.2652>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.5520, 0.2942, 0.2770>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.5843, 0.2765, 0.2510>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.5821, 0.2938, 0.2700>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.5442, 0.2629, 0.2482>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.5655, 0.2753, 0.2635>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.5815, 0.2850, 0.2740>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.5813, 0.2754, 0.2675>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.5991, 0.2932, 0.2854>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.5822, 0.2819, 0.2722>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.5772, 0.2866, 0.2748>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.5688, 0.2917, 0.2797>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.5534, 0.2819, 0.2765>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.5401, 0.2804, 0.2821>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.5412, 0.2871, 0.2889>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.5350, 0.3003, 0.3003>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.6354, 0.4377, 0.4377>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.5013, 0.3484, 0.3450>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.3689, 0.2443, 0.2404>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.4976, 0.3742, 0.3774>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.5748, 0.4196, 0.4243>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.5972, 0.4120, 0.4231>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.4667, 0.2549, 0.2549>, Gamma, Color_Diff)]
  }
// ----------------------------------------
//  color_map from image: landscape19.jpg
//            coordinates: 220,117->270,153
// ----------------------------------------
#declare CM_landscape19_5=
  color_map {
    [0.0000 ColorCorrect(<0.7216, 0.5098, 0.4706>, Gamma, Color_Diff)]
    [0.0250 ColorCorrect(<0.7966, 0.5742, 0.5315>, Gamma, Color_Diff)]
    [0.0500 ColorCorrect(<0.7671, 0.5435, 0.5004>, Gamma, Color_Diff)]
    [0.0750 ColorCorrect(<0.7938, 0.5689, 0.5224>, Gamma, Color_Diff)]
    [0.1000 ColorCorrect(<0.7843, 0.5569, 0.5098>, Gamma, Color_Diff)]
    [0.1250 ColorCorrect(<0.8353, 0.6059, 0.5549>, Gamma, Color_Diff)]
    [0.1500 ColorCorrect(<0.8506, 0.6192, 0.5643>, Gamma, Color_Diff)]
    [0.1750 ColorCorrect(<0.8872, 0.6523, 0.5962>, Gamma, Color_Diff)]
    [0.2000 ColorCorrect(<0.9169, 0.6737, 0.6149>, Gamma, Color_Diff)]
    [0.2250 ColorCorrect(<0.8741, 0.6297, 0.5683>, Gamma, Color_Diff)]
    [0.2500 ColorCorrect(<0.8608, 0.6137, 0.5471>, Gamma, Color_Diff)]
    [0.2750 ColorCorrect(<0.8939, 0.6463, 0.5864>, Gamma, Color_Diff)]
    [0.3000 ColorCorrect(<0.8235, 0.5859, 0.5380>, Gamma, Color_Diff)]
    [0.3250 ColorCorrect(<0.7820, 0.5518, 0.5166>, Gamma, Color_Diff)]
    [0.3500 ColorCorrect(<0.7557, 0.5220, 0.4906>, Gamma, Color_Diff)]
    [0.3750 ColorCorrect(<0.7672, 0.5191, 0.4858>, Gamma, Color_Diff)]
    [0.4000 ColorCorrect(<0.7671, 0.5051, 0.4627>, Gamma, Color_Diff)]
    [0.4250 ColorCorrect(<0.7475, 0.4806, 0.4418>, Gamma, Color_Diff)]
    [0.4500 ColorCorrect(<0.7682, 0.5008, 0.4702>, Gamma, Color_Diff)]
    [0.4750 ColorCorrect(<0.6324, 0.3696, 0.3443>, Gamma, Color_Diff)]
    [0.5000 ColorCorrect(<0.5529, 0.2902, 0.2667>, Gamma, Color_Diff)]
    [0.5250 ColorCorrect(<0.6920, 0.4257, 0.4127>, Gamma, Color_Diff)]
    [0.5500 ColorCorrect(<0.7494, 0.4827, 0.4710>, Gamma, Color_Diff)]
    [0.5750 ColorCorrect(<0.7467, 0.4882, 0.4737>, Gamma, Color_Diff)]
    [0.6000 ColorCorrect(<0.7498, 0.4949, 0.4792>, Gamma, Color_Diff)]
    [0.6250 ColorCorrect(<0.7181, 0.4632, 0.4475>, Gamma, Color_Diff)]
    [0.6500 ColorCorrect(<0.6835, 0.4286, 0.4129>, Gamma, Color_Diff)]
    [0.6750 ColorCorrect(<0.6553, 0.4004, 0.3824>, Gamma, Color_Diff)]
    [0.7000 ColorCorrect(<0.7310, 0.4776, 0.4533>, Gamma, Color_Diff)]
    [0.7250 ColorCorrect(<0.7363, 0.4809, 0.4656>, Gamma, Color_Diff)]
    [0.7500 ColorCorrect(<0.7196, 0.4804, 0.4686>, Gamma, Color_Diff)]
    [0.7750 ColorCorrect(<0.6735, 0.4361, 0.4234>, Gamma, Color_Diff)]
    [0.8000 ColorCorrect(<0.6769, 0.4314, 0.4133>, Gamma, Color_Diff)]
    [0.8250 ColorCorrect(<0.5722, 0.3134, 0.2931>, Gamma, Color_Diff)]
    [0.8500 ColorCorrect(<0.6020, 0.3337, 0.3125>, Gamma, Color_Diff)]
    [0.8750 ColorCorrect(<0.5225, 0.2412, 0.2201>, Gamma, Color_Diff)]
    [0.9000 ColorCorrect(<0.6722, 0.3827, 0.3592>, Gamma, Color_Diff)]
    [0.9250 ColorCorrect(<0.6548, 0.3542, 0.3307>, Gamma, Color_Diff)]
    [0.9500 ColorCorrect(<0.6855, 0.3835, 0.3584>, Gamma, Color_Diff)]
    [0.9750 ColorCorrect(<0.6793, 0.3782, 0.3466>, Gamma, Color_Diff)]
    [1.0000 ColorCorrect(<0.6078, 0.3059, 0.2745>, Gamma, Color_Diff)]
  }