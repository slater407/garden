void setup() {
    Serial.begin(9600);
}

 
void loop() {
    int moisture_1 = analogRead(A0);
    // int moisture_2 = analogRead(A1);

    String sensorOne = "Sensor 1 value: ";
    String sensorOneValue = sensorOne + moisture_1;

//    String sensorTwo = "Sensor 2 value: ";
//    String sensorTwoValue = sensorTwo + moisture_2;
 
    Serial.println(sensorOneValue);
 
    delay(5000);

//    Serial.println(sensorTwoValue);
//
//    delay(10000);
}
