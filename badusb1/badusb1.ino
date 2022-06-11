#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);
  // 「ファイル名を指定して実行」を起動
  Keyboard.press(KEY_LEFT_GUI); 
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
  
  // コマンドプロンプト起動  
  Keyboard.print("cmd");
  Keyboard.write(KEY_RETURN);
  delay(1000);
   
}

void loop() {
}
