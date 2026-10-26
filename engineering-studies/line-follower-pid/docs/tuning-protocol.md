# Physical tuning protocol

The current sketch supplies a PID calculation only. Its gains are illustrative; measured error is fixed at zero and motor output is deliberately unconnected. There are no measured tuning results.

1. Document the actual board, motor driver, power supply, pin mapping, line geometry and sensor calibration. Verify a motor-off state and bounded output before connecting actuators.
2. Record a timestamped baseline at a fixed speed and course. Measure absolute tracking error, lap completion, line losses and saturation fraction.
3. Tune proportional gain first; introduce derivative damping and then integral action only when persistent bias is observed. Change one setting at a time.
4. Repeat each setting on the same course, then use an unseen course and altered lighting. Report failures as well as successful runs.

| Run | Gains | Speed | Course | Mean absolute error | Line losses | Completion | Evidence |
| --- | --- | --- | --- | --- | --- | --- | --- |
| No physical run recorded | — | — | — | — | — | — | — |

This protocol is a plan for collecting evidence, not evidence that those experiments happened.
