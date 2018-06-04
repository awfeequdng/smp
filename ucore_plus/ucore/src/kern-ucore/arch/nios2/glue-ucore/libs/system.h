#ifndef _ALTERA_SYSTEM-20121111_H_
#define _ALTERA_SYSTEM-20121111_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'nios2_cpu' in
 * file './nios2_cpu.sopcinfo'.
 */ 
    
/*
 * This file contains macros for module 'cpu' and devices
 * connected to the following masters:
 *   instruction_master
 *   tightly_coupled_instruction_master_0
 *   data_master
 *   tightly_coupled_data_master_0
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */ 
    
/*
 * Macros for module 'cpu', class 'altera_nios2'.
 * The macros have no prefix.
 */ 
#define CPU_IMPLEMENTATION "fast"
#define BIG_ENDIAN 0
#define CPU_FREQ 50000000
#define ICACHE_LINE_SIZE 32
#define ICACHE_LINE_SIZE_LOG2 5
#define ICACHE_SIZE 4096
#define DCACHE_LINE_SIZE 32
#define DCACHE_LINE_SIZE_LOG2 5
#define DCACHE_SIZE 2048
#define INITDA_SUPPORTED 
#define FLUSHDA_SUPPORTED 
#define HAS_JMPI_INSTRUCTION 
#define MMU_PRESENT 
#define KERNEL_REGION_BASE 0xc0000000
#define IO_REGION_BASE 0xe0000000
#define KERNEL_MMU_REGION_BASE 0x80000000
#define USER_REGION_BASE 0x0
#define PROCESS_ID_NUM_BITS 14
#define TLB_NUM_WAYS 16
#define TLB_NUM_WAYS_LOG2 4
#define TLB_PTR_SZ 7
#define TLB_NUM_ENTRIES 128
#define FAST_TLB_MISS_EXCEPTION_ADDR 0x0
#define EXCEPTION_ADDR 0x0
#define RESET_ADDR 0x0
#define BREAK_ADDR 0x0
#define HAS_DEBUG_STUB 
#define HAS_DEBUG_CORE 1
#define HAS_ILLEGAL_INSTRUCTION_EXCEPTION 
#define HAS_ILLEGAL_MEMORY_ACCESS_EXCEPTION 
#define HAS_DIVISION_ERROR_EXCEPTION 
#define HAS_EXTRA_EXCEPTION_INFO 
#define CPU_ID_SIZE 1
#define CPU_ID_VALUE 0x0
#define HARDWARE_DIVIDE_PRESENT 1
#define HARDWARE_MULTIPLY_PRESENT 1
#define HARDWARE_MULX_PRESENT 0
#define INST_ADDR_WIDTH 25
#define DATA_ADDR_WIDTH 25
#define NUM_OF_SHADOW_REG_SETS 0
    
/*
 * Macros for device 'cfi_flash', class 'altera_avalon_cfi_flash'
 * The macros are prefixed with 'CFI_FLASH_'.
 * The prefix is the slave descriptor.
 */ 
#define CFI_FLASH_COMPONENT_TYPE altera_avalon_cfi_flash
#define CFI_FLASH_COMPONENT_NAME cfi_flash
#define CFI_FLASH_BASE 0x0
#define CFI_FLASH_SPAN 4194304
#define CFI_FLASH_END 0x3fffff
#define CFI_FLASH_SETUP_VALUE 40
#define CFI_FLASH_WAIT_VALUE 160
#define CFI_FLASH_HOLD_VALUE 40
#define CFI_FLASH_TIMING_UNITS "ns"
#define CFI_FLASH_SIZE 4194304
#define CFI_FLASH_MEMORY_INFO_MEM_INIT_DATA_WIDTH 8
#define CFI_FLASH_MEMORY_INFO_HAS_BYTE_LANE 0
#define CFI_FLASH_MEMORY_INFO_IS_FLASH 1
#define CFI_FLASH_MEMORY_INFO_GENERATE_DAT_SYM 1
#define CFI_FLASH_MEMORY_INFO_GENERATE_FLASH 1
#define CFI_FLASH_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define CFI_FLASH_MEMORY_INFO_FLASH_INSTALL_DIR APP_DIR
    
/*
 * Macros for device 'timer_us', class 'altera_avalon_timer'
 * The macros are prefixed with 'TIMER_US_'.
 * The prefix is the slave descriptor.
 */ 
