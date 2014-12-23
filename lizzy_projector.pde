// Commands
// a - advance slide

int projectorPin = 10;

void setup() {
  pinMode(projectorPin, OUTPUT);
  digitalWrite(projectorPin, LOW);
  
  Serial.begin(9600);
}

void loop() {
  byte message;
  
  //If there is data available read it
  if( Serial.available() ) {
    message = Serial.read();
    //If the data is an a advance the slide
    if( message == 'a') {
        advanceSlide();
    }
    
  }
}

//send signal to projector to advance slide
void advanceSlide() {
    digitalWrite(projectorPin, HIGH);
    delay(500);
    digitalWrite(projectorPin, LOW);
    delay(500); 
}




