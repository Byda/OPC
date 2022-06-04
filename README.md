# gateway
- OPC UA Server:
  + Information Model: opcua-molder used known nodes to build .xml file and then we used open62541 to build .c file model from .xml file.
  + Simulation: we simualated 4 types of oustation (air, waste air, surface water, under water) by random function.
  + makefile: c compiler gcc is used to build all these .c file into execute file.
 
- modbus client: is used to connect with others modbus client in this outstation.
