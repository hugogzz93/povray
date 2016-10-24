/********************************************************************
POV-Ray 3.6 Include File
File:         realskies.inc
Last updated: 02/11/2006 MM/DD/YY
Version:      1.0

All color maps, pigments, and sky spheres created by 
Mike Kost (contact@povray.tashcorp.net)

All color maps are derived from images. When available, the source
image is noted above the respective color map.

This work is licensed under the Creative Commons Attribution 2.5 License. To 
view a copy of this license, visit http://creativecommons.org/licenses/by/2.5/ 
or send a letter to Creative Commons, 543 Howard Street, 5th Floor, 
San Francisco, California, 94105, USA.

You are allowed:
  * to copy, distribute, display, and perform the work
  * to make derivative works
  * to make commercial use of the work
But you must:
  * note the creator for all constructs for all derivative include files

Things included:
  Color Maps:
    cm_realsky_01
    cm_realsky_02
    cm_realsky_03
    cm_reaksky_04
    cm_realsky_05
    cm_realsky_06
    cm_realsky_07
    cm_realsky_08
    cm_realsky_09
    cm_realsky_10
    cm_realsky_11
    cm_realsky_12
    cm_realsky_12a
    cm_realsky_13
  Pigments
    p_realsky_01
    p_realsky_02
    p_realsky_03
    p_realsky_04
    p_realsky_05
    p_realsky_06
    p_realsky_07
    p_realsky_08
    p_realsky_09
    p_realsky_10
    p_realsky_11
    p_realsky_12
    p_realsky_12a
    p_realsky_13
  Sky Spheres
    sky_realsky_01
    sky_realsky_02
    sky_realsky_03
    sky_realsky_04 
    sky_realsky_05 
    sky_realsky_06 
    sky_realsky_07 
    sky_realsky_08 
    sky_realsky_09 
    sky_realsky_10 
    sky_realsky_11 
    sky_realsky_12 
    sky_realsky_12b
    sky_realsky_13

Note From The Author:
 If you're using it, I'd appreciate an e-mail letting me know you
 found this include file useful, but it is not a requirement.
 - Mike Kost (contact@povray.tashcorp.net)

*********************************************************************/

#ifndef (Realskies_Inc_Temp)

#declare Realskies_Inc_Version = 1.0;
#declare Realskies_Inc_Temp = version;
#version 3.6;

#ifdef (View_POV_Include_Stack)
    #debug "including realskies.inc\n"
#end

// From
// http://povray.tashcorp.net/tutorials/qd_realskyspheres/
// http://povray.tashcorp.net/tutorials/qd_realskyspheres/realsky.jpg
#declare cm_realsky_01 = color_map {
    [ 0 / 259 color rgb < 233 / 255 , 128 / 255 , 47 / 255 > ]
    [ 1 / 259 color rgb < 247 / 255 , 137 / 255 , 48 / 255 > ]
    [ 2 / 259 color rgb < 248 / 255 , 147 / 255 , 59 / 255 > ]
    [ 3 / 259 color rgb < 253 / 255 , 158 / 255 , 68 / 255 > ]
    [ 6 / 259 color rgb < 251 / 255 , 174 / 255 , 86 / 255 > ]
    [ 10 / 259 color rgb < 247 / 255 , 191 / 255 , 114 / 255 > ]
    [ 12 / 259 color rgb < 253 / 255 , 199 / 255 , 111 / 255 > ]
    [ 13 / 259 color rgb < 251 / 255 , 198 / 255 , 118 / 255 > ]
    [ 15 / 259 color rgb < 249 / 255 , 198 / 255 , 141 / 255 > ]
    [ 17 / 259 color rgb < 241 / 255 , 203 / 255 , 140 / 255 > ]
    [ 20 / 259 color rgb < 228 / 255 , 205 / 255 , 153 / 255 > ]
    [ 23 / 259 color rgb < 223 / 255 , 204 / 255 , 164 / 255 > ]
    [ 30 / 259 color rgb < 198 / 255 , 197 / 255 , 179 / 255 > ]
    [ 40 / 259 color rgb < 154 / 255 , 171 / 255 , 181 / 255 > ]
    [ 50 / 259 color rgb < 123 / 255 , 148 / 255 , 170 / 255 > ]
    [ 62 / 259 color rgb < 93 / 255 , 123 / 255 , 157 / 255 > ]
    [ 75 / 259 color rgb < 68 / 255 , 102 / 255 , 140 / 255 > ]
    [ 85 / 259 color rgb < 56 / 255 , 91 / 255 , 133 / 255 > ]
    [ 100 / 259 color rgb < 43 / 255 , 72 / 255 , 116 / 255 > ]
    [ 125 / 259 color rgb < 32 / 255 , 54 / 255 , 91 / 255 > ]
    [ 150 / 259 color rgb < 25 / 255 , 42 / 255 , 70 / 255 > ]
    [ 175 / 259 color rgb < 22 / 255 , 34 / 255 , 56 / 255 > ]
    [ 190 / 259 color rgb < 18 / 255 , 29 / 255 , 47 / 255 > ]
    [ 200 / 259 color rgb < 16 / 255 , 28 / 255 , 44 / 255 > ]
    [ 225 / 259 color rgb < 15 / 255 , 23 / 255 , 34 / 255 > ]
    [ 259 / 259 color rgb < 13 / 255 , 20 / 255 , 28 / 255 > ]
}

