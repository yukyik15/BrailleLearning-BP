#include <string.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("hi");
  pinMode(4, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int f = digitalRead(2);
  String word = String("");
  while(f == 1)
  {
  String hi = ("letter");
    word = word + hi;
  }
  Serial.println(word);
}



boolean bPressed(int x){
  int current;
  int previous;
  while(1) {
    current = digitalRead(x);
    if (current==1 && previous ==0) {
      Serial.println("bPRessed");
      return true;
    }
    previous=current;
  }
}

String letter() { 
  
  String letter = String("");

  int final=digitalRead(7);



  while(final == 1){
    if(bPressed(1) && !bPressed(2) && !bPressed(3) && !bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "A";
    }
    else if(bPressed(1) && bPressed(2) && !bPressed(3) && !bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "B";
    }
    else if (bPressed(1) && !bPressed(2) && !bPressed(3) && bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "C";
    }
    else if (bPressed(1) && !bPressed(2) && !bPressed(3) && bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "D";
    }
    else if (bPressed(1) && !bPressed(2) && !bPressed(3) && !bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "E";
    }
    else if (bPressed(1) && bPressed(2) && !bPressed(3) && bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "F";
    }    
    else if (bPressed(1) && bPressed(2) && !bPressed(3) && bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "G";
    }    
    else if (bPressed(1) && bPressed(2) && !bPressed(3) && !bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "H";
    }    
    else if (!bPressed(1) && bPressed(2) && !bPressed(3) && bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "I";
    }  
    else if (!bPressed(1) && bPressed(2) && !bPressed(3) && bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "J";
    }      
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && !bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "K";
    }  
    else if (bPressed(1) && bPressed(2) && bPressed(3) && !bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "L";
    }  
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "M";
    }  
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "N";
    }
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && !bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "O";
    }    
    else if (bPressed(1) && bPressed(2) && bPressed(3) && bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "P";
    }    
    else if (bPressed(1) && bPressed(2) && bPressed(3) && bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "Q";
    } 
    else if (bPressed(1) && bPressed(2) && bPressed(3) && bPressed(4) && !bPressed(5) && bPressed(6)){
      letter = letter + "R";
    }       
    else if (!bPressed(1) && bPressed(2) && bPressed(3) && bPressed(4) && !bPressed(5) && !bPressed(6)){
      letter = letter + "S";
    }       
    else if (!bPressed(1) && bPressed(2) && bPressed(3) && bPressed(4) && bPressed(5) && !bPressed(6)){
      letter = letter + "T";
    } 
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && !bPressed(4) && !bPressed(5) && bPressed(6)){
      letter = letter + "U";
    } 
    else if (bPressed(1) && bPressed(2) && bPressed(3) && !bPressed(4) && !bPressed(5) && bPressed(6)){
      letter = letter + "V";
    } 
    else if (!bPressed(1) && bPressed(2) && !bPressed(3) && bPressed(4) && bPressed(5) && bPressed(6)){
      letter = letter + "W";
    } 
    else if (!bPressed(1) && bPressed(2) && !bPressed(3) && bPressed(4) && bPressed(5) && bPressed(6)){
      letter = letter + "W";
    } 
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && bPressed(4) && !bPressed(5) && bPressed(6)){
      letter = letter + "X";
    } 
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && bPressed(4) && bPressed(5) && bPressed(6)){
      letter = letter + "Y";
    } 
    else if (bPressed(1) && !bPressed(2) && bPressed(3) && !bPressed(4) && bPressed(5) && bPressed(6)){
      letter = letter + "Z";
    } 
  }
  Serial.println("letter");
  return letter;

}
