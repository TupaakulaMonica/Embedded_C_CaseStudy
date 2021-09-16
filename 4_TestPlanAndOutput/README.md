# Test Plan

| Test ID | Description |  Input | Output |  Status  |
| -------- | ----------- | ------ | ------| -----------------|
| 1 | Presence of person | Button -> high | Button -> high | Pass |
| 2 | Temperature sensor | Temp < room temp | Heater On | Pass |
| 3 | Temperature sensor | Temp > room temp | Heater Off | Pass |
| 4 | Temperature sensor | Temp = room temp | Heater Off | Pass |
| 5 | LED On | Button -> On, Heater On  | LED On | Pass |
| 6 | LED Off | Button -> Off, Heater Off  | LED Off | Pass |
| 7 | Display CDD-CRO | Temperature value | PWM Waveform | Pass |
