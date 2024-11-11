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
  unsigned long Tempo = millis();

 if(LeituraSensor >= 680 && !valvula) 
 {
   valvula = true;       
  Serial.print("Leitura do sensor MQ-2: ");
  Serial.println(LeituraSensor);
  Serial.print(Tempo / 60000);
  Serial.print(" minutos e ");
  Serial.print((Tempo / 1000) % 60);
  Serial.print(" segundos desde o inicio da ativação");
  }
 else
 {
  valvula = false;
  }

 digitalWrite(Relay, valvula ? HIGH : LOW);
 delay(120); //120 milisegundos, 0,12 de um segundo.
 
}