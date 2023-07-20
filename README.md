# BruteForce-On-a-Hashed-Password

This code written on c++ runs a brute force on a hashed password. The password was originally hashed using SHA3. 

SHA3 is a set of cryptographic hash functions, which is irreversible in nature, 
and has a near to zero percent collisions rate. 

Only way to get the data back after encrypted is to run a brute force, if only you are highly fortunate, 
you can get the correct permutation of characters maybe within just 300-400 years. 

In our case, it was a simple 5 digit password using only alphabetical characters. 
we only have a search space of 11 million words. which is pretty much crackable within some seconds or minutes. 

this is the reason why you should never use plain and simple password. 

Always use special characters, upper and lower case alphabet simultaneously . 
With some basic knowledge of math you can tell that will be uncrackable. 

NB: in order to run the programm you have to install openssl and configure it accordingly in the Makefile 

Iqbal Mahamud 

KUET-CSE

2k20


