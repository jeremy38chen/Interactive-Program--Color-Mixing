int  photoresistRed = 0,
     photoresistGreen = 0,
     photoresistBlue = 0,
     ColorRed = 0,
     ColorGreen = 0,
     ColorBlue = 0;
     
void setup() {
  // put your setup code here, to run once:
  
    Serial.begin(9600);
    pinMode(3,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    photoresistRed = analogRead(A0);
    delay(5);
    photoresistGreen = analogRead(A1);
    delay(5);
    photoresistBlue = analogRead(A2);
    delay(5);

    ColorRed = photoresistRed/4;
    ColorGreen = photoresistGreen/4;
    ColorBlue = photoresistBlue/4;

    analogWrite(3,ColorRed);
    analogWrite(5,ColorGreen);
    analogWrite(6,ColorBlue);

    Serial.print("PhotoResistRed");
    Serial.println(photoresistRed);

    Serial.print("PhotoResistGreen");
    Serial.println(photoresistGreen);

    Serial.print("PhotoResistBlue");
    Serial.println(photoresistBlue);
    
    
    Serial.print("ColorRed:");
    Serial.println(ColorRed);

    Serial.print("ColorGreen:");
    Serial.println(ColorGreen);

    Serial.print("ColorBlue:");
    Serial.println(ColorBlue);

    

    
    
    




}
