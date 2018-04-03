# MicroBlaze_UART
An example of using LabVIEW FPGA to program an FPGA that uses a MicroBlaze soft-core processor with a UART to communicate between LabVIEW FPGA and the MicroBlaze.

# YouTube Demonstrations
* Generate the code from this repository
  * https://youtu.be/Sg6snrIV0T0
* Running it on actual hardware
  * https://youtu.be/mX2Azog-9H8


# Requirements
* LabVIEW 2017 (32-bit)
  * http://www.ni.com/download/labview-development-system-2017/6679/en/
* LabVIEW 2017 FPGA Module
  * http://www.ni.com/download/labview-fpga-module-2017/6635/en/
* NI LabVIEW Instrument Design Libraries for High Speed Serial Instruments 17.0
  * http://www.ni.com/download/ni-labview-instrument-design-libraries-for-high-speed-serial-instruments-16.1/6868/en/
* LabVIEW 2017 FPGA Module Xilinx Compilation Tool for Vivado 2015.4
  * http://www.ni.com/download/labview-fpga-module-2017/6634/en/
* Xilinx Software Development Kit Standalone WebInstall Client - 2015.4
  * https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/embedded-design-tools/archive.html

# Instructions
* Open the [labview_fpga_uart/labview_fpga_uart.lvproj](labview_fpga_uart/labview_fpga_uart.lvproj)
* Expand the FPGA project
* Expand the Build Specifications option
* Build and Launch Vivado Design Suite
* Import the design from [xilinx_mb/d_microblaze.tcl](xilinx_mb/d_microblaze.tcl)
* Paste the source code from [xilinx_mb/main.c](xilinx_mb/main.c) in to a new application
* Associated generated elf with Vivado Project
* Run generate bitstream
* LabVIEW FPGA will expect an lvbitx file to be located in the following directory:
  * ./labview_fpga_uart/ProjectExportForVivado
  
# For More Information
See [www.fpganow.com](www.fpganow.com) for more information
