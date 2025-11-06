# Emergency_Vehicle_Prioritization
Tagline: Smart Signal Control to Give Priority to Emergency Vehicles.
________________________________________
1. Project Description

Overview

The project Emergency Vehicle Preemption is a traffic management system that provides automatic signal priority to emergency vehicles such as ambulances, fire trucks, or police vehicles.
The program allows the user (or sensor system) to input the detected direction of an emergency vehicle and automatically sets that signal to green, while other directions turn red.
If no emergency is detected, the system follows a normal traffic cycle, switching green lights sequentially for all directions.
Problem Statement
Urban roads frequently encounter heavy congestion, causing delays for emergency vehicles such as ambulances, fire engines, and police vehicles. This project addresses the issue by implementing an automated priority system that detects emergency vehicles using sensors and modifies signal timing accordingly.
________________________________________
2. Objectives
   
•	To reduce delay for emergency vehicles at intersections.

•	To ensure smooth and safer movement across intersections.

•	To support adaptive traffic timing for efficient flow.
________________________________________
 
3. Features

•	Emergency Vehicle Detection:

Identifies the direction (N/E/S/W) of an approaching emergency vehicle.


•	Automatic Signal Priority:

Sets green light for the detected direction and red for all others.


•	Normal Traffic Cycle:

Runs a continuous signal loop when no emergency is present.


•	Safe Shutdown:

Ends operation after completing normal cycles when user exits.


•	User Interaction:

Accepts inputs for siren status, vehicle distance, and emergency confirmation.


________________________________________
4. Variables Used
   
Variable Name	Purpose
running	Controls the main while loop (system running state)
n	Total number of road directions (4)
i	Loop counter
a	Array storing direction labels ["N", "S", "E", "W"]
signalDirection	Stores user input for detected emergency direction
registered	Stores input on whether emergency message was received
distance	Distance of emergency vehicle from signal (in meters)
sirenOn	Stores input if siren is ON (1/0)
time	Used for countdown simulation of green light duration
________________________________________
5. Functions Used
Function Name	Description
emergencyMode()	Placeholder for emergency preemption logic
normalCycle()	Placeholder for normal traffic light cycle
Main loop	Executes user inputs, checks for emergency, and manages signal sequence
For loops	For countdown, to exclude the selected direction after emergency
If-else conditions	To identify an emergency based on sensors and collaborative data
________________________________________
6. How It Works
   
1.	The system begins by displaying a start message and sets up the four directions (N, S, E, W).
   
2.	It continuously asks for detected direction input (N, E, S, W, or X to exit).
   
3.	If input is X, it runs a normal signal cycle for all directions before shutdown.
   
4.	If an emergency vehicle is detected and the siren is ON or message is confirmed, it:
   
5.	Prints which direction has the emergency vehicle.

6. Sets that direction to green and others to red.

7. Simulates the green light for 60 seconds.

8. After the emergency clears, it restores normal signal cycles.
    
________________________________________
7. Tech Stack
   
•	Programming Language: Python

•	Tools / Libraries Used:

o	Built-in libraries only (no external imports used)

o	input() and print() functions for interaction

o	for loops for timing and iteration

o	if-else structures for logic control

________________________________________
8. Challenges and Solutions
   
Challenge	Solution
Handling user inputs for direction and siren detection	Implemented clear conditional checks and input prompts
Managing light cycles for multiple directions	Used array a[] to iterate through all directions efficiently
Simulating time-based signal changes	Used countdown loop for time in range(60, 1) to represent 60-second green light duration
________________________________________
 
9. Future Improvements

•	Integrate real RFID or IR sensors to automatically detect emergency vehicles.

•	Add database support (SQLite) to log traffic and preemption data.

•	Implement computer vision (YOLO) for camera-based detection.

•	Use multi-intersection communication to form a green corridor for emergency routes.

•	Use of system which iterates signal timings based on traffic if multiple  emergency vehicle is coming from different direction

________________________________________
10. Conclusion
    
The Emergency Vehicle Preemption project demonstrates a simple yet effective approach to prioritize emergency vehicles at intersections. By simulating signal control logic, it lays the foundation for future integration with smart sensors and IoT-based real-world traffic systems.
________________________________________