#define TIMER_US_COMPONENT_TYPE altera_avalon_timer
#define TIMER_US_COMPONENT_NAME timer_us
#define TIMER_US_BASE 0x400000
#define TIMER_US_SPAN 32
#define TIMER_US_END 0x40001f
#define TIMER_US_IRQ 5
#define TIMER_US_ALWAYS_RUN 0
#define TIMER_US_FIXED_PERIOD 0
#define TIMER_US_SNAPSHOT 1
#define TIMER_US_PERIOD 1
#define TIMER_US_PERIOD_UNITS "us"
#define TIMER_US_RESET_OUTPUT 0
#define TIMER_US_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_US_FREQ 50000000
#define TIMER_US_LOAD_VALUE 49ULL
#define TIMER_US_COUNTER_SIZE 32
#define TIMER_US_MULT 1.0E-6
#define TIMER_US_TICKS_PER_SEC 1000000
    
/*
 * Macros for device 'RF212_0', class 'RF212_Controller'
 * The macros are prefixed with 'RF212_0_'.
 * The prefix is the slave descriptor.
 */ 
#define RF212_0_COMPONENT_TYPE RF212_Controller
#define RF212_0_COMPONENT_NAME RF212_0
#define RF212_0_BASE 0x400400
#define RF212_0_SPAN 1024
#define RF212_0_END 0x4007ff
#define RF212_0_IRQ 6
    
/*
 * Macros for device 'epcs_flash_controller', class 'altera_avalon_epcs_flash_controller'
 * The macros are prefixed with 'EPCS_FLASH_CONTROLLER_'.
 * The prefix is the slave descriptor.
 */ 
#define EPCS_FLASH_CONTROLLER_COMPONENT_TYPE altera_avalon_epcs_flash_controller
#define EPCS_FLASH_CONTROLLER_COMPONENT_NAME epcs_flash_controller
#define EPCS_FLASH_CONTROLLER_BASE 0x401800
#define EPCS_FLASH_CONTROLLER_SPAN 2048
#define EPCS_FLASH_CONTROLLER_END 0x401fff
#define EPCS_FLASH_CONTROLLER_IRQ 1
#define EPCS_FLASH_CONTROLLER_REGISTER_OFFSET 512
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_MEM_INIT_DATA_WIDTH 32
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_MEM_INIT_FILENAME epcs_flash_controller_boot_rom
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_IS_EPCS 1
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_IS_FLASH 1
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_GENERATE_HEX 1
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_GENERATE_DAT_SYM 1
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_GENERATE_FLASH 1
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_HEX_INSTALL_DIR SIM_DIR
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define EPCS_FLASH_CONTROLLER_MEMORY_INFO_FLASH_INSTALL_DIR APP_DIR
    
/*
 * Macros for device 'onchip_memory2', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'ONCHIP_MEMORY2_'.
 * The prefix is the slave descriptor.
 */ 
#define ONCHIP_MEMORY2_COMPONENT_TYPE altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_COMPONENT_NAME onchip_memory2
#define ONCHIP_MEMORY2_BASE 0x402000
#define ONCHIP_MEMORY2_SPAN 1024
#define ONCHIP_MEMORY2_END 0x4023ff
#define ONCHIP_MEMORY2_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_INIT_CONTENTS_FILE "D:\OS\20120414\nios2_fpga\ff.hex"
#define ONCHIP_MEMORY2_NON_DEFAULT_INIT_FILE_ENABLED 1
#define ONCHIP_MEMORY2_GUI_RAM_BLOCK_TYPE "Automatic"
#define ONCHIP_MEMORY2_WRITABLE 1
#define ONCHIP_MEMORY2_DUAL_PORT 1
#define ONCHIP_MEMORY2_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_SIZE_VALUE 1024
#define ONCHIP_MEMORY2_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_RAM_BLOCK_TYPE "Auto"
#define ONCHIP_MEMORY2_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_MEMORY_INFO_MEM_INIT_DATA_WIDTH 32
#define ONCHIP_MEMORY2_MEMORY_INFO_HAS_BYTE_LANE 0
#define ONCHIP_MEMORY2_MEMORY_INFO_GENERATE_HEX 1
#define ONCHIP_MEMORY2_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define ONCHIP_MEMORY2_MEMORY_INFO_GENERATE_DAT_SYM 1
#define ONCHIP_MEMORY2_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define ONCHIP_MEMORY2_MEMORY_INFO_MEM_INIT_FILENAME D:\OS\20120414\nios2_fpga\ff.hex
    
/*
 * Macros for device 'timer', class 'altera_avalon_timer'
 * The macros are prefixed with 'TIMER_'.
 * The prefix is the slave descriptor.
 */ 
