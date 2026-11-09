# Decibelmetru cu analizor de spectru

Proiect Arduino Uno pentru laboratorul SIO-EP.

Un microfon KY-038 captează sunetul, iar Arduino calculează nivelul în decibeli și spectrul de frecvențe prin FFT. Nivelul se afișează ca număr pe un LCD 16x2 (I2C) și ca bară luminoasă pe un LED bar graph, cu un segment care păstrează vârful atins. Spectrul se afișează pe o matrice LED 8x32 (4 x MAX7219).

Periferice: microfon KY-038, LCD 16x2 I2C, matrice LED 8x32 (4 x MAX7219), LED bar graph. Microfonul este citit prin ADC și Timer1 configurate direct din registre.
