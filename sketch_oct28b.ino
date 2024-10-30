
//#define PinSensor A0
//boolean valvula = false;
//Como que não tem as peças por enquanto, isso e meio que o esqueleto do programa, tambem tem que se alterar os valores do sensor depois que receber, ja que estes são valores exemplos e não foram testados ainda.
//Ou seja, precisa se fazer primeiro a calibração do sensor de fumaça, que sera +- o codigo abaixo
//void setup() {
//  Serial.begin(9600); //Inicializa a comunicação serial
//}
//void loop() {
//  int sensorValue = analogRead(A0); //Realiza a leitura do sensor
//  Serial.print("Leitura do sensor MQ-2: ");
//  Serial.println(sensorValue); //Imprime no monitor serial o valor lido
//  delay(100); //Intervalo de 100 milissegundos}

//A parte mais dificil vai ser colocar tudo junto fisicamente para ser sincero, isso e extremamente facil de fazer, admito ter um pouquinho de medo do professor achar simples de mais.
//Mais pra ser sincero Arduino e meio sem graça e não da nenhuma vontade de trabalhar com o negocio, mais pode ser problema meu com á eletrica.
//Pelo amor de deus eu do futuro, não vai achando que o codigo abaixo vai funcionar do nada.
//A coisa mais cara vai ser a fonte para ser sincero, a valvula e o relay são relativamente baratos e não tem muito problema.
//Me lembrar de procurar em casa por um relay e uma fonte para ver se tem e não precisar gastar tanto dinheiro.


int LeituraSensor;


void setup() {
  
Serial.begin(9600);
pinMode(PinSensor, INPUT);

}

void loop() {
  

  LeituraSensor = analogRead(PinSensor); 

 if(LeituraSensor >= 200) 
 {
   valvula = true;       
  }
 
 else(LeituraSensor < 200)
 {
  valvula = false;

  }
 delay(3000); //3 segundos

}