// From http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_02 = color_map {
    [ 0 / 449 color rgb < 89 / 255 , 72 / 255 , 91 / 255 > ]
    [ 10 / 449 color rgb < 134 / 255 , 76 / 255 , 91 / 255 > ]
    [ 20 / 449 color rgb < 165 / 255 , 100 / 255 , 106 / 255 > ]
    [ 32 / 449 color rgb < 181 / 255 , 133 / 255 , 133 / 255 > ]
    [ 45 / 449 color rgb < 184 / 255 , 157 / 255 , 162 / 255 > ]
    [ 50 / 449 color rgb < 185 / 255 , 165 / 255 , 176 / 255 > ]
    [ 60 / 449 color rgb < 174 / 255 , 173 / 255 , 189 / 255 > ]
    [ 75 / 449 color rgb < 163 / 255 , 177 / 255 , 204 / 255 > ]
    [ 100 / 449 color rgb < 139 / 255 , 173 / 255 , 211 / 255 > ]
    [ 150 / 449 color rgb < 100 / 255 , 153 / 255 , 205 / 255 > ]
    [ 200 / 449 color rgb < 77 / 255 , 136 / 255 , 194 / 255 > ]
    [ 250 / 449 color rgb < 58 / 255 , 114 / 255 , 175 / 255 > ]
    [ 300 / 449 color rgb < 48 / 255 , 100 / 255 , 158 / 255 > ]
    [ 350 / 449 color rgb < 41 / 255 , 87 / 255 , 147 / 255 > ]
    [ 400 / 449 color rgb < 38 / 255 , 78 / 255 , 129 / 255 > ]
    [ 449 / 449 color rgb < 36 / 255 , 70 / 255 , 115 / 255 > ]
}

// From http://gregoire.leclercq.free.fr/en/travels/africa/zbw/ZB%200022%20Lodge%20-%20Sunset.JPG
#declare cm_realsky_03 = color_map {
    [0.00 rgb < 90/255,  66/255,  66/255> ] // 0
    [0.05 rgb <150/255,  78/255,  66/255> ] // 12
    [0.10 rgb <212/255, 101/255,  45/255> ] // 24
    [0.15 rgb <227/255, 135/255,  48/255> ] // 36
    [0.20 rgb <231/255, 159/255,  57/255> ] // 48
    [0.25 rgb <227/255, 170/255,  80/255> ] // 60
    [0.30 rgb <217/255, 176/255, 112/255> ] // 72
    [0.35 rgb <207/255, 179/255, 131/255> ] // 84
    [0.40 rgb <195/255, 177/255, 137/255> ] // 96
    [0.45 rgb <190/255, 176/255, 150/255> ] // 108
    [0.50 rgb <182/255, 172/255, 162/255> ] // 120
    [0.55 rgb <176/255, 173/255, 168/255> ] // 132
    [0.60 rgb <168/255, 167/255, 165/255> ] // 144
    [0.65 rgb <165/255, 165/255, 167/255> ] // 156
    [0.70 rgb <158/255, 158/255, 166/255> ] // 168
    [0.75 rgb <151/255, 153/255, 168/255> ] // 180
    [0.80 rgb <142/255, 148/255, 164/255> ] // 196
    [0.85 rgb <135/255, 143/255, 162/255> ] // 208
    [0.90 rgb <130/255, 138/255, 157/255> ] // 220
    [1.00 rgb <123/255, 130/255, 149/255> ]
}