#define TIMER_COMPONENT_TYPE altera_avalon_timer
#define TIMER_COMPONENT_NAME timer
#define TIMER_BASE 0x402400
#define TIMER_SPAN 32
#define TIMER_END 0x40241f
#define TIMER_IRQ 2
#define TIMER_ALWAYS_RUN 1
#define TIMER_FIXED_PERIOD 1
#define TIMER_SNAPSHOT 1
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_FREQ 50000000
#define TIMER_LOAD_VALUE 49999ULL
#define TIMER_COUNTER_SIZE 32
#define TIMER_MULT 0.0010
#define TIMER_TICKS_PER_SEC 1000
    
/*
 * Macros for device 'uart', class 'altera_avalon_uart'
 * The macros are prefixed with 'UART_'.
 * The prefix is the slave descriptor.
 */ 
#define UART_COMPONENT_TYPE altera_avalon_uart
#define UART_COMPONENT_NAME uart
#define UART_BASE 0x402420
#define UART_SPAN 32
#define UART_END 0x40243f
#define UART_IRQ 4
#define UART_BAUD 115200
#define UART_DATA_BITS 8
#define UART_FIXED_BAUD 1
#define UART_PARITY 'O'
#define UART_STOP_BITS 1
#define UART_SYNC_REG_DEPTH 2
#define UART_USE_CTS_RTS 0
#define UART_USE_EOP_REGISTER 0
#define UART_SIM_TRUE_BAUD 0
#define UART_SIM_CHAR_STREAM ""
#define UART_FREQ 50000000
    
/*
 * Macros for device 'pio_led', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_LED_'.
 * The prefix is the slave descriptor.
 */ 
#define PIO_LED_COMPONENT_TYPE altera_avalon_pio
#define PIO_LED_COMPONENT_NAME pio_led
#define PIO_LED_BASE 0x402440
#define PIO_LED_SPAN 16
#define PIO_LED_END 0x40244f
#define PIO_LED_DO_TEST_BENCH_WIRING 0
#define PIO_LED_DRIVEN_SIM_VALUE 0x0
#define PIO_LED_HAS_TRI 0
#define PIO_LED_HAS_OUT 1
#define PIO_LED_HAS_IN 0
#define PIO_LED_CAPTURE 0
#define PIO_LED_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LED_DATA_WIDTH 8
#define PIO_LED_RESET_VALUE 0x0
#define PIO_LED_EDGE_TYPE "NONE"
#define PIO_LED_IRQ_TYPE "NONE"
#define PIO_LED_FREQ 50000000
    
/*
 * Macros for device 'sysid', class 'altera_avalon_sysid'
 * The macros are prefixed with 'SYSID_'.
 * The prefix is the slave descriptor.
 */ 
#define SYSID_COMPONENT_TYPE altera_avalon_sysid
#define SYSID_COMPONENT_NAME sysid
#define SYSID_BASE 0x402450
#define SYSID_SPAN 8
#define SYSID_END 0x402457
#define SYSID_ID 35
#define SYSID_TIMESTAMP 1352566910
    
/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */ 
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0x402458
#define JTAG_UART_SPAN 8
#define JTAG_UART_END 0x40245f
#define JTAG_UART_IRQ 3
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8
#define JTAG_UART_READ_THRESHOLD 8
    
/*
 * Macros for device 'sram', class 'sram_16bit_512k'
 * The macros are prefixed with 'SRAM_'.
 * The prefix is the slave descriptor.
 */ 
#define SRAM_COMPONENT_TYPE sram_16bit_512k
#define SRAM_COMPONENT_NAME sram
#define SRAM_BASE 0x500000
#define SRAM_SPAN 524288
#define SRAM_END 0x57ffff
    
/*
 * Macros for device 'sdram', class 'altera_avalon_new_sdram_controller'
 * The macros are prefixed with 'SDRAM_'.
 * The prefix is the slave descriptor.
 */ 
#define SDRAM_COMPONENT_TYPE altera_avalon_new_sdram_controller
#define SDRAM_COMPONENT_NAME sdram
#define SDRAM_BASE 0x1000000
#define SDRAM_SPAN 8388608
#define SDRAM_END 0x17fffff
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SIM_MODEL_BASE 0
#define SDRAM_SDRAM_DATA_WIDTH 16
#define SDRAM_SDRAM_ADDR_WIDTH 22
#define SDRAM_SDRAM_ROW_WIDTH 12
#define SDRAM_SDRAM_COL_WIDTH 8
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_REFRESH_PERIOD 15.625
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_CAS_LATENCY 3
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_AC 17.0
#define SDRAM_T_WR 14.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_SHARED_DATA 0
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_CONTENTS_INFO ""
#define SDRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 16
#define SDRAM_MEMORY_INFO_GENERATE_DAT_SYM 1
#define SDRAM_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
    
#endif	/* _ALTERA_SYSTEM-20121111_H_ */