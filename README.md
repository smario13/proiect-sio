# Decibelmetru cu analizor de spectru și joc de lumini

Proiect Arduino Uno pentru laboratorul SIO-EP.

Un microfon MAX4466 captează sunetul, iar Arduino calculează nivelul în decibeli
(valoare aproximativă) și spectrul de frecvențe. Nivelul se afișează ca
număr și spectru pe un LCD 16x2 (I2C) și ca bară luminoasă pe un LED bar graph.
Când nivelul depășește un prag, pornește un joc de lumini pe un LED RGB, cu
culoarea în funcție de frecvența dominantă. Pragurile se calibrează automat la
pornire.

Periferice: microfon MAX4466, LCD 16x2 I2C, LED bar graph, LED RGB.
Microfonul este citit prin ADC configurat direct din registre.
