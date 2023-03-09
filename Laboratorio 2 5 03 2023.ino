//Julio Castellanos
int D = 1000;

int in1;
int in2;
char x;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);  //BOTON 1
  pinMode(3, INPUT);  //BOTON 2
  pinMode(9, OUTPUT);  //A
  pinMode(10, OUTPUT); //B
  pinMode(6, OUTPUT);  //C
  pinMode(5, OUTPUT);  //D
  pinMode(4, OUTPUT);  //E
  pinMode(8, OUTPUT);  //F
  pinMode(7, OUTPUT);  //G

  
}

void loop() {
   
     //0
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, LOW);

 in1 = digitalRead(2);
 in2 = digitalRead(3);
 
 if (in1 == HIGH){
     //0
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, LOW);
     delay(D);
     //1
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     delay(D);
     //2
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, LOW);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     delay(D);
     //3
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     delay(D);
     //4
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //5
     digitalWrite(9, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //6
     digitalWrite(9, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //7
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     delay(D);
     //8
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //9
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
 }else if (in2 == HIGH){
     //9
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //8
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //7
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     delay(D);
     //6
     digitalWrite(9, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //5
     digitalWrite(9, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //4
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     //3
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     delay(D);
     //2
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, LOW);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     delay(D);
     //1
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     delay(D);
     //0
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, LOW);
     delay(D);
    }
  if (Serial.available() > 0){
    x=Serial.read();
    switch(x){
      case '0':
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, LOW);
     delay(D);
     break;
     case '1':
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     delay(D);
     break;
     case '2':
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, LOW);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     delay(D);
     break;
     case '3':
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     delay(D);
     break;
     case '4':
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     break;
     case '5':
     digitalWrite(9, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     break;
     case '6':
     digitalWrite(9, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     break;
     case '7':
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     delay(D);
     break;
     case '8':
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     break;
     case '9':
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     delay(D);
     break;

    }
  }
}



