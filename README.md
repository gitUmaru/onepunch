
<h2>Purpose</h2>
<p>The aim of this project was to use electromyographic signals from motor neurons by measuring action potentials in muscles to create an analog signal. 
  </br> </br>
  Through this signal one can then map analog to digital, after rectifying data for cardiac interference and other electrical obstructions, to dictate the position of servo motors. The servo motors would then “contract” fishing wire by simply rotating which, through a clever system of pulleys, allows for full control of the arm. 
   </br> </br>
  The acquisition of electromyography signals are attained from an electrogram which measures for electrical impulses through electrodes place on the muscle, rather the epidermal area of where the muscle would be. The electrical impulses are then amplified and rectified through an integrated circuit. These signals are then read by a microcontroller which feeds analyzed data to internal actuator</p>
   </br> </br>
<p>Rectification of the data is mainly done through the electromyogram circuit however this simply includes taking the absolute value of the voltage that is acquired. Post-acquisition rectification can be done to smooth out the data by statistical analysis but typically is not done in out experiment. 
   </br> </br>By mapping these electrical signals on an analog scale one can increment the servo motor position in respect to muscle contraction intensity, that is to say the more intense a contraction is the more the servo will turn. Consequently, this gives the motor the ability to imitate actual biological phenomenon. 
    </br> </br>Fishing wire is used as the tendons of this artificial limb, the wire is lined inside the individual phalanges and form a conveyor belt like loop that allows for contractions to clench the hand and to stretch the hand. Physical construction of the prostheses is done through plastic filament and fabricated by a 3d printer. In this way cost of manufacturing the arm is kept low and accessibility is increased. Overall, several systems are implemented together to form a coherent model of the human arm.</p>
<h2>Procedure</h2>
  <p>Initially, the hand was sketch with the reference of one’s right hand and forearm. These measurements must be precise in order for the artificial hand to achieve realistic dimensions. </br>
  This major draft include the proximal, intermediate, and distal phalanges of the fingers and thumb. Looking at a top view of one’s hand, the width of the phalanges do not have to be recorded due to the implementation of screws with specific length in each phalanges. Be extremely careful with the palm as it’s sketch will eventually form into an irregular polygon with specific angles accounted for.
  </br>In terms of the forearm, only record the length as its width might vary due to the five servo motors that will take a good portion of its volume.
</p>

<h2>Results and Discussion </h2>
  One of the biggest problems that were presented was the classification of individual fingers. Distinguishing one finger from another was a large issue mainly due in part to the lack of sensors on the forearm. Our model only incorporated one sensor with three channels acquiring signals from the input sensor itself. One of the ways we attempted to solve this issue was by introducing a machine learning model, specifically the use of an extreme learning machine (ELM). The process was broken down into several parts: moving, movement detection, feature and label extraction, dimensionality reduction, and classification.



<a href='https://docs.google.com/document/d/1BGWByeF-VUokjxzNBKsHKiJcvoc7TiH_eAW1-0QYPF4/edit?usp=sharing'>Click here for the full paper (with images)</a>
