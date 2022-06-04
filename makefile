test_PZEM004T: main.o PZEM004Tv30.o
	g++ -o test_PZEM004T main.o PZEM004Tv30.o -lwiringPi
main.o: main.cpp PZEM004Tv30.h
	g++ -c main.cpp
PZEM004Tv30.o: PZEM004Tv30.cpp PZEM004Tv30.h
	g++ -c PZEM004Tv30.cpp
