/* [p1e1] Examen Parcial I
 * Utiliza y programa tarjetas electrónicas de control
 * por: Tadeo Arellano Aldrick Victor
 * 09 MARZO 2021
*/

const int INpin0 = 1;
const int INpin1 = 2;
const int INpin2 = 3;

const int OUTpinA = 4;
const int OUTpinB = 5;
const int OUTpinC = 6;
const int OUTpinD = 7;
const int OUTpinE = 8;
const int OUTpinF = 9;
const int OUTpinG = 10;

int INPUT0;
int INPUT1;
int INPUT2;

void setup(){
  pinMode(INpin0, INPUT);
  pinMode(INpin1, INPUT);
  pinMode(INpin2, INPUT);

  pinMode(OUTpinA, OUTPUT);
  pinMode(OUTpinB, OUTPUT);
  pinMode(OUTpinC, OUTPUT);
  pinMode(OUTpinD, OUTPUT);
  pinMode(OUTpinE, OUTPUT);
  pinMode(OUTpinF, OUTPUT);
  pinMode(OUTpinG, OUTPUT);
}

void loop(){
  //Asignacion de valor a variables de señal.
  INPUT0 = digitalRead(INpin0);
  INPUT1 = digitalRead(INpin1);
  INPUT2 = digitalRead(INpin2);

  //Condicion 1. 0-0-0
  if(INPUT0==0 && INPUT1==0 && INPUT2==0){
    digitalWrite(OUTpinA, HIGH);
    digitalWrite(OUTpinB, HIGH);
    digitalWrite(OUTpinC, HIGH);
    digitalWrite(OUTpinD, HIGH);
    digitalWrite(OUTpinE, HIGH);
    digitalWrite(OUTpinF, HIGH);
    digitalWrite(OUTpinG, LOW);
  }

  //Condicion 2. 0-0-1
  else if(INPUT0==0 && INPUT1==0 && INPUT2==1){
    digitalWrite(OUTpinA, LOW);
    digitalWrite(OUTpinB, HIGH);
    digitalWrite(OUTpinC, HIGH);
    digitalWrite(OUTpinD, LOW);
    digitalWrite(OUTpinE, LOW);
    digitalWrite(OUTpinF, LOW);
    digitalWrite(OUTpinG, LOW);
  }

  //Condicion 3. 0-1-0
  else if(INPUT0==0 && INPUT1==1 && INPUT2==0){
    digitalWrite(OUTpinA, HIGH);
    digitalWrite(OUTpinB, HIGH);
    digitalWrite(OUTpinC, LOW);
    digitalWrite(OUTpinD, HIGH);
    digitalWrite(OUTpinE, HIGH);
    digitalWrite(OUTpinF, LOW);
    digitalWrite(OUTpinG, HIGH);
  }

  //Condicion 4. 0-1-1
  else if(INPUT0==0 && INPUT1==1 && INPUT2==1){
    digitalWrite(OUTpinA, HIGH);
    digitalWrite(OUTpinB, HIGH);
    digitalWrite(OUTpinC, HIGH);
    digitalWrite(OUTpinD, HIGH);
    digitalWrite(OUTpinE, LOW);
    digitalWrite(OUTpinF, LOW);
    digitalWrite(OUTpinG, HIGH);
  }

  //Condicion 5. 1-0-0
  else if(INPUT0==1 && INPUT1==0 && INPUT2==0){
    digitalWrite(OUTpinA, LOW);
    digitalWrite(OUTpinB, HIGH);
    digitalWrite(OUTpinC, HIGH);
    digitalWrite(OUTpinD, LOW);
    digitalWrite(OUTpinE, LOW);
    digitalWrite(OUTpinF, HIGH);
    digitalWrite(OUTpinG, HIGH);
  }

  //Condicion 6. 1-0-1
  else if(INPUT0==1 && INPUT1==0 && INPUT2==1){
    digitalWrite(OUTpinA, HIGH);
    digitalWrite(OUTpinB, LOW);
    digitalWrite(OUTpinC, HIGH);
    digitalWrite(OUTpinD, HIGH);
    digitalWrite(OUTpinE, LOW);
    digitalWrite(OUTpinF, HIGH);
    digitalWrite(OUTpinG, HIGH);
  }

  //Condicion 7. 1-1-0
  else if(INPUT0==1 && INPUT1==1 && INPUT2==0){
    digitalWrite(OUTpinA, HIGH);
    digitalWrite(OUTpinB, LOW);
    digitalWrite(OUTpinC, HIGH);
    digitalWrite(OUTpinD, HIGH);
    digitalWrite(OUTpinE, HIGH);
    digitalWrite(OUTpinF, HIGH);
    digitalWrite(OUTpinG, HIGH);
  }

  //Condicion 8. 1-1-1
  else if(INPUT0==1 && INPUT1==1 && INPUT2==1){
    digitalWrite(OUTpinA, HIGH);
    digitalWrite(OUTpinB, HIGH);
    digitalWrite(OUTpinC, HIGH);
    digitalWrite(OUTpinD, LOW);
    digitalWrite(OUTpinE, LOW);
    digitalWrite(OUTpinF, LOW);
    digitalWrite(OUTpinG, LOW);
  }
}
