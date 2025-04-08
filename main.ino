#include <PWM.h>

int PinPWM = 9;
int32_t frequency = 30000;  // 30kHz
int duty_percent = 70;      // duty inicial em %

void setup() {
  InitTimersSafe();

  bool success = SetPinFrequencySafe(PinPWM, frequency);
  if (success) {
    pinMode(PinPWM, OUTPUT);
    pwmWrite(PinPWM, map(duty_percent, 0, 100, 0, 255));
  }
}

void loop() {
  // Nada aqui, pois o duty cycle é fixo
}
