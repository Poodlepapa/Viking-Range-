#include <FastLED.h>
#define WW CRGB(215,200,25)
#define RR CRGB(225,0,0)
#define RightSide         (&leds[0], 4, color)
#define RightFront        (&leds[4], 4, color)
#define RightCenter       (&leds[8], 4, color)
#define RightRear         (&leds[12], 4, color);
#define CenterRightGap    (&leds[16], 6, color);
#define CenterFront       (&leds[22], 4, color);
#define CenterCenter      (&leds[26], 4, color);
#define CenterRear        (&leds[30], 4, color);
#define OvenCenterGap     (&leds[34], 1, color);
#define Oven              (&leds[35], 4, color);
#define Broil             (&leds[35], 4, color);
#define OvenLeftGap       (&leds[39], 1, color);
#define LeftFront         (&leds[40], 4, color);
#define LeftCenter        (&leds[44], 4, color);
#define LeftRear          (&leds[48], 4, color);
#define LeftSide          (&leds[52], 4, color);

const int numLeds = 55;
const byte RightF = 2;     // pin number of the burner relay
const byte RightR = 3; // pin number of the burner relay
const byte CenterF = 4;
const byte CenterR = 5;
const byte OvenPIN = 6;
//const byte BroilPIN = 7;
const byte LeftF = 8;
const byte LeftR = 9;
const byte dataPin = 10;
const byte AllWhite = 11;

CRGB leds[numLeds];

void setup()
{
  FastLED.addLeds<WS2812B, dataPin, GRB>(leds, numLeds);

  // initialize the pushbutton pin as an input:
  pinMode(RightF, INPUT_PULLUP);  // setting burner locations to pullup
  pinMode(RightR, INPUT_PULLUP);
  pinMode(CenterF, INPUT_PULLUP);
  pinMode(CenterR, INPUT_PULLUP);
  pinMode(OvenPIN, INPUT_PULLUP);
  //pinMode(BroilPIN, INPUT_PULLUP);
  pinMode(LeftF, INPUT_PULLUP);
  pinMode(LeftR, INPUT_PULLUP);
  pinMode(AllWhite, INPUT_PULLUP);
}

void loop()
{
  byte buttonState1;
  byte buttonState2;
  byte buttonState3;
  byte buttonState4;
  byte buttonState5;
  byte buttonState6;
  byte buttonState7;
  byte buttonState8;
  byte buttonState9;
  byte buttonState11;

  CRGB color;

  // read the state of the pushbutton value:
  buttonState1 = digitalRead(RightF);
  buttonState2 = digitalRead(RightR);
  buttonState3 = digitalRead(CenterF);
  buttonState4 = digitalRead(CenterR);
  buttonState5 = digitalRead(OvenPIN);
  //buttonState6 = digitalRead(BroilPIN);
  buttonState7 = digitalRead(LeftF);
  buttonState8 = digitalRead(LeftR);
  buttonState9 = digitalRead(AllWhite);
  // check if the pushbutton is pressed. If it is, the buttonState is LOW:
  if (buttonState1 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid RightFront;

  if (buttonState2 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid RightRear;

  if (buttonState3 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid CenterFront;

  if (buttonState4 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid CenterRear;

  if (buttonState5 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid Oven;

  if (buttonState6 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  //fill_solid Broil;

  if (buttonState7 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid LeftFront;

  if (buttonState8 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid LeftRear;

  if (buttonState9 == LOW)
  {
    color = RR;
  }
  else
  {
    color = WW;
  }

  fill_solid RightSide;
  fill_solid RightCenter;
  fill_solid CenterRightGap;
  fill_solid CenterCenter;
  fill_solid OvenCenterGap;
  fill_solid OvenLeftGap;
  fill_solid LeftCenter;
  fill_solid LeftSide;

  FastLED.show();
}
