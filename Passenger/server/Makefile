all: server

		make clean
		
server: main.o server_socket.o server.o tools.o user.o system.o CLI.o data.o dis_code.o galaxy.o planet.o spaceship.o time.o trip.o
	g++ main.o server_socket.o server.o tools.o user.o system.o CLI.o data.o dis_code.o galaxy.o planet.o spaceship.o time.o trip.o -o server

main.o: main.cpp

	g++ -c main.cpp

server.o: server.cpp server.h
	g++ -c server.cpp
	
server_socket.o: server_socket.cpp server_socket.h tools.h network_exception.h
	g++ -c server_socket.cpp
	
tools.o: tools.cpp tools.h
	g++ -c tools.cpp
	
system.o: system.cpp

	g++ -c system.cpp

user.o: user.cpp

	g++ -c user.cpp

CLI.o: CLI.cpp

	g++ -c CLI.cpp

data.o: data.cpp

	g++ -c data.cpp

dis_code.o: dis_code.cpp

	g++ -c dis_code.cpp

galaxy.o: galaxy.cpp

	g++ -c galaxy.cpp

planet.o: planet.cpp

	g++ -c planet.cpp

spaceship.o: spaceship.cpp

	g++ -c spaceship.cpp

time.o: time.cpp

	g++ -c time.cpp

trip.o: trip.cpp

	g++ -c trip.cpp

clean:
	rm *.o
