// Credits Game Of Thrones:  http://www.tinkbox.ph/tutorials-step/how-create-game-thrones-theme-arduino/arduino-code
// Credits The March Imperial: http://dragaosemchama.com.br/2014/04/player-de-marcha-imperial-8-bitsarduino/ and https://gist.github.com/tagliati
// Credits Fear Of Dark: Bruno Pontes, http://arduinorocks.blogspot.com.br/2013/08/arduino-buzzer-fear-of-dark.html
// Credits Mario: http://www.nubiasouza.com.br/musica-tema-mario-arduino-speaker/

  int speakerPin=8;
  
  void setup() {
    pinMode(speakerPin,OUTPUT);
    pinMode(13,OUTPUT);
    Serial.pritln()
    // Interrupçao: usa-se o botao 2 ou 3 para ativa a interrupçao e ira para a funcao paraTudo
    attachInterrupt(0, paraTudo, RISING);
  }
	
  void loop(){
    digitalWrite(13,LOW);  
    fearOfDark();
    gameOfThrones();
    marioTheme();
    theImperialMarch();
  }
  
  void paraTudo(){
    digitalWrite(13,HIGH);
    noTone(speakerPin);
    delay(1000);  
  }
