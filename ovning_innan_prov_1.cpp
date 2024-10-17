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


/*
//Ljusfest 30 del 2
int LED_PINS[] = {1, 2, 3};
int array_len = 3;
int antal_varv = 0;

int startid = millis();
int paus = 500;
int senast_blink = 0;

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < array_len; i++) {
    pinMode(LED_PINS[i], OUTPUT);
    digitalWrite(LED_PINS[i], LOW);
  }
}

void loop() {
  //millis i början 
  if (antal_varv == array_len) {
    antal_varv = 0;
  }

  // Uppdatera LED:en med en separat funktion
  uppdateraLED();
}

// Funktion för att hantera tidskontroll och LED-uppdatering
void uppdateraLED() {
  digitalWrite(LED_PINS[antal_varv], HIGH);
  senast_blink = millis();
  
  if (senast_blink > startid + paus) {
    digitalWrite(LED_PINS[antal_varv], LOW);
    antal_varv++;
    startid = millis();
  }
}


*/

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


/*
//Ljusfest 30 del 2
int LED_PINS[] = {1, 2, 3};
int array_len = 3;
int antal_varv = 0;

int startid = millis();
int paus = 500;
int senast_blink = 0;

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < array_len; i++) {
    pinMode(LED_PINS[i], OUTPUT);
    digitalWrite(LED_PINS[i], LOW);
  }
}

void loop() {
  //millis i början 
  if (antal_varv == array_len) {
    antal_varv = 0;
  }

  // Uppdatera LED:en med en separat funktion
  uppdateraLED();
}

// Funktion för att hantera tidskontroll och LED-uppdatering
void uppdateraLED() {
  digitalWrite(LED_PINS[antal_varv], HIGH);
  senast_blink = millis();
  
  if (senast_blink > startid + paus) {
    digitalWrite(LED_PINS[antal_varv], LOW);
    antal_varv++;
    startid = millis();
  }
}


*/


















/*
//Ljusfest 2.0 del 1
int led_pins[]={1, 2, 3};
int array_len = 3;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S2!");

  for(int i = 0; i < array_len; i++){
    pinMode(led_pins[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i <= 3; i++ ) {
    digitalWrite(led_pins[i],HIGH);
    digitalWrite(led_pins[i-1],LOW);
    delay(1000);

  }
  
  delay(100); // this speeds up the simulation
}


*/


/*
//Ljusfest 2.0 del 2
int led_pins[]={1, 2, 3};
int array_len = 3;
int i = 0; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S2!");

  for(int i = 0; i < array_len; i++){
    pinMode(led_pins[i], OUTPUT);
  }
}

void loop() {

  if(i <= array_len ){
    digitalWrite(led_pins[i],HIGH);
    digitalWrite(led_pins[i-1],LOW);
    delay(500);
    i++;
  }
  
  else{
    i = 0; 
  }


  
  delay(100); // this speeds up the simulation
}


*/
















/*
//Knappfest upg 1
#include <Arduino.h> 
const int Button_pin = 10;
int last_state = LOW;
const int lampa1 = 1; 

void setup(){
  Serial.begin(115200);
  pinMode(Button_pin, INPUT);
  pinMode(lampa1, OUTPUT);
}

void loop(){
  int state = digitalRead(Button_pin);
  if(state!= last_state){
    digitalWrite(lampa1, HIGH);
    //Serial.print(state);
    //last_state = state;
  }

  else{
    digitalWrite(lampa1, LOW);
  }
  delay(10);
  }



*/

/*
//knappfest upp 2
#include <Arduino.h> 
const int Button_pin = 10;
int btn_last_state = HIGH;
int btn_state = HIGH; 
int led_state = LOW; 

const int lampa1 = 1; 

void setup(){
  Serial.begin(115200);
  pinMode(Button_pin, INPUT);
  pinMode(lampa1, OUTPUT);
}

void loop(){
int btn_state = digitalRead(Button_pin);
if(btn_state!= btn_last_state && led_state == LOW){
  digitalWrite(lampa1, HIGH);
  led_state = HIGH;
  btn_state= btn_last_state;
}
  
if(btn_state!= btn_last_state && led_state == HIGH){
  digitalWrite(lampa1, LOW);
  led_state = LOW;
  btn_state= btn_last_state;

}

  
  delay(10);
  }



*/

/*
//knapp fest 2.0 bättre version
#include <Arduino.h> 
const int Button_pin = 10;
int btn_last_state = HIGH;
int btn_state = HIGH; 
int led_state = LOW; 
const int lampa1 = 1; 

void setup(){
  Serial.begin(115200);
  pinMode(Button_pin, INPUT);
  pinMode(lampa1, OUTPUT);
}

void loop(){
  btn_state = digitalRead(Button_pin);
  if(btn_state!= btn_last_state){
    if(btn_state==LOW){
      led_state = !led_state;
      digitalWrite(lampa1, led_state);
    }
    btn_last_state = btn_state;

  }
  delay(10);
}

*/





/*
//Knappfest 2.0 mellis debouncing
#include <Arduino.h> 
const int Button_pin = 10;
int btn_last_state = HIGH;
int btn_state = HIGH; 
int led_state = LOW; 
const int lampa1 = 1;

int paus = 50;//ny
int första_millis = millis(); //ny

void setup(){
  Serial.begin(115200);
  pinMode(Button_pin, INPUT);
  pinMode(lampa1, OUTPUT);
}

void loop(){
  //millis
  

  btn_state = digitalRead(Button_pin);

  int ny_millis = millis();//ny

  if(ny_millis - första_millis >= paus){// ny

    int btn_state2 = digitalRead(Button_pin); //ny
    if(btn_state2 == btn_state){//ny

      if(btn_state!= btn_last_state){
    if(btn_state==LOW){
      led_state = !led_state;
      digitalWrite(lampa1, led_state);
    }
    btn_last_state = btn_state;

  }

    }

    

  }
  
  delay(10);
}


//läs av
// paus --> om millis + paus < ny millis 
// läs av igen och om ny avläsning = btn state --> kör koden 


*/












