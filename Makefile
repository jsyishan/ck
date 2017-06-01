testClient: encryption.o decryption.o fileHandler.o testClient.o
	gcc -o testClient encryption.o decryption.o fileHandler.o testClient.o
encryption.o: encryption.c encryption.h
	gcc -c encryption.c
decryption.o: decryption.c decryption.h
	gcc -c decryption.c
fileHandler.o: fileHandler.c fileHandler.h
	gcc -c fileHandler.c
clean:
	rm -rf *.o testClient