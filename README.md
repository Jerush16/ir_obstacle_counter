# ir_obstacle_counter
This project uses an IR obstacle sensor connected to digital pin 9 of the Arduino to detect object presence via a state change on the sensor's output. Each transition from "not detected" to "detected" increments a counter, which is displayed in real time on a 16x2 I2C LCD alongside the current detection status.
