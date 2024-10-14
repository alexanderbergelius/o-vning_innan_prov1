/*
//Ljusfest 3.0 del 1
int LED_PINS[] = {1,2,3};
int array_len = 3;
int antal_varv = 0;

int startid = millis();
int paus = 500; 
int senast_blink = 0;



void setup() {
Serial.begin(115200);
 

  for (int i = 0; i < array_len; i++){
    pinMode(LED_PINS[i], OUTPUT);
    digitalWrite(LED_PINS[i], LOW);
  }
}

void loop() {
  //millis i början 
  if (antal_varv == array_len)
  {
    antal_varv = 0;
  }


  digitalWrite(LED_PINS[antal_varv], HIGH);
  //millis senast blink
  senast_blink = millis(); 
  //delay(500); //if millis i början > senast blink + paus
  if (senast_blink > startid + paus){
    digitalWrite(LED_PINS[antal_varv], LOW);
    antal_varv++; 
    startid = millis();
    
  }


  
}
*/


