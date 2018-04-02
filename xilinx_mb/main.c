/*
 * main.c
 *
 *  Created on: Apr 2, 2018
 *      Author: John
 */
#include <stdio.h>

#include "xparameters.h"
#include "xil_cache.h"
#include "xuartlite_i.h"

int main()
{
	Xil_ICacheEnable();
	Xil_DCacheEnable();

	// app "serial" number, increment or change so we know this
	// elf file is being used
	print("[1.0] Hello World from UART Test 1.0!\r\n");

	u8 receivedByte;
    while(1)
    {
        receivedByte = XUartLite_RecvByte(XPAR_AXI_UARTLITE_0_BASEADDR);
        xil_printf("[1.0] Received: %c\n\r", receivedByte);
    }

    print("---Exiting main---\n\r");
	Xil_DCacheDisable();
	Xil_ICacheDisable();

	return 0;
}


