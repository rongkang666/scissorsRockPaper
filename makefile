all: play

play: main.o player.o human.o computer.o referee.o
	g++ main.o player.o human.o computer.o referee.o -o play

main.o: main.cpp
	g++ -c main.cpp

player.o: player.cpp
	g++ -c player.cpp

human.o: human.cpp
	g++ -c human.cpp

computer.o: computer.cpp
	g++ -c computer.cpp

referee.o: referee.cpp
	g++ -c referee.cpp

clean:
	rm *.o play