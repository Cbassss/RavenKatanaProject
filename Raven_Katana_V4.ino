int rLed=5;
int bLed=3;
int gLed=11;
// setting up the lights
int L6=255;
int L5=250;
int L4=200;
int L3=150;
int L2=100;
int L1=50;

int R6=135;
int R5=130;
int R4=100;
int R3=90;
int R2=60;
int R1=30;
// Above the R# and L# are to make the led strobe

//int WT=200;
// How long to wait in between cycles


int clickPin=6;
int LEDs=0;
int clickN;
int clickO;
int wT=50;
// setting up the button

int W=150;
// the delay before the light changes color (how fast the light pulses)

void setup() {
  // put your setup code here, to run once:
pinMode(rLed,OUTPUT);
pinMode(bLed,OUTPUT);
pinMode(gLed,OUTPUT);
// setting up the lights (to make them shine brightly) 

pinMode(clickPin,INPUT);
digitalWrite(clickPin,HIGH);

// setting up the button

Serial.begin(9600);
// starting the serial moniter (helps me see if there is a problem with my code)

}

void loop() {
  // put your main code here, to run repeatedly:
  
   clickN=digitalRead(clickPin);
  if(clickO==0 && clickN == 1){
    // When clicked
    
    LEDs=1;
      while(LEDs==1){

// Above: when the button is clicked. Below: what happens when the button is clicked      

// FIX THIS v v v v v v v
        analogWrite(rLed,R5);
        analogWrite(bLed,L6);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        analogWrite(rLed,R4);
        analogWrite(bLed,L5);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W); 
        analogWrite(rLed,R3);
        analogWrite(bLed,L4);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        analogWrite(rLed,R2);
        analogWrite(bLed,L3);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        analogWrite(rLed,R1);
        analogWrite(bLed,L2);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        analogWrite(rLed,R2);
        analogWrite(bLed,L3);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        analogWrite(rLed,R3);
        analogWrite(bLed,L4);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        analogWrite(rLed,R4);
        analogWrite(bLed,L5);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        analogWrite(rLed,R5);
        analogWrite(bLed,L6);
        analogWrite(gLed,0);
        
        if(clickO==0 && clickN==1){
          LEDs=0;
        }
        delay(W);
        Serial.println("DONE");
        

        //clickN=digitalRead(clickPin);
        //reading to see if the button is clicked or to repeat it
      }

      
      // Below: when the button is clicked
      if(LEDs==0){
          analogWrite(rLed,0);
          analogWrite(bLed,0);
          analogWrite(gLed,0);
         }
   //}
   
    //else{
     // while(clickN==0){
        // Above: when the button is clicked a second time. Below: what to do when the button is clicked a second time

        //clickN=digitalRead(clickPin);
        //reading if the button is clicked
        
           // if(clickN==0){
           //   LEDs=0;
           //  }
     
         //}

      //Below: reseting everything
 
       }
    }
    
//  clickO=clickN;
//  delay(wT);

}