// From http://weblog.bluedonkey.org/?m=200409
#declare cm_realsky_04 = color_map {
    [ 0 / 541 color rgb < 130 / 255 , 94 / 255 , 72 / 255 > ]
    [ 15 / 541 color rgb < 182 / 255 , 123 / 255 , 85 / 255 > ]
    [ 34 / 541 color rgb < 205 / 255 , 163 / 255 , 107 / 255 > ]
    [ 55 / 541 color rgb < 204 / 255 , 189 / 255 , 129 / 255 > ]
    [ 100 / 541 color rgb < 197 / 255 , 213 / 255 , 174 / 255 > ]
    [ 150 / 541 color rgb < 181 / 255 , 217 / 255 , 217 / 255 > ]
    [ 175 / 541 color rgb < 169 / 255 , 213 / 255 , 220 / 255 > ]
    [ 200 / 541 color rgb < 157 / 255 , 202 / 255 , 225 / 255 > ]
    [ 250 / 541 color rgb < 140 / 255 , 184 / 255 , 217 / 255 > ]
    [ 300 / 541 color rgb < 117 / 255 , 163 / 255 , 211 / 255 > ]
    [ 350 / 541 color rgb < 94 / 255 , 143 / 255 , 188 / 255 > ]
    [ 400 / 541 color rgb < 86 / 255 , 120 / 255 , 166 / 255 > ]
    [ 450 / 541 color rgb < 68 / 255 , 102 / 255 , 148 / 255 > ]
    [ 500 / 541 color rgb < 57 / 255 , 87 / 255 , 124 / 255 > ]
    [ 541 / 541 color rgb < 45 / 255 , 77 / 255 , 116 / 255 > ]
}

// From
// http://www.astrosurf.org/lombry/Documents/bradfield-24mar2004-endo.jpg
// http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_05 = color_map {
    [ 0 / 501 color rgb < 107 / 255 , 24 / 255 , 6 / 255 > ]
    [ 17 / 501 color rgb < 191 / 255 , 65 / 255 , 14 / 255 > ]
    [ 31 / 501 color rgb < 220 / 255 , 100 / 255 , 24 / 255 > ]
    [ 44 / 501 color rgb < 226 / 255 , 126 / 255 , 41 / 255 > ]
    [ 68 / 501 color rgb < 218 / 255 , 162 / 255 , 77 / 255 > ]
    [ 89 / 501 color rgb < 190 / 255 , 160 / 255 , 96 / 255 > ]
    [ 99 / 501 color rgb < 174 / 255 , 156 / 255 , 106 / 255 > ]
    [ 133 / 501 color rgb < 137 / 255 , 142 / 255 , 120 / 255 > ]
    [ 161 / 501 color rgb < 121 / 255 , 127 / 255 , 125 / 255 > ]
    [ 200 / 501 color rgb < 103 / 255 , 111 / 255 , 124 / 255 > ]
    [ 250 / 501 color rgb < 93 / 255 , 101 / 255 , 124 / 255 > ]
    [ 300 / 501 color rgb < 82 / 255 , 89 / 255 , 118 / 255 > ]
    [ 350 / 501 color rgb < 76 / 255 , 81 / 255 , 111 / 255 > ]
    [ 400 / 501 color rgb < 63 / 255 , 67 / 255 , 104 / 255 > ]
    [ 450 / 501 color rgb < 57 / 255 , 60 / 255 , 95 / 255 > ]
    [ 501 / 501 color rgb < 44 / 255 , 48 / 255 , 85 / 255 > ]
}

