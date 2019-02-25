#include <Keyboard.h>
#include <IRremote.h>

const int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;

//IR Code
#define FnMenu1 4095334238
#define FnMenu2 1784591830
#define FnUp1 3989925436
#define FnUp2 3324828148
#define FnDown1 4202515993
#define FnDown2 4266964241
#define FnLeft1 2306203763
#define FnLeft2 2370652011
#define FnRight1 2289426144
#define FnRight2 2353874392
#define FnEnter1 3557373184
#define FnEnter2 3125290565
#define FnApp1 2349803800
#define FnApp2 2414252048
#define FnHome1 977591591
#define FnHome2 1642688879
#define FnBack1 2211490820
#define FnBack2 227265932
#define FnPrevious1 4005922900
#define FnPrevious2 2021698012
#define FnPlay1 3822147934
#define FnPlay2 3157050646
#define FnNext1 1971365157
#define FnNext2 3955590045
#define FnMute1 2644579264
#define FnMute2 1979481976
#define FnVolUp1 4253287710
#define FnVolUp2 1942545302
#define FnVolDown1 490498407
#define FnVolDown2 1155595695

void setup() 
{ 
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  Keyboard.begin();
}

void loop()
{
    if (irrecv.decode(&results)) 
    {
   Serial.println(results.value);        //ir code 
   // Fn
  if (results.value==FnMenu1) {
      Serial.println("Menu");
  }
    else if (results.value==FnUp1) {
      Serial.println("Up");
    }
    else if (results.value==FnDown1) {

    }
    else if (results.value==FnLeft1) {

    }
    else if (results.value==FnRight1) {

    }
    else if (results.value==FnEnter1) {

    }
    else if (results.value==FnApp1) {

    }
    else if (results.value==FnHome1) {

    }
    else if (results.value==FnBack1) {

    }
    else if (results.value==FnPrevious1) {

    }
    else if (results.value==FnPlay1) {

    }
    else if (results.value==FnNext1) {

    }
    else if (results.value==FnMute1) {

    }
    else if (results.value==FnVolUp1) {

    }
    else if (results.value==FnVolDown1) {

    }
    else if (results.value==FnMenu2) {

    }
    else if (results.value==FnUp2) {

    }
    else if (results.value==FnDown2) {

    }
    else if (results.value==FnLeft2) {

    }
    else if (results.value==FnRight2) {

    }
    else if (results.value==FnEnter2) {

    }
    else if (results.value==FnApp2) {

    }
    else if (results.value==FnHome2) {

    }
    else if (results.value==FnBack2) {

    }
    else if (results.value==FnPrevious2) {

    }
    else if (results.value==FnPlay2) {

    }
    else if (results.value==FnNext2) {

    }
    else if (results.value==FnMute2) {

    }
    else if (results.value==FnVolUp2) {

    }
    else if (results.value==FnVolDown2) {

    }

   delay(100); 
   irrecv.resume(); // Receive the next value
    }
}
