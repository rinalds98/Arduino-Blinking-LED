  int led1 = (9);   //setting the pin number for the led
  int led2 = (10);
  int dled1 = (50); //delay for led Number 1
  int dled2 = (50); //delay for led Number 2
  int dwait = (50); //delay before blinking starts
  int fwait = (500); //delay at end of cycle

 
void setup() {
  Serial.begin(115200);
  pinMode(led1, OUTPUT);      // This sets up what pins will the arduino have to output voltage to
  pinMode(led2, OUTPUT);
  Serial.println("Welcome to my Program");
}

void loop() {

  Serial.println("Red LED");
  delay(dwait);
  
  for (int j = 1; j <= 5; j = j + 1){
    
  Serial.print("   You are on blink: ");
  Serial.println(j);
  digitalWrite(led1, HIGH);             //This blinks the first led 5 times
  delay(dled1);
  digitalWrite(led1,LOW );
  delay(dled1);
  }
  
  Serial.println(" ");
  
  Serial.println("yellow led");
  delay(dwait);
  
for (int j = 1; j <= 5; j = j + 1){
  
  Serial.print("   You are on blink: ");
  Serial.println(j);
  digitalWrite(led2, HIGH);           //This blinks the second led 5 times
  delay(dled2);
  digitalWrite(led2,LOW );
  delay(dled2);
}
  Serial.println(" ");
  delay(fwait);
}