// From
// http://www.astrosurf.org/lombry/Documents/livange-24mai2004.jpg
// http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_06 = color_map {
    [ 0 / 695 color rgb < 120 / 255 , 76 / 255 , 67 / 255 > ]
    [ 20 / 695 color rgb < 160 / 255 , 92 / 255 , 73 / 255 > ]
    [ 40 / 695 color rgb < 181 / 255 , 128 / 255 , 99 / 255 > ]
    [ 50 / 695 color rgb < 183 / 255 , 138 / 255 , 107 / 255 > ]
    [ 75 / 695 color rgb < 184 / 255 , 159 / 255 , 139 / 255 > ]
    [ 100 / 695 color rgb < 179 / 255 , 175 / 255 , 171 / 255 > ]
    [ 125 / 695 color rgb < 166 / 255 , 173 / 255 , 180 / 255 > ]
    [ 150 / 695 color rgb < 145 / 255 , 163 / 255 , 179 / 255 > ]
    [ 200 / 695 color rgb < 117 / 255 , 141 / 255 , 177 / 255 > ]
    [ 250 / 695 color rgb < 92 / 255 , 119 / 255 , 162 / 255 > ]
    [ 300 / 695 color rgb < 80 / 255 , 107 / 255 , 150 / 255 > ]
    [ 350 / 695 color rgb < 68 / 255 , 95 / 255 , 142 / 255 > ]
    [ 400 / 695 color rgb < 58 / 255 , 85 / 255 , 132 / 255 > ]
    [ 450 / 695 color rgb < 53 / 255 , 75 / 255 , 124 / 255 > ]
    [ 500 / 695 color rgb < 48 / 255 , 71 / 255 , 115 / 255 > ]
    [ 550 / 695 color rgb < 46 / 255 , 64 / 255 , 110 / 255 > ]
    [ 600 / 695 color rgb < 45 / 255 , 60 / 255 , 101 / 255 > ]
    [ 650 / 695 color rgb < 41 / 255 , 57 / 255 , 90 / 255 > ]
    [ 695 / 695 color rgb < 43 / 255 , 53 / 255 , 88 / 255 > ]
}

// From
// http://www.astrosurf.org/lombry/Images/sunset-pinatubo-nasaterra.jpg
// http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_07 = color_map {
    [ 1 / 403 color rgb < 215 / 255 , 145 / 255 , 13 / 255 > ]
    [ 14 / 403 color rgb < 219 / 255 , 161 / 255 , 35 / 255 > ]
    [ 24 / 403 color rgb < 218 / 255 , 156 / 255 , 53 / 255 > ]
    [ 43 / 403 color rgb < 218 / 255 , 132 / 255 , 83 / 255 > ]
    [ 55 / 403 color rgb < 217 / 255 , 118 / 255 , 95 / 255 > ]
    [ 67 / 403 color rgb < 208 / 255 , 103 / 255 , 99 / 255 > ]
    [ 75 / 403 color rgb < 196 / 255 , 96 / 255 , 104 / 255 > ]
    [ 100 / 403 color rgb < 151 / 255 , 71 / 255 , 98 / 255 > ]
    [ 125 / 403 color rgb < 114 / 255 , 49 / 255 , 91 / 255 > ]
    [ 150 / 403 color rgb < 84 / 255 , 33 / 255 , 76 / 255 > ]
    [ 175 / 403 color rgb < 60 / 255 , 26 / 255 , 63 / 255 > ]
    [ 200 / 403 color rgb < 41 / 255 , 17 / 255 , 49 / 255 > ]
    [ 250 / 403 color rgb < 23 / 255 , 9 / 255 , 32 / 255 > ]
    [ 300 / 403 color rgb < 15 / 255 , 7 / 255 , 22 / 255 > ]
    [ 350 / 403 color rgb < 12 / 255 , 6 / 255 , 18 / 255 > ]
    [ 401 / 403 color rgb < 11 / 255 , 10 / 255 , 16 / 255 > ]
}

// From
// http://www.astrosurf.org/lombry/Images/conjonction-sunset-astroarts.jpg
// http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_08 = color_map {
    [ 0 / 498 color rgb < 249 / 255 , 112 / 255 , 76 / 255 > ]
    [ 4 / 498 color rgb < 254 / 255 , 127 / 255 , 82 / 255 > ]
    [ 24 / 498 color rgb < 255 / 255 , 161 / 255 , 105 / 255 > ]
    [ 25 / 498 color rgb < 255 / 255 , 162 / 255 , 105 / 255 > ]
    [ 50 / 498 color rgb < 255 / 255 , 182 / 255 , 127 / 255 > ]
    [ 64 / 498 color rgb < 253 / 255 , 182 / 255 , 136 / 255 > ]
    [ 90 / 498 color rgb < 230 / 255 , 185 / 255 , 152 / 255 > ]
    [ 111 / 498 color rgb < 209 / 255 , 177 / 255 , 162 / 255 > ]
    [ 150 / 498 color rgb < 162 / 255 , 152 / 255 , 160 / 255 > ]
    [ 200 / 498 color rgb < 115 / 255 , 121 / 255 , 155 / 255 > ]
    [ 250 / 498 color rgb < 86 / 255 , 94 / 255 , 140 / 255 > ]
    [ 300 / 498 color rgb < 64 / 255 , 70 / 255 , 118 / 255 > ]
    [ 350 / 498 color rgb < 50 / 255 , 54 / 255 , 102 / 255 > ]
    [ 400 / 498 color rgb < 38 / 255 , 42 / 255 , 89 / 255 > ]
    [ 450 / 498 color rgb < 31 / 255 , 34 / 255 , 77 / 255 > ]
    [ 497 / 498 color rgb < 26 / 255 , 28 / 255 , 69 / 255 > ]
}

