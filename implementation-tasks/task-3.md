# Approach for LED with a push button to turn it on/off

#### Connections
###### General Layout
I started by thinking about how the circuit would be arranged:
- There would be a power source, connected to a button and an LED through the Arduino.
- The 5V power source, button and Arduino would form one circuit loop, while the LED, Arduino output pin and ground would form another circuit loop
- When the button would be pressed, the button's loop would be closed, sending a signal to the Arduino pin.
- On receiving the input, the Arduino would turn the LED on by sending a current through it's output pin in the LED loop.

###### Pins used/Circuit.
- I chose digital I/O pin 2 for the button and digital I/O pin 7 for the LED loop.
- The Arduino side of the push button is also grounded, to avoid getting an inconsistent output when the circuit is open.

#### Code
Arduino's programming structure contains of two functions:
 - `setup()` - executes only once
 - `loop()` - executes repeatedly

A variable that holds the LED state (on/off) can be defined.
In the `loop()` function, we can add a check that looks at the input signal that the button is sending to pin 2. Whenever a signal is detected, the button inverts the current LED state.

The loop function on an Arduino runs several times per second, and a human can't press the button for exactly one iteration of the loop. Running the code thus far would result in the state switching between on/off extremely fast when the button is pressed. To make the state switch only once, we make sure that the LED's state is inverted only if the button pin was off in the previous iteration and is currently on. 

When the LED's state is inverted, we updated the LED output and write a high voltage if it's supposed to be on and a low voltage if it's supposed to be off.

# Approach for a blinking LED

To make an LED blink, we need to alternate between a high and low output voltage to the pin connected to the LED. Between the blinking, we add a delay to change the rate at which it blinks.

# Approach for LED with a push button to make it start/stop blinking

The same circuit as situation 1 can be used, with slight modifications to the code. The LED's blinking state needs to be updated on every iteration instead, and the Arduino writes a low signal to the LED pin when it detects the blinking state to be false. When it detects the blinking state to be true, it can use the blinking logic mentioned above.





