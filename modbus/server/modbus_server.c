#include <stdio.h>
#include <modbus.h>
#include <signal.h>

static volatile int running  = 1;
modbus_mapping_t *mb_mapping;

void intHandler(int dummy) {
    	running = 0;
}

int main() {

	signal(SIGINT, intHandler);

	/* The first value of each array is accessible from the 0 address. */
	mb_mapping = modbus_mapping_new(0, 0, 5, 0);

	printf("Value: %d\n", mb_mapping->tab_registers[1]);

	sigset_t myset;
	sigemptyset(&myset);

	while (running) {
    		printf("Modbus Server is running, press Ctrl C to stop...\n");
    		sigsuspend(&myset);
	}

	modbus_mapping_free(mb_mapping);
	return 1;
}