// From
// http://www.astrosurf.org/lombry/Documents/sunset-moon-georgia-eric-jordan.jpg
// http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_09 = color_map {
    [ 0 / 541 color rgb < 245 / 255 , 94 / 255 , 25 / 255 > ]
    [ 13 / 541 color rgb < 246 / 255 , 131 / 255 , 53 / 255 > ]
    [ 25 / 541 color rgb < 246 / 255 , 145 / 255 , 65 / 255 > ]
    [ 50 / 541 color rgb < 246 / 255 , 168 / 255 , 101 / 255 > ]
    [ 75 / 541 color rgb < 246 / 255 , 175 / 255 , 128 / 255 > ]
    [ 100 / 541 color rgb < 246 / 255 , 175 / 255 , 148 / 255 > ]
    [ 125 / 541 color rgb < 237 / 255 , 164 / 255 , 161 / 255 > ]
    [ 150 / 541 color rgb < 210 / 255 , 155 / 255 , 167 / 255 > ]
    [ 200 / 541 color rgb < 154 / 255 , 128 / 255 , 170 / 255 > ]
    [ 250 / 541 color rgb < 103 / 255 , 98 / 255 , 156 / 255 > ]
    [ 300 / 541 color rgb < 66 / 255 , 71 / 255 , 135 / 255 > ]
    [ 350 / 541 color rgb < 43 / 255 , 48 / 255 , 113 / 255 > ]
    [ 400 / 541 color rgb < 23 / 255 , 29 / 255 , 92 / 255 > ]
    [ 450 / 541 color rgb < 11 / 255 , 16 / 255 , 71 / 255 > ]
    [ 500 / 541 color rgb < 10 / 255 , 9 / 255 , 51 / 255 > ]
    [ 534 / 541 color rgb < 10 / 255 , 9 / 255 , 47 / 255 > ]
    [ 539 / 541 color rgb < 4 / 255 , 18 / 255 , 47 / 255 > ]
}

// From
// http://www.astrosurf.org/lombry/Documents/sunset-bettembourg.jpg
// http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_10 = color_map {
    [ 0 / 506 color rgb < 106 / 255 , 83 / 255 , 91 / 255 > ]
    [ 25 / 506 color rgb < 123 / 255 , 84 / 255 , 87 / 255 > ]
    [ 50 / 506 color rgb < 134 / 255 , 85 / 255 , 88 / 255 > ]
    [ 100 / 506 color rgb < 171 / 255 , 91 / 255 , 80 / 255 > ]
    [ 150 / 506 color rgb < 200 / 255 , 104 / 255 , 79 / 255 > ]
    [ 200 / 506 color rgb < 220 / 255 , 118 / 255 , 80 / 255 > ]
    [ 250 / 506 color rgb < 230 / 255 , 129 / 255 , 83 / 255 > ]
    [ 300 / 506 color rgb < 234 / 255 , 137 / 255 , 82 / 255 > ]
    [ 350 / 506 color rgb < 234 / 255 , 153 / 255 , 90 / 255 > ]
    [ 400 / 506 color rgb < 234 / 255 , 159 / 255 , 101 / 255 > ]
    [ 450 / 506 color rgb < 232 / 255 , 167 / 255 , 111 / 255 > ]
    [ 506 / 506 color rgb < 229 / 255 , 171 / 255 , 123 / 255 > ]
}

