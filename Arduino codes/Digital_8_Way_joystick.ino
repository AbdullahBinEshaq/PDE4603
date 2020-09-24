//variables created and linked to pin numbers
int leftpin = 4;
int rightpin = 5;
int uppin = 6;
int downpin = 7;

//variables created to store the value of the pin states
/*int leftvalue =0;
int rightvalue = 0;
int upvalue = 0;
int downvalue = 0;*/

//varable control of joystick
int lefttimer = 0;
int righttimer = 0;
int uptimer = 0;
int downtimer =0;

void setup() {
  // start the serial monitor:
  Serial.begin(9600);

  // setup the pins as inputs and pulled up, which makes them high when not pressed and low when pressed.
  pinMode(leftpin,INPUT_PULLUP);
  pinMode(rightpin,INPUT_PULLUP);
  pinMode(uppin,INPUT_PULLUP);
  pinMode(downpin,INPUT_PULLUP);
}

void loop() {
  // read the state of each pin and save it to the corresponding variable:
  /*leftvalue = digitalRead(leftpin);
  rightvalue = digitalRead(rightpin);
  upvalue = digitalRead(uppin);
  downvalue = digitalRead(downpin);*/

  // print the states of all 4 directions, for setup and troubleshooting
  Serial.print(leftvalue);
  Serial.print(" left ");
  Serial.print(rightvalue);
  Serial.print(" right ");
  Serial.print(upvalue);
  Serial.print(" up ");
  Serial.print(downvalue);
  Serial.print(" down ");
  Serial.println();
  delay(500);

  // print the directions beingactivated by the joystick
  /*if(leftpin == LOW){
    Serial.print("Move Left");}
   if(rightpin == LOW){
    Serial.print("Move Right");}
   if(uppin == LOW){
    Serial.print("Move Up");}
   if(downpin == LOW){
    Serial.print("Move Down");}
   dealy(50);

  // variability added, via a timerfor each direction. As timer increases, speed will increase in that direction
  if(leftvalue == LOW){
    Serial.print("Move Left");
    Serial.println(lefttimer);
    lefttimer = lefttimer + 1;}
  if(rightvalue == LOW){
    Serial.print("Move Right");
    Serial.println(righttimer);
    righttimer = righttimer + 1;}
  if(upvalue == LOW){
    Serial.print("Move Up");
    Serial.println(uptimer);
    uptimer = uptimer + 1;}
  if(downvalue == LOW){
    Serial.print("Move Down");
    Serial.println(downtimer);
    downtimer = downtimer + 1;}
  delay(500);

  // reset the timer and scaling factor, every time the joystick returns to neutral from a particular direction
  if(leftvalue == HIGH){lefttimer = 0;}
  if(rightvalue == HIGH){righttimer = 0;}
  if(upvalue == HIGH){uptimer = 0;}
  if(downvalue == HIGH){downtimer = 0;}
  
}
