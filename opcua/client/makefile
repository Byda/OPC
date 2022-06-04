client: ../open62541/open62541.o client.o
	gcc ../open62541/open62541.o client.o -o client

client.o: client.c
	gcc -c client.c -o client.o

clean:
	rm *.o client

run:
	./client

