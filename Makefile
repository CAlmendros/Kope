all:
	g++ main.cpp -L/usr/lib -lssl -lcrypto -o main
	g++ SSL-Server.cpp -L/usr/lib -lssl -lcrypto -o SSL-Server
	g++ SSL-Client.cpp -L/usr/lib -lssl -lcrypto -o SSL-Client
