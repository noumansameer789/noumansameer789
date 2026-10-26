float kp = 1.2;
float ki = 0.02;
float kd = 0.35;
float integral = 0.0;
float previousError = 0.0;
unsigned long previousMicros = 0;

float clampValue(float value, float low, float high) {
  return min(max(value, low), high);
}

float pidStep(float error) {
  const unsigned long now = micros();
  const float dt = max((now - previousMicros) / 1000000.0, 0.001);
  previousMicros = now;
  integral = clampValue(integral + error * dt, -100.0, 100.0);
  const float derivative = (error - previousError) / dt;
  previousError = error;
  return clampValue(kp * error + ki * integral + kd * derivative, -255.0, 255.0);
}

void setup() {
  previousMicros = micros();
}

void loop() {
  // Replace with calibrated sensor and motor-driver functions.
  const float measuredError = 0.0;
  const float correction = pidStep(measuredError);
  (void)correction;
}
