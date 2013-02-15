#include "IEC.h"

IEC::IEC() {
//	Init_I2C();
}

void IEC::Init_I2C() {
	// Vex 393

	DigitalModule* module = DigitalModule::GetInstance(1);

	if (module) {
		vex_393 = module->GetI2C(0x60);

		//vex_393->Write(0x4A, 0); // write zero to the address
	} else
		printf("Cannot find module");
}

int IEC::Get_Data_I2C() {
	int data = 0;

	if (vex_393) {
		
		char d_buffer[4]; // read the four bytes
		
		vex_393->Read(0x40, 4, (UINT8*)&d_buffer);
		
		data |= ((int) d_buffer[1]);
		
		data |= ((int) d_buffer[0]) << 8;
		
		data |= ((int) d_buffer[3]) << 16;
		
		data |= ((int) d_buffer[2]) << 24;
		
		printf("%i\n", data);
		
	} else
		printf("FAIL\n");
	
	return data;
}
