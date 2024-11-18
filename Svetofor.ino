int GREEN_FIRST = 7;
int RED_FIRST = 8;
int ORANGE_FIRST = 9;

int GREEN_SECOND = 4;
int RED_SECOND = 5;
int ORANGE_SECOND = 6;

long k = 1.0
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(GREEN_FIRST, OUTPUT);
  pinMode(RED_FIRST, OUTPUT);
  pinMode(ORANGE_FIRST, OUTPUT);
  pinMode(GREEN_SECOND, OUTPUT);
  pinMode(RED_SECOND, OUTPUT);
  pinMode(ORANGE_SECOND, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // 1- Зеленый, 2- Крвсный
  digitalWrite(GREEN_FIRST, HIGH);
  digitalWrite(RED_SECOND, HIGH);
  delay(k * 20000);
  // 1- Моргает зеленый
  digitalWrite(GREEN_FIRST, LOW);
  delay(k * 1000);
  digitalWrite(GREEN_FIRST, HIGH);
  delay(k * 1000);
  digitalWrite(GREEN_FIRST, LOW);
  delay(k * 1000);
  digitalWrite(GREEN_FIRST, HIGH);
  delay(k * 1000);
  digitalWrite(GREEN_FIRST, LOW);
  delay(k * 1000);
  digitalWrite(GREEN_FIRST, HIGH);
  delay(k * 1000);

  //1- включился жетый, зеленый выкл
  digitalWrite(GREEN_FIRST, LOW);
  digitalWrite(ORANGE_FIRST, HIGH);
  delay(k * 3000);

  //1- Желтый выкл, вкл красный
  digitalWrite(ORANGE_FIRST, LOW);
  digitalWrite(RED_FIRST, HIGH);
  delay(k * 1000);

  //2- желтый и красный вкл
  digitalWrite(ORANGE_SECOND, HIGH);
  delay(k * 3000);

  //2- желтый, красный выкл, зеленый вкл
  digitalWrite(RED_SECOND, LOW);
  digitalWrite(ORANGE_SECOND, LOW);
  digitalWrite(GREEN_SECOND, HIGH);
  delay(k * 20000);

  // 2- Моргает зеленый
  digitalWrite(GREEN_SECOND, LOW);
  delay(k * 1000);
  digitalWrite(GREEN_SECOND, HIGH);
  delay(k * 1000);
  digitalWrite(GREEN_SECOND, LOW);
  delay(k * 1000);
  digitalWrite(GREEN_SECOND, HIGH);
  delay(k * 1000);
  digitalWrite(GREEN_SECOND, LOW);
  delay(k * 1000);
  digitalWrite(GREEN_SECOND, HIGH);
  delay(k * 1000);

  //2- включился жетый, зеленый выкл
  digitalWrite(GREEN_SECOND, LOW);
  digitalWrite(ORANGE_SECOND, HIGH);
  delay(k * 3000);

  //2- Желтый выкл, вкл красный
  digitalWrite(ORANGE_SECOND, LOW);
  digitalWrite(RED_SECOND, HIGH);
  delay(k * 1000);

  //1- желтый и красный вкл
  digitalWrite(ORANGE_FIRST, HIGH);
  delay(k * 3000);

  digitalWrite(ORANGE_FIRST, LOW);
  digitalWrite(RED_FIRST, LOW);
}
