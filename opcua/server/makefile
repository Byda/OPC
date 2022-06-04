opcua_ip=10.0.0.4
opcua_port=3000

all: khithai_server nuocthai_server khongkhi_server nuocmat_server

khithai_server: ../model/khithai.o ../open62541/open62541.o khithai_server.o sub/khithai.o
	gcc -Wall ../model/khithai.o ../open62541/open62541.o khithai_server.o sub/khithai.o -o khithai_server

nuocthai_server: ../model/nuocthai.o ../open62541/open62541.o nuocthai_server.o sub/nuocthai.o
	gcc -Wall ../model/nuocthai.o ../open62541/open62541.o nuocthai_server.o sub/nuocthai.o -o nuocthai_server

khongkhi_server: ../model/khongkhi.o ../open62541/open62541.o khongkhi_server.o sub/khongkhi.o
	gcc -Wall ../model/khongkhi.o ../open62541/open62541.o khongkhi_server.o sub/khongkhi.o -o khongkhi_server

nuocmat_server: ../model/nuocmat.o ../open62541/open62541.o nuocmat_server.o sub/nuocmat.o
	gcc -Wall ../model/nuocmat.o ../open62541/open62541.o nuocmat_server.o sub/nuocmat.o -o nuocmat_server

../model/khithai.o: ../model/khithai.c
	gcc -Wall -c ../model/khithai.c -DUA_ENABLE_AMALGAMATION=true -o ../model/khithai.o

../model/nuocthai.o: ../model/nuocthai.c
	gcc -Wall -c ../model/nuocthai.c -DUA_ENABLE_AMALGAMATION=true -o ../model/nuocthai.o

../model/khongkhi.o: ../model/khongkhi.c
	gcc -Wall -c ../model/khongkhi.c -DUA_ENABLE_AMALGAMATION=true -o ../model/khongkhi.o

../model/nuocmat.o: ../model/nuocmat.c
	gcc -Wall -c ../model/nuocmat.c -DUA_ENABLE_AMALGAMATION=true -o ../model/nuocmat.o

../open62541/open62541.o: ../open62541/open62541.c
	gcc -Wall -c -std=c99 ../open62541/open62541.c -o ../open62541/open62541.o

sub/khithai.o: sub/khithai.c
	gcc -Wall -c sub/khithai.c -o sub/khithai.o

sub/nuocthai.o: sub/nuocthai.c
	gcc -Wall -c sub/nuocthai.c -o sub/nuocthai.o

sub/khongkhi.o: sub/khongkhi.c
	gcc -Wall -c sub/khongkhi.c -o sub/khongkhi.o

sub/nuocmat.o: sub/nuocmat.c
	gcc -Wall -c sub/nuocmat.c -o sub/nuocmat.o

khithai_server.o: khithai_server.c
	gcc -Wall -c khithai_server.c -o khithai_server.o

nuocthai_server.o: nuocthai_server.c
	gcc -Wall -c nuocthai_server.c -o nuocthai_server.o

khongkhi_server.o: khongkhi_server.c
	gcc -Wall -c khongkhi_server.c -o khongkhi_server.o

nuocmat_server.o: nuocmat_server.c
	gcc -Wall -c nuocmat_server.c -o nuocmat_server.o

clean:
	rm *.o khithai_server nuocthai_server khongkhi_server nuocmat_server ../model/*.o sub/*.o

cleanall:
	rm *.o khithai_server nuocthai_server khongkhi_server ../model/*.o ../open62541/open62541.o sub/*.o

run:
	./khithai_server $(opcua_ip) 4840 & ./nuocthai_server $(opcua_ip) 4841 & ./khongkhi_server $(opcua_ip) 4842 & ./nuocmat_server $(opcua_ip) 4843 && fg

