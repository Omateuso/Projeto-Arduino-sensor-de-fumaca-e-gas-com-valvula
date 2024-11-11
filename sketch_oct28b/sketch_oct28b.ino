
#define PinSensor A0
#define Relay 8
bool valvula = false;

int LeituraSensor;


void setup() {
  
Serial.begin(9600);
pinMode(PinSensor, INPUT);
pinMode(Relay, OUTPUT);

}

void loop() {
  
  LeituraSensor = analogRead(PinSensor); 
  Serial.println(LeituraSensor);

 if(LeituraSensor >= 800) 
 {
   valvula = true;       
  }
 else
 {
  valvula = false;
  }

 digitalWrite(Relay, valvula);
 delay(100); //100 milisegundos, 0,1 de um segundo.
 
}

