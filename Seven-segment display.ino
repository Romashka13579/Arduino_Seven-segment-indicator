#define Pin1 7
#define Pin2 6
#define Pin3 5
#define Pin4 4
#define Pin5 2
#define Pin6 12
#define Pin7 10
#define Pin8 1
#define Pin9 8
#define Pin10 3

void setup () {

  pinMode (Pin10,OUTPUT);
 pinMode (Pin1,OUTPUT);
  pinMode (Pin2,OUTPUT); 
  pinMode (Pin3,OUTPUT);
   pinMode (Pin4,OUTPUT);
    pinMode (Pin5,OUTPUT);
     pinMode (Pin6,OUTPUT);
      pinMode (Pin7,OUTPUT);
     pinMode (Pin8,OUTPUT);
     pinMode (Pin9,OUTPUT);
  
}

void loop () {
  
while (true){
digitalWrite(Pin1,LOW);
digitalWrite(Pin2,LOW);
digitalWrite(Pin3,LOW);
digitalWrite(Pin4,HIGH);
digitalWrite(Pin5,LOW);
digitalWrite(Pin6,LOW);
digitalWrite(Pin7,LOW);
digitalWrite(Pin8,HIGH);
digitalWrite(Pin9,LOW);
digitalWrite(Pin10,LOW);
millis();




}
}