// From
// http://www.astrosurf.org/lombry/Images/sunset-ocean-poirier.jpg
// http://www.astrosurf.org/lombry/cielbleu-images.htm
#declare cm_realsky_11 = color_map {
    [ 0 / 225 color rgb < 249 / 255 , 230 / 255 , 138 / 255 > ]
    [ 12 / 225 color rgb < 249 / 255 , 238 / 255 , 174 / 255 > ]
    [ 16 / 225 color rgb < 249 / 255 , 240 / 255 , 185 / 255 > ]
    [ 21 / 225 color rgb < 249 / 255 , 237 / 255 , 199 / 255 > ]
    [ 24 / 225 color rgb < 249 / 255 , 234 / 255 , 205 / 255 > ]
    [ 25 / 225 color rgb < 249 / 255 , 233 / 255 , 208 / 255 > ]
    [ 37 / 225 color rgb < 240 / 255 , 220 / 255 , 213 / 255 > ]
    [ 50 / 225 color rgb < 225 / 255 , 203 / 255 , 216 / 255 > ]
    [ 75 / 225 color rgb < 183 / 255 , 175 / 255 , 212 / 255 > ]
    [ 100 / 225 color rgb < 151 / 255 , 151 / 255 , 201 / 255 > ]
    [ 125 / 225 color rgb < 124 / 255 , 133 / 255 , 190 / 255 > ]
    [ 150 / 225 color rgb < 103 / 255 , 115 / 255 , 175 / 255 > ]
    [ 175 / 225 color rgb < 82 / 255 , 99 / 255 , 168 / 255 > ]
    [ 200 / 225 color rgb < 67 / 255 , 82 / 255 , 149 / 255 > ]
    [ 225 / 225 color rgb < 55 / 255 , 70 / 255 , 137 / 255 > ]
}

// From
// http://www.aboututila.com/Photos/AdamLaverty/Sunset-Cays-Dory.JPG
// http://www.aboututila.com/PhotoGallery/Tropical-Island-Sunset-01.htm
#declare cm_realsky_12 = color_map {
    [ 0 / 540 color rgb < 126 / 255 , 85 / 255 , 63 / 255 > ]
    [ 25 / 540 color rgb < 139 / 255 , 92 / 255 , 62 / 255 > ]
    [ 50 / 540 color rgb < 160 / 255 , 106 / 255 , 59 / 255 > ]
    [ 75 / 540 color rgb < 173 / 255 , 119 / 255 , 59 / 255 > ]
    [ 100 / 540 color rgb < 178 / 255 , 130 / 255 , 63 / 255 > ]
    [ 150 / 540 color rgb < 185 / 255 , 144 / 255 , 78 / 255 > ]
    [ 200 / 540 color rgb < 188 / 255 , 154 / 255 , 92 / 255 > ]
    [ 250 / 540 color rgb < 186 / 255 , 160 / 255 , 105 / 255 > ]
    [ 300 / 540 color rgb < 183 / 255 , 162 / 255 , 114 / 255 > ]
    [ 325 / 540 color rgb < 181 / 255 , 162 / 255 , 119 / 255 > ]
    [ 350 / 540 color rgb < 176 / 255 , 162 / 255 , 122 / 255 > ]
    [ 400 / 540 color rgb < 171 / 255 , 161 / 255 , 130 / 255 > ]
    [ 450 / 540 color rgb < 169 / 255 , 158 / 255 , 134 / 255 > ]
    [ 500 / 540 color rgb < 164 / 255 , 156 / 255 , 137 / 255 > ]
    [ 540 / 540 color rgb < 157 / 255 , 151 / 255 , 137 / 255 > ]
}

// From
// http://www.aboututila.com/Photos/AdamLaverty/Sunset-Cays-Dory.JPG
// http://www.aboututila.com/PhotoGallery/Tropical-Island-Sunset-01.htm
#declare cm_realsky_12b = color_map {
    [ 0 / 553 color rgb < 196 / 255 , 99 / 255 , 48 / 255 > ]
    [ 34 / 553 color rgb < 225 / 255 , 115 / 255 , 47 / 255 > ]
    [ 50 / 553 color rgb < 249 / 255 , 137 / 255 , 45 / 255 > ]
    [ 75 / 553 color rgb < 252 / 255 , 157 / 255 , 48 / 255 > ]
    [ 100 / 553 color rgb < 252 / 255 , 161 / 255 , 54 / 255 > ]
    [ 150 / 553 color rgb < 252 / 255 , 174 / 255 , 72 / 255 > ]
    [ 200 / 553 color rgb < 247 / 255 , 182 / 255 , 87 / 255 > ]
    [ 250 / 553 color rgb < 238 / 255 , 186 / 255 , 103 / 255 > ]
    [ 300 / 553 color rgb < 226 / 255 , 186 / 255 , 117 / 255 > ]
    [ 350 / 553 color rgb < 219 / 255 , 183 / 255 , 127 / 255 > ]
    [ 400 / 553 color rgb < 210 / 255 , 182 / 255 , 135 / 255 > ]
    [ 450 / 553 color rgb < 204 / 255 , 179 / 255 , 142 / 255 > ]
    [ 500 / 553 color rgb < 198 / 255 , 177 / 255 , 145 / 255 > ]
    [ 553 / 553 color rgb < 187 / 255 , 171 / 255 , 146 / 255 > ]
}

