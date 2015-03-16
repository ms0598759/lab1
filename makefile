hw1:hw1.o qB.o
	g++ -o hw1 hw1.o qB.o
hw1.o:hw1.cpp
	g++ -c hw1.cpp
qB.o:qB.cpp qB.h
	g++ -c qB.cpp
