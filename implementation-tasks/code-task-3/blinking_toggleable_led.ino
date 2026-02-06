#define BUTTON_PIN 2
#define LED_PIN 7

bool switched_on = false;
bool button_state;
bool prev_button_state;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  button_state = digitalRead(BUTTON_PIN);
  
  if (prev_button_state == HIGH && button_state == LOW){
    switched_on = !switched_on;
  }

  if (switched_on){
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  prev_button_state = button_state;
}