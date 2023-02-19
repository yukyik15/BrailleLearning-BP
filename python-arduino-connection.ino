void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("hi");
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (!Serial.available());
  String word = Serial.readString();
  if(word == "hi"){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }
  //Serial.println(word);
  
  
  int buttonvalue=digitalRead(2);
  //Serial.println(buttonvalue);
}

boolean buttonPressed(int x){
  int current;
  int previous;
  //loop{
//    current = digitalRead(x);
//    if (current==1 && previous ==0) {
//      return true;
//    }
//    previous=current;
//  }
}
