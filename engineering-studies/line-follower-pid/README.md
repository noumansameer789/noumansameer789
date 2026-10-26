# Line-follower robot with PID control

Arduino-compatible control loop and tuning notes for an autonomous line follower.
The project objective was to reduce positional error and oscillation through
iterative proportional, integral and derivative tuning.

The firmware separates error measurement, integral clamping and motor output.
Pin mappings and sensor calibration are intentionally left as hardware-specific
work; do not drive motors from the placeholder configuration.
