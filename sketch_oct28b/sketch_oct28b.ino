#define PinSensor A0
#define Relay 8
bool valvula = false;

int LeituraSensor;


void setup() {
  
Serial.begin(9600);
pinMode(PinSensor, INPUT);
pinMode(Relay, OUTPUT);

digitalWrite(Relay, LOW);
valvula = false;

}

void loop() {
  
  LeituraSensor = analogRead(PinSensor); 
  Serial.println(LeituraSensor);

 if(LeituraSensor >= 680) 
 {
   valvula = true;       
  }
 else
 {
  valvula = false;
  }

 digitalWrite(Relay, valvula ? HIGH : LOW);
 delay(100); //100 milisegundos, 0,1 de um segundo. .
 
}