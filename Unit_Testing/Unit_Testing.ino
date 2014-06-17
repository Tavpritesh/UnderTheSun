
#include <LiquidCrystal.h>; 
//////////////  Outputs  ///////////////////
const int Rpin=7;
const int Gpin=8;
const int Bpin=9;
LiquidCrystal lcd(14,15,16,17,18,19);

///////////////  Switches  ////////////
int StartPin = 13; //the number of start switch pin
int RswPin=12;
int GswPin = 11; 
int BswPin = 10; 

//////////////  Switch-States  ///////////
int StartPinState=0;
int RswPinState=0;
int GswPinState=0;
int BswPinState=0;

/////////////  Scores  /////////////
int counter =0;
double ResponseTime = 0;
double AverageTime = 0;

/////////////  Setup  //////////////  

void setup(){
  pinMode(Gpin, OUTPUT);
  pinMode(Rpin, OUTPUT);
  pinMode(Bpin, OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  pinMode(StartPin, INPUT);
  pinMode(RswPin, INPUT);
  pinMode(GswPin, INPUT);
  pinMode(BswPin, INPUT); 
  
 
  
}

/////////////  Loop  //////////////  


void loop(){
  StartPinState=digitalRead(StartPin);
  RswPinState=digitalRead(RswPin);
  GswPinState=digitalRead(GswPin);
  BswPinState=digitalRead(BswPin);
  
  /*switch(StartPinState){
  case LOW:
  lcd.print("Duh!");
  newLine();
  break;
  
  case HIGH:
  lcd.print("Happy!");
  newLine();
  break;
  }
  */
  if(StartPinState==HIGH){
  lcd.print("Happy!");
  delay(10000);
  }
  
  if(RswPinState==HIGH){
  digitalWrite(Rpin,HIGH);
  delay (10);
  digitalWrite(Rpin,LOW);
  delay(100);
  }
  else if(GswPinState==HIGH){
  digitalWrite(Gpin,HIGH);
  delay (10);
  digitalWrite(Gpin,LOW);
  delay(100);
  }
  else if(BswPinState==HIGH){
  digitalWrite(Bpin,HIGH);
  delay (10);
  digitalWrite(Bpin,LOW);
  delay(100);
  }
  
  else{
  digitalWrite(Rpin,LOW);
  digitalWrite(Gpin,LOW);
  digitalWrite(Bpin,LOW);
  }
  
}
