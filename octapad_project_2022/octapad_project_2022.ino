//                                  ______code by Danujaya Daham_____  
//                                 _______ 2021 octapad project_______ 
//                               ____________ Modden by 2022 ____________
//                               Danuwa....


#include <Keyboard.h>
//
void setup(){
  Keyboard.begin();
  pinMode (5, INPUT_PULLUP);
  pinMode (10, INPUT_PULLUP);
  }
  void loop() {
    int c = analogRead(A0);
    int d = analogRead(A1);
    int e = analogRead(A2);
    int f = analogRead(A3);
    int g = analogRead(A4); 
    int h = analogRead(A5);
    int i = analogRead(A6);
    int j = analogRead(A7);
    int k = 490;
    int z = 05;

        
      if(c>k) { 
        
      Keyboard.print("q");
      delay(z);
      }
      if(d>k)
      {
      Keyboard.print("w");
      delay(z);
      }
      if(e>k)
      { 
      Keyboard.print("e");
      delay(z); 
      } 
      if(f>k)
      {
      Keyboard.print("r"); 
      delay(z); 
      } 
      if(g>k)
      { 
      Keyboard.print("s");
      delay(z);
      } 
      if(h>k)
      { 
      Keyboard.print("d");
      delay(z);
      } 
      if(i>k)
      {
      Keyboard.print("g");
      delay(z);
      }
      if(j>k)
      {
      Keyboard.print("h");
      delay(z);
      }
      
      if(!digitalRead(10))
      {
      Keyboard.press(KEY_UP_ARROW);
      delay(200);
      }
      else if(!digitalRead(5))
      {
      Keyboard.press(KEY_DOWN_ARROW);
      delay(200);
      }
      Keyboard.releaseAll();
      }

//                                        ______code by Danujaya Daham_____  
//                                       _______ 2021 octapad project_______ 
//                                     ____________ Modden by 2022 ____________
//                                     Danuwa....

}
