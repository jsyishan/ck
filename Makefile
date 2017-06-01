testClient: encryption.o decryption.o fileHandler.o testClient.o stack.o
	gcc -o testClient encryption.o decryption.o fileHandler.o testClient.o stack.o
stack.o: stack.c stack.h
	gcc -c stack.c
encryption.o: encryption.c encryption.h
	gcc -c encryption.c
decryption.o: decryption.c decryption.h
	gcc -c decryption.c
fileHandler.o: fileHandler.c fileHandler.h
	gcc -c fileHandler.c
testClient.o: testClient.c
	gcc -c testClient.c
clean:
	rm -rf *.o testClient