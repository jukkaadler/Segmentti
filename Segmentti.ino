#define seg4 4    //Pinnien määrittäminen   
#define seg5 5       
#define seg6 6       
#define seg7 7        
#define seg9 9
#define seg10 10
#define seg11 11
 

int viive = 1000;



void setup() {
  
  pinMode(seg4, OUTPUT);   //Ulostulon määrittäminen
  pinMode(seg5, OUTPUT);
  pinMode(seg6, OUTPUT);
  pinMode(seg7, OUTPUT);
  pinMode(seg9, OUTPUT);
  pinMode(seg10, OUTPUT);
  pinMode(seg11, OUTPUT);
  
 }

 void showNum(int number)
 {
  if(number == 9){
    nine();  
  }else if(number == 8){
    eight();
  }else if(number == 7){
    seven();
  }else if(number == 6){
    six();
  }else if(number == 5) {
    five();
  }else if(number == 4) {
    four();
  }else if(number == 3) {
    three();
  }else if(number == 2) {
    two();
  }else if(number == 1) {
    one();
  }else if(number == 0) {

    
  }

  

 }

 


void loop() {
 showNum (4);
}


void nine(){                           //Näyttää numeron yhdeksän
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10,LOW);
  digitalWrite(seg11, HIGH);
  delay(viive);
}

void eight(){                           //Näyttää numeron kahdeksan
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10,LOW);
  digitalWrite(seg11, LOW);
  delay(viive);
  }

void seven(){                           //Näyttää numeron seitsemän
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, HIGH);
  digitalWrite(seg7, HIGH);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10, HIGH);
  digitalWrite(seg11, HIGH);
  delay(viive);
  }

void six(){                             //Näyttää numeron kuusi
  digitalWrite(seg4, HIGH);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10, LOW);
  digitalWrite(seg11, LOW);
  delay(viive);
  }

void five(){                            //Näyttää numeron viisi 
  digitalWrite(seg4, HIGH);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10, LOW);
  digitalWrite(seg11, HIGH);
  delay(viive);
  }

void four(){                            //Näyttää numeron neljä
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, HIGH);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10, HIGH);
  digitalWrite(seg11, HIGH);
  delay(viive);
  }

void three(){                           //Näyttää numeron kolme
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, HIGH);
  digitalWrite(seg7, LOW);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10, LOW);
  digitalWrite(seg11, HIGH);
  delay(viive);
  }

void two(){                             //Näyttää numeron kaksi
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, HIGH);
  digitalWrite(seg7, LOW);
  digitalWrite(seg9, HIGH);
  digitalWrite(seg10, LOW);
  digitalWrite(seg11, LOW);
  delay(viive);
  }

void one(){                             //Näyttää numeron yksi
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, HIGH);
  digitalWrite(seg6, HIGH);
  digitalWrite(seg7, HIGH);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10, HIGH);
  digitalWrite(seg11, HIGH);
  delay(viive);
  }

void zero(){                            //Näyttää numeron 0                        
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, HIGH);
  digitalWrite(seg9, LOW);
  digitalWrite(seg10, LOW);
  digitalWrite(seg11, LOW);
  delay(viive);
  }                         