// From 
// http://www.eddymyers.com/properties/images/Sunset-Point-sunset/750/Sunset%2008.jpg
// http://www.eddymyers.com/properties/sunset-point-205-sunset.htm
#declare cm_realsky_13 = color_map {
    [ 0 / 249 color rgb < 227 / 255 , 122 / 255 , 90 / 255 > ]
    [ 25 / 249 color rgb < 244 / 255 , 130 / 255 , 94 / 255 > ]
    [ 50 / 249 color rgb < 252 / 255 , 143 / 255 , 97 / 255 > ]
    [ 75 / 249 color rgb < 253 / 255 , 157 / 255 , 103 / 255 > ]
    [ 100 / 249 color rgb < 253 / 255 , 174 / 255 , 114 / 255 > ]
    [ 125 / 249 color rgb < 253 / 255 , 182 / 255 , 123 / 255 > ]
    [ 150 / 249 color rgb < 253 / 255 , 188 / 255 , 136 / 255 > ]
    [ 175 / 249 color rgb < 253 / 255 , 193 / 255 , 141 / 255 > ]
    [ 200 / 249 color rgb < 249 / 255 , 197 / 255 , 150 / 255 > ]
    [ 225 / 249 color rgb < 245 / 255 , 198 / 255 , 157 / 255 > ]
    [ 249 / 249 color rgb < 246 / 255 , 204 / 255 , 166 / 255 > ]
}

// Create Pigments

#declare p_realsky_01 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_01 }
}

#declare p_realsky_02 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_02 }
}

#declare p_realsky_03 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_03 }
}

#declare p_realsky_04 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_04 }
}

#declare p_realsky_05 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_05 }
}

#declare p_realsky_06 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_06 }
}

#declare p_realsky_07 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_07 }
}

#declare p_realsky_08 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_08 }
}

#declare p_realsky_09 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_09 }
}

#declare p_realsky_10 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_10 }
}

#declare p_realsky_11 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_11 }
}

#declare p_realsky_12 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_12 }
}

#declare p_realsky_12b = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_12b }
}

#declare p_realsky_13 = pigment {
    function { max(min(y,1),0) } color_map { cm_realsky_13 }
}

// Create Sky Spheres
#declare sky_realsky_01  = sky_sphere { pigment { p_realsky_01 } scale 1/2 }
#declare sky_realsky_02  = sky_sphere { pigment { p_realsky_02 } scale 1/2 }
#declare sky_realsky_03  = sky_sphere { pigment { p_realsky_03 } scale 1/2 }
#declare sky_realsky_04  = sky_sphere { pigment { p_realsky_04 } scale 1/2 }
#declare sky_realsky_05  = sky_sphere { pigment { p_realsky_05 } scale 1/2 }
#declare sky_realsky_06  = sky_sphere { pigment { p_realsky_06 } scale 1/2 }
#declare sky_realsky_07  = sky_sphere { pigment { p_realsky_07 } scale 1/2 }
#declare sky_realsky_08  = sky_sphere { pigment { p_realsky_08 } scale 1/2 }
#declare sky_realsky_09  = sky_sphere { pigment { p_realsky_09 } scale 1/2 }
#declare sky_realsky_10  = sky_sphere { pigment { p_realsky_10 } scale 1/2 }
#declare sky_realsky_11  = sky_sphere { pigment { p_realsky_11 } scale 1/2 }
#declare sky_realsky_12  = sky_sphere { pigment { p_realsky_12 } scale 1/2 }
#declare sky_realsky_12b = sky_sphere { pigment { p_realsky_12b } scale 1/2 }
#declare sky_realsky_13  = sky_sphere { pigment { p_realsky_13 } scale 1/2 }

#version Realskies_Inc_Temp;
#end
