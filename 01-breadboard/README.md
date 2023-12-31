# Arduino on Breadboard

## Description
The first task was to replicate various components of Arduino on the circuit board, followed by connecting it to the computer. I wrote a simple program to control the blinking of an LED on the breadboard, aiming to comprehend the structure of the Arduino board and how to manipulate it.

P.S.: If you, like me, have little knowledge about circuit, it's advisable to review basic circuit knowledge first, such as the flow of electric current, series and parallel circuits, and the functions of various electronic components. This can help you understand how to wire and troubleshoot on the breadboard more efficiently.

Of course, if you prefer to dive in directly, that's okay too. This exercise is very beginner-friendly, allowing you to enhance your circuit knowledge through hands-on experience. The key is not to merely mimic the provided circuit diagrams. While you can create a working circuit system, it's crucial to understand the reasons behind each connection and the function of each electronic component. This understanding will contribute to a genuine grasp of the operating principles of Arduino and prepare you for more advanced tasks later on.

## Documentation
- Firstly, let's get a grip on what's going on inside the breadboard.
<p align="center">
	<img src="./images/IMG_3280.jpeg") alt="size limit image cant be show" width="500">
</p>

- Then, our core technology - the ATmega
<p align="center">
	<img src="./images/atmega pinout.jpeg") alt="size limit image cant be show" width="500">
</p>

- add the crystal (two 22pu capacitor should connect to it, put it as close to the ATmega as possible)
- about the voltage regulator 
<p align="center">
	<img src="./images/IMG_3281.jpeg") alt="size limit image cant be show" width="500">
</p>

- about the button with 4 pins 
<p align="center">
	<img src="./images/IMG_3282.jpeg") alt="size limit image cant be show" width="500">
</p>

- about the variable resistor 
<p align="center">
	<img src="./images/IMG_3283.jpeg") alt="size limit image cant be show" width="500">
</p>

- add the leds and test the blink code
<p align="center">
	<img src="./images/IMG_0413.jpeg") alt="size limit image cant be show" height="500">
	<img src="./images/IMG_0470.jpeg") alt="size limit image cant be show" height="500">
</p>
