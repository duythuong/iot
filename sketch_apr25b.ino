

int rainPin = A0;

int relay = 3;

int led1 = 4;

int led2 = 5;

int thresholdValue=800;
void setup()

{


pinMode(led1, OUTPUT);

pinMode(led2, OUTPUT);

// setting the Relay pin to output

pinMode(relay, OUTPUT);


Serial.begin(9600); }


void loop()

{


int sensorValue=analogRead(rainPin);

Serial.println(sensorValue);

digitalWrite(relay, HIGH);

digitalWrite(led1, LOW);

digitalWrite(led2, HIGH);

if(sensorValue<thresholdValue) {

digitalWrite(led1, HIGH);

digitalWrite(led2, LOW);

digitalWrite(relay, LOW);

Serial.println("Watering");

delay(10);


Serial.println("Finished watering"); }

delay(10);

}
