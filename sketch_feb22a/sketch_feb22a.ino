#define E1 5
#define E2 6
#define M1 4
#define M2 7

void setup() {
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);

}

void loop() {
  analogWrite(E1, 150);
  digitalWrite(M1, HIGH);
  analogWrite(E2, 150);
  digitalWrite(M2, HIGH);
  delay(1000);
  analogWrite(E1, 0);
  digitalWrite(M1, LOW);
  analogWrite(E2, 0);
  digitalWrite(M2, LOW);
  delay(1000);
//    void roma(int  a, int b);{
//  analogWrite(E1, a);
//  digitalWrite(M1, HIGH);
//  analogWrite(E2, b);
//  digitalWrite(M2, HIGH);
//  delay(1000);
//}
//roma(100,100);  
}
