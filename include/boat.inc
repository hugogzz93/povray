// Persistence of Vision Ray Tracer Scene Description File
// File: sun_on_boat.pov
// Vers: 3.1
// Desc:This is my first pov image. I've had it 2 days 
// Date:05/03/99 
// Auth:Josh Ellis----fishnfun@earthlink.net 


global_settings { assumed_gamma 2.0 }
#include "colors.inc"
#include "skies.inc"
#include "glass.inc"






sphere
{ <6, 17, 70>, 2
  texture{
  pigment {color Yellow}
  finish {ambient .8 diffuse .6}
  }
}


      
    
plane { <0,1,0>,-1
        texture {
        pigment {color Blue}           
        normal {bumps 1.0 scale .5}
    finish {reflection 0.4 ambient 0.2 diffuse 0.5} } }
                                                       
                                                        

                                                   


#declare Post = difference{
cylinder{z*-0.05,z*0.05,2.1}
cylinder{z*-0.2,z*0.2,1.95}
pigment {color Yellow}
scale<2.5,1.25,1>
clipped_by{sphere{0,20 inverse translate<1,19.1,0>}}
}


#declare Prow = union{

#declare Count = 0;
#declare Radius = 1;
#declare Angle = 0;
#declare SphRad = .01;


#while(Count<140)

        
#declare Count = Count +1;
#declare Angle = Angle + 5;
#declare SphRad = SphRad + 0.03;
#declare Radius =  Radius +Radius;

#end        
rotate x*180
}


#declare Prow2 = union{

#declare Count = 0;
#declare Radius = 100;
#declare Angle = 280;
#declare SphRad = 4.2;

#while(Count<40)


        
#declare Count = Count +1;
#declare Angle = Angle + 1;
#declare SphRad = SphRad + 0.03;


#end        
rotate x*180
}


#declare FProw = union{
        object{Prow
                pigment {color White}
                scale 0.025
                rotate z*35 
                
        }

        object{Prow2
                pigment {color White}
                scale 0.025 
                translate<-1.8495,0.15,0>        
        }
        
        
        translate <4.85,1,0>       
}

 
#declare Bsphere = difference{
        sphere{0,2}
        sphere{0,1.95}
        }
#declare BtShape = union{
 object{Bsphere
        pigment {color White}
        scale <2.5,1.25,1>
        clipped_by{sphere{0,20 inverse translate<1,18,0>}}
        }
        
   object{Bsphere
        scale <2.5,1.25,1>
        clipped_by{sphere{0,20 inverse translate<1,18.2,0>}}
        clipped_by{sphere{0,20 translate<1,18,0>}}
        pigment {color Red}
        scale 1.01
        }       
       
   object{Bsphere
        scale <2.5,1.25,1>
        clipped_by{sphere{0,20 inverse translate<1,18.4,0>}}
        clipped_by{sphere{0,20 translate<1,18.2,0>}}
        pigment {color Red}
        scale 1.02
        }
        
              
   object{Bsphere
        scale <2.5,1.25,1>
        clipped_by{sphere{0,20 inverse translate<1,18.6,0>}}
        clipped_by{sphere{0,20 translate<1,18.4,0>}}
        pigment {color White}
        scale 1.03
        }       
         
   object{Bsphere
        scale <2.5,1.25,1>
        clipped_by{sphere{0,20 inverse translate<1,18.8,0>}}
        clipped_by{sphere{0,20 translate<1,18.6,0>}} 
        pigment {color White}
        scale 1.04
        }
      
  object{Bsphere
        scale <2.5,1.25,1>
        clipped_by{sphere{0,20 inverse translate<1,19,0>}}
        clipped_by{sphere{0,20 translate<1,18.8,0>}}
        pigment {color White}
        scale 1.05
        }                    
 }          

 
#declare boat = union{        
object{BtShape clipped_by{plane{z,-0.4 }}translate<0,0,.4>}
object{BtShape clipped_by{plane{z,0.4 inverse }}translate<0,0,-.4>}
object{FProw scale 0.75 rotate z*18 translate <1.4,-1.25,0>}
object{Post pigment {color White} }
rotate z*10
}




object{boat
scale 3
rotate y*120
translate<1,5,30> 
}                                            
                                                       

         
          

                                                                                                                                                 
     

       