#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'soc_system' in
 * file 'soc_system.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'sysid_qsys', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYSID_QSYS_'.
 * The prefix is the slave descriptor.
 */
#define SYSID_QSYS_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYSID_QSYS_COMPONENT_NAME sysid_qsys
#define SYSID_QSYS_BASE 0x1000
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_END 0x1007
#define SYSID_QSYS_ID 4294906626
#define SYSID_QSYS_TIMESTAMP 1586709271

/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0x2000
#define JTAG_UART_SPAN 8
#define JTAG_UART_END 0x2007
#define JTAG_UART_IRQ 2
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8

/*
 * Macros for device 'flags_in', class 'altera_avalon_pio'
 * The macros are prefixed with 'FLAGS_IN_'.
 * The prefix is the slave descriptor.
 */
#define FLAGS_IN_COMPONENT_TYPE altera_avalon_pio
#define FLAGS_IN_COMPONENT_NAME flags_in
#define FLAGS_IN_BASE 0x4000
#define FLAGS_IN_SPAN 16
#define FLAGS_IN_END 0x400f
#define FLAGS_IN_BIT_CLEARING_EDGE_REGISTER 0
#define FLAGS_IN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLAGS_IN_CAPTURE 0
#define FLAGS_IN_DATA_WIDTH 32
#define FLAGS_IN_DO_TEST_BENCH_WIRING 0
#define FLAGS_IN_DRIVEN_SIM_VALUE 0
#define FLAGS_IN_EDGE_TYPE NONE
#define FLAGS_IN_FREQ 50000000
#define FLAGS_IN_HAS_IN 1
#define FLAGS_IN_HAS_OUT 0
#define FLAGS_IN_HAS_TRI 0
#define FLAGS_IN_IRQ_TYPE NONE
#define FLAGS_IN_RESET_VALUE 0

/*
 * Macros for device 'flags_out', class 'altera_avalon_pio'
 * The macros are prefixed with 'FLAGS_OUT_'.
 * The prefix is the slave descriptor.
 */
#define FLAGS_OUT_COMPONENT_TYPE altera_avalon_pio
#define FLAGS_OUT_COMPONENT_NAME flags_out
#define FLAGS_OUT_BASE 0x4020
#define FLAGS_OUT_SPAN 16
#define FLAGS_OUT_END 0x402f
#define FLAGS_OUT_BIT_CLEARING_EDGE_REGISTER 0
#define FLAGS_OUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLAGS_OUT_CAPTURE 0
#define FLAGS_OUT_DATA_WIDTH 32
#define FLAGS_OUT_DO_TEST_BENCH_WIRING 0
#define FLAGS_OUT_DRIVEN_SIM_VALUE 0
#define FLAGS_OUT_EDGE_TYPE NONE
#define FLAGS_OUT_FREQ 50000000
#define FLAGS_OUT_HAS_IN 0
#define FLAGS_OUT_HAS_OUT 1
#define FLAGS_OUT_HAS_TRI 0
#define FLAGS_OUT_IRQ_TYPE NONE
#define FLAGS_OUT_RESET_VALUE 0

/*
 * Macros for device 'command_type', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_TYPE_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_TYPE_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_TYPE_COMPONENT_NAME command_type
#define COMMAND_TYPE_BASE 0x4040
#define COMMAND_TYPE_SPAN 16
#define COMMAND_TYPE_END 0x404f
#define COMMAND_TYPE_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_TYPE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_TYPE_CAPTURE 0
#define COMMAND_TYPE_DATA_WIDTH 32
#define COMMAND_TYPE_DO_TEST_BENCH_WIRING 0
#define COMMAND_TYPE_DRIVEN_SIM_VALUE 0
#define COMMAND_TYPE_EDGE_TYPE NONE
#define COMMAND_TYPE_FREQ 50000000
#define COMMAND_TYPE_HAS_IN 0
#define COMMAND_TYPE_HAS_OUT 1
#define COMMAND_TYPE_HAS_TRI 0
#define COMMAND_TYPE_IRQ_TYPE NONE
#define COMMAND_TYPE_RESET_VALUE 0

/*
 * Macros for device 'command_x', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_X_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_X_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_X_COMPONENT_NAME command_x
#define COMMAND_X_BASE 0x5000
#define COMMAND_X_SPAN 16
#define COMMAND_X_END 0x500f
#define COMMAND_X_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_X_CAPTURE 0
#define COMMAND_X_DATA_WIDTH 32
#define COMMAND_X_DO_TEST_BENCH_WIRING 0
#define COMMAND_X_DRIVEN_SIM_VALUE 0
#define COMMAND_X_EDGE_TYPE NONE
#define COMMAND_X_FREQ 50000000
#define COMMAND_X_HAS_IN 0
#define COMMAND_X_HAS_OUT 1
#define COMMAND_X_HAS_TRI 0
#define COMMAND_X_IRQ_TYPE NONE
#define COMMAND_X_RESET_VALUE 0

/*
 * Macros for device 'command_y', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_Y_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_Y_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_Y_COMPONENT_NAME command_y
#define COMMAND_Y_BASE 0x5020
#define COMMAND_Y_SPAN 16
#define COMMAND_Y_END 0x502f
#define COMMAND_Y_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_Y_CAPTURE 0
#define COMMAND_Y_DATA_WIDTH 32
#define COMMAND_Y_DO_TEST_BENCH_WIRING 0
#define COMMAND_Y_DRIVEN_SIM_VALUE 0
#define COMMAND_Y_EDGE_TYPE NONE
#define COMMAND_Y_FREQ 50000000
#define COMMAND_Y_HAS_IN 0
#define COMMAND_Y_HAS_OUT 1
#define COMMAND_Y_HAS_TRI 0
#define COMMAND_Y_IRQ_TYPE NONE
#define COMMAND_Y_RESET_VALUE 0

/*
 * Macros for device 'command_z', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_Z_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_Z_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_Z_COMPONENT_NAME command_z
#define COMMAND_Z_BASE 0x5040
#define COMMAND_Z_SPAN 16
#define COMMAND_Z_END 0x504f
#define COMMAND_Z_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_Z_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_Z_CAPTURE 0
#define COMMAND_Z_DATA_WIDTH 32
#define COMMAND_Z_DO_TEST_BENCH_WIRING 0
#define COMMAND_Z_DRIVEN_SIM_VALUE 0
#define COMMAND_Z_EDGE_TYPE NONE
#define COMMAND_Z_FREQ 50000000
#define COMMAND_Z_HAS_IN 0
#define COMMAND_Z_HAS_OUT 1
#define COMMAND_Z_HAS_TRI 0
#define COMMAND_Z_IRQ_TYPE NONE
#define COMMAND_Z_RESET_VALUE 0

/*
 * Macros for device 'command_e0', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_E0_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_E0_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_E0_COMPONENT_NAME command_e0
#define COMMAND_E0_BASE 0x5060
#define COMMAND_E0_SPAN 16
#define COMMAND_E0_END 0x506f
#define COMMAND_E0_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_E0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_E0_CAPTURE 0
#define COMMAND_E0_DATA_WIDTH 32
#define COMMAND_E0_DO_TEST_BENCH_WIRING 0
#define COMMAND_E0_DRIVEN_SIM_VALUE 0
#define COMMAND_E0_EDGE_TYPE NONE
#define COMMAND_E0_FREQ 50000000
#define COMMAND_E0_HAS_IN 0
#define COMMAND_E0_HAS_OUT 1
#define COMMAND_E0_HAS_TRI 0
#define COMMAND_E0_IRQ_TYPE NONE
#define COMMAND_E0_RESET_VALUE 0

/*
 * Macros for device 'command_e1', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_E1_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_E1_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_E1_COMPONENT_NAME command_e1
#define COMMAND_E1_BASE 0x5080
#define COMMAND_E1_SPAN 16
#define COMMAND_E1_END 0x508f
#define COMMAND_E1_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_E1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_E1_CAPTURE 0
#define COMMAND_E1_DATA_WIDTH 32
#define COMMAND_E1_DO_TEST_BENCH_WIRING 0
#define COMMAND_E1_DRIVEN_SIM_VALUE 0
#define COMMAND_E1_EDGE_TYPE NONE
#define COMMAND_E1_FREQ 50000000
#define COMMAND_E1_HAS_IN 0
#define COMMAND_E1_HAS_OUT 1
#define COMMAND_E1_HAS_TRI 0
#define COMMAND_E1_IRQ_TYPE NONE
#define COMMAND_E1_RESET_VALUE 0

/*
 * Macros for device 'command_f', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_F_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_F_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_F_COMPONENT_NAME command_f
#define COMMAND_F_BASE 0x50a0
#define COMMAND_F_SPAN 16
#define COMMAND_F_END 0x50af
#define COMMAND_F_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_F_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_F_CAPTURE 0
#define COMMAND_F_DATA_WIDTH 32
#define COMMAND_F_DO_TEST_BENCH_WIRING 0
#define COMMAND_F_DRIVEN_SIM_VALUE 0
#define COMMAND_F_EDGE_TYPE NONE
#define COMMAND_F_FREQ 50000000
#define COMMAND_F_HAS_IN 0
#define COMMAND_F_HAS_OUT 1
#define COMMAND_F_HAS_TRI 0
#define COMMAND_F_IRQ_TYPE NONE
#define COMMAND_F_RESET_VALUE 0

/*
 * Macros for device 'command_t', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_T_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_T_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_T_COMPONENT_NAME command_t
#define COMMAND_T_BASE 0x50c0
#define COMMAND_T_SPAN 16
#define COMMAND_T_END 0x50cf
#define COMMAND_T_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_T_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_T_CAPTURE 0
#define COMMAND_T_DATA_WIDTH 32
#define COMMAND_T_DO_TEST_BENCH_WIRING 0
#define COMMAND_T_DRIVEN_SIM_VALUE 0
#define COMMAND_T_EDGE_TYPE NONE
#define COMMAND_T_FREQ 50000000
#define COMMAND_T_HAS_IN 0
#define COMMAND_T_HAS_OUT 1
#define COMMAND_T_HAS_TRI 0
#define COMMAND_T_IRQ_TYPE NONE
#define COMMAND_T_RESET_VALUE 0

/*
 * Macros for device 'command_dt', class 'altera_avalon_pio'
 * The macros are prefixed with 'COMMAND_DT_'.
 * The prefix is the slave descriptor.
 */
#define COMMAND_DT_COMPONENT_TYPE altera_avalon_pio
#define COMMAND_DT_COMPONENT_NAME command_dt
#define COMMAND_DT_BASE 0x50e0
#define COMMAND_DT_SPAN 16
#define COMMAND_DT_END 0x50ef
#define COMMAND_DT_BIT_CLEARING_EDGE_REGISTER 0
#define COMMAND_DT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COMMAND_DT_CAPTURE 0
#define COMMAND_DT_DATA_WIDTH 32
#define COMMAND_DT_DO_TEST_BENCH_WIRING 0
#define COMMAND_DT_DRIVEN_SIM_VALUE 0
#define COMMAND_DT_EDGE_TYPE NONE
#define COMMAND_DT_FREQ 50000000
#define COMMAND_DT_HAS_IN 0
#define COMMAND_DT_HAS_OUT 1
#define COMMAND_DT_HAS_TRI 0
#define COMMAND_DT_IRQ_TYPE NONE
#define COMMAND_DT_RESET_VALUE 0

/*
 * Macros for device 'settings_max_speed_x', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_SPEED_X_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_SPEED_X_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_SPEED_X_COMPONENT_NAME settings_max_speed_x
#define SETTINGS_MAX_SPEED_X_BASE 0x5100
#define SETTINGS_MAX_SPEED_X_SPAN 16
#define SETTINGS_MAX_SPEED_X_END 0x510f
#define SETTINGS_MAX_SPEED_X_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_SPEED_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_SPEED_X_CAPTURE 0
#define SETTINGS_MAX_SPEED_X_DATA_WIDTH 32
#define SETTINGS_MAX_SPEED_X_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_SPEED_X_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_SPEED_X_EDGE_TYPE NONE
#define SETTINGS_MAX_SPEED_X_FREQ 50000000
#define SETTINGS_MAX_SPEED_X_HAS_IN 0
#define SETTINGS_MAX_SPEED_X_HAS_OUT 1
#define SETTINGS_MAX_SPEED_X_HAS_TRI 0
#define SETTINGS_MAX_SPEED_X_IRQ_TYPE NONE
#define SETTINGS_MAX_SPEED_X_RESET_VALUE 0

/*
 * Macros for device 'settings_max_speed_y', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_SPEED_Y_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_SPEED_Y_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_SPEED_Y_COMPONENT_NAME settings_max_speed_y
#define SETTINGS_MAX_SPEED_Y_BASE 0x5120
#define SETTINGS_MAX_SPEED_Y_SPAN 16
#define SETTINGS_MAX_SPEED_Y_END 0x512f
#define SETTINGS_MAX_SPEED_Y_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_SPEED_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_SPEED_Y_CAPTURE 0
#define SETTINGS_MAX_SPEED_Y_DATA_WIDTH 32
#define SETTINGS_MAX_SPEED_Y_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_SPEED_Y_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_SPEED_Y_EDGE_TYPE NONE
#define SETTINGS_MAX_SPEED_Y_FREQ 50000000
#define SETTINGS_MAX_SPEED_Y_HAS_IN 0
#define SETTINGS_MAX_SPEED_Y_HAS_OUT 1
#define SETTINGS_MAX_SPEED_Y_HAS_TRI 0
#define SETTINGS_MAX_SPEED_Y_IRQ_TYPE NONE
#define SETTINGS_MAX_SPEED_Y_RESET_VALUE 0

/*
 * Macros for device 'settings_max_speed_z', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_SPEED_Z_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_SPEED_Z_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_SPEED_Z_COMPONENT_NAME settings_max_speed_z
#define SETTINGS_MAX_SPEED_Z_BASE 0x5140
#define SETTINGS_MAX_SPEED_Z_SPAN 16
#define SETTINGS_MAX_SPEED_Z_END 0x514f
#define SETTINGS_MAX_SPEED_Z_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_SPEED_Z_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_SPEED_Z_CAPTURE 0
#define SETTINGS_MAX_SPEED_Z_DATA_WIDTH 32
#define SETTINGS_MAX_SPEED_Z_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_SPEED_Z_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_SPEED_Z_EDGE_TYPE NONE
#define SETTINGS_MAX_SPEED_Z_FREQ 50000000
#define SETTINGS_MAX_SPEED_Z_HAS_IN 0
#define SETTINGS_MAX_SPEED_Z_HAS_OUT 1
#define SETTINGS_MAX_SPEED_Z_HAS_TRI 0
#define SETTINGS_MAX_SPEED_Z_IRQ_TYPE NONE
#define SETTINGS_MAX_SPEED_Z_RESET_VALUE 0

/*
 * Macros for device 'settings_max_speed_e0', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_SPEED_E0_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_SPEED_E0_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_SPEED_E0_COMPONENT_NAME settings_max_speed_e0
#define SETTINGS_MAX_SPEED_E0_BASE 0x5160
#define SETTINGS_MAX_SPEED_E0_SPAN 16
#define SETTINGS_MAX_SPEED_E0_END 0x516f
#define SETTINGS_MAX_SPEED_E0_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_SPEED_E0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_SPEED_E0_CAPTURE 0
#define SETTINGS_MAX_SPEED_E0_DATA_WIDTH 32
#define SETTINGS_MAX_SPEED_E0_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_SPEED_E0_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_SPEED_E0_EDGE_TYPE NONE
#define SETTINGS_MAX_SPEED_E0_FREQ 50000000
#define SETTINGS_MAX_SPEED_E0_HAS_IN 0
#define SETTINGS_MAX_SPEED_E0_HAS_OUT 1
#define SETTINGS_MAX_SPEED_E0_HAS_TRI 0
#define SETTINGS_MAX_SPEED_E0_IRQ_TYPE NONE
#define SETTINGS_MAX_SPEED_E0_RESET_VALUE 0

/*
 * Macros for device 'settings_max_speed_e1', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_SPEED_E1_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_SPEED_E1_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_SPEED_E1_COMPONENT_NAME settings_max_speed_e1
#define SETTINGS_MAX_SPEED_E1_BASE 0x5180
#define SETTINGS_MAX_SPEED_E1_SPAN 16
#define SETTINGS_MAX_SPEED_E1_END 0x518f
#define SETTINGS_MAX_SPEED_E1_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_SPEED_E1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_SPEED_E1_CAPTURE 0
#define SETTINGS_MAX_SPEED_E1_DATA_WIDTH 32
#define SETTINGS_MAX_SPEED_E1_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_SPEED_E1_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_SPEED_E1_EDGE_TYPE NONE
#define SETTINGS_MAX_SPEED_E1_FREQ 50000000
#define SETTINGS_MAX_SPEED_E1_HAS_IN 0
#define SETTINGS_MAX_SPEED_E1_HAS_OUT 1
#define SETTINGS_MAX_SPEED_E1_HAS_TRI 0
#define SETTINGS_MAX_SPEED_E1_IRQ_TYPE NONE
#define SETTINGS_MAX_SPEED_E1_RESET_VALUE 0

/*
 * Macros for device 'settings_acceleration_x', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_ACCELERATION_X_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_ACCELERATION_X_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_ACCELERATION_X_COMPONENT_NAME settings_acceleration_x
#define SETTINGS_ACCELERATION_X_BASE 0x51a0
#define SETTINGS_ACCELERATION_X_SPAN 16
#define SETTINGS_ACCELERATION_X_END 0x51af
#define SETTINGS_ACCELERATION_X_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_ACCELERATION_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_ACCELERATION_X_CAPTURE 0
#define SETTINGS_ACCELERATION_X_DATA_WIDTH 32
#define SETTINGS_ACCELERATION_X_DO_TEST_BENCH_WIRING 0
#define SETTINGS_ACCELERATION_X_DRIVEN_SIM_VALUE 0
#define SETTINGS_ACCELERATION_X_EDGE_TYPE NONE
#define SETTINGS_ACCELERATION_X_FREQ 50000000
#define SETTINGS_ACCELERATION_X_HAS_IN 0
#define SETTINGS_ACCELERATION_X_HAS_OUT 1
#define SETTINGS_ACCELERATION_X_HAS_TRI 0
#define SETTINGS_ACCELERATION_X_IRQ_TYPE NONE
#define SETTINGS_ACCELERATION_X_RESET_VALUE 0

/*
 * Macros for device 'settings_acceleration_y', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_ACCELERATION_Y_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_ACCELERATION_Y_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_ACCELERATION_Y_COMPONENT_NAME settings_acceleration_y
#define SETTINGS_ACCELERATION_Y_BASE 0x51c0
#define SETTINGS_ACCELERATION_Y_SPAN 16
#define SETTINGS_ACCELERATION_Y_END 0x51cf
#define SETTINGS_ACCELERATION_Y_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_ACCELERATION_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_ACCELERATION_Y_CAPTURE 0
#define SETTINGS_ACCELERATION_Y_DATA_WIDTH 32
#define SETTINGS_ACCELERATION_Y_DO_TEST_BENCH_WIRING 0
#define SETTINGS_ACCELERATION_Y_DRIVEN_SIM_VALUE 0
#define SETTINGS_ACCELERATION_Y_EDGE_TYPE NONE
#define SETTINGS_ACCELERATION_Y_FREQ 50000000
#define SETTINGS_ACCELERATION_Y_HAS_IN 0
#define SETTINGS_ACCELERATION_Y_HAS_OUT 1
#define SETTINGS_ACCELERATION_Y_HAS_TRI 0
#define SETTINGS_ACCELERATION_Y_IRQ_TYPE NONE
#define SETTINGS_ACCELERATION_Y_RESET_VALUE 0

/*
 * Macros for device 'settings_acceleration_z', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_ACCELERATION_Z_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_ACCELERATION_Z_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_ACCELERATION_Z_COMPONENT_NAME settings_acceleration_z
#define SETTINGS_ACCELERATION_Z_BASE 0x51e0
#define SETTINGS_ACCELERATION_Z_SPAN 16
#define SETTINGS_ACCELERATION_Z_END 0x51ef
#define SETTINGS_ACCELERATION_Z_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_ACCELERATION_Z_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_ACCELERATION_Z_CAPTURE 0
#define SETTINGS_ACCELERATION_Z_DATA_WIDTH 32
#define SETTINGS_ACCELERATION_Z_DO_TEST_BENCH_WIRING 0
#define SETTINGS_ACCELERATION_Z_DRIVEN_SIM_VALUE 0
#define SETTINGS_ACCELERATION_Z_EDGE_TYPE NONE
#define SETTINGS_ACCELERATION_Z_FREQ 50000000
#define SETTINGS_ACCELERATION_Z_HAS_IN 0
#define SETTINGS_ACCELERATION_Z_HAS_OUT 1
#define SETTINGS_ACCELERATION_Z_HAS_TRI 0
#define SETTINGS_ACCELERATION_Z_IRQ_TYPE NONE
#define SETTINGS_ACCELERATION_Z_RESET_VALUE 0

/*
 * Macros for device 'settings_acceleration_e0', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_ACCELERATION_E0_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_ACCELERATION_E0_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_ACCELERATION_E0_COMPONENT_NAME settings_acceleration_e0
#define SETTINGS_ACCELERATION_E0_BASE 0x5200
#define SETTINGS_ACCELERATION_E0_SPAN 16
#define SETTINGS_ACCELERATION_E0_END 0x520f
#define SETTINGS_ACCELERATION_E0_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_ACCELERATION_E0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_ACCELERATION_E0_CAPTURE 0
#define SETTINGS_ACCELERATION_E0_DATA_WIDTH 32
#define SETTINGS_ACCELERATION_E0_DO_TEST_BENCH_WIRING 0
#define SETTINGS_ACCELERATION_E0_DRIVEN_SIM_VALUE 0
#define SETTINGS_ACCELERATION_E0_EDGE_TYPE NONE
#define SETTINGS_ACCELERATION_E0_FREQ 50000000
#define SETTINGS_ACCELERATION_E0_HAS_IN 0
#define SETTINGS_ACCELERATION_E0_HAS_OUT 1
#define SETTINGS_ACCELERATION_E0_HAS_TRI 0
#define SETTINGS_ACCELERATION_E0_IRQ_TYPE NONE
#define SETTINGS_ACCELERATION_E0_RESET_VALUE 0

/*
 * Macros for device 'settings_acceleration_e1', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_ACCELERATION_E1_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_ACCELERATION_E1_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_ACCELERATION_E1_COMPONENT_NAME settings_acceleration_e1
#define SETTINGS_ACCELERATION_E1_BASE 0x5220
#define SETTINGS_ACCELERATION_E1_SPAN 16
#define SETTINGS_ACCELERATION_E1_END 0x522f
#define SETTINGS_ACCELERATION_E1_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_ACCELERATION_E1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_ACCELERATION_E1_CAPTURE 0
#define SETTINGS_ACCELERATION_E1_DATA_WIDTH 32
#define SETTINGS_ACCELERATION_E1_DO_TEST_BENCH_WIRING 0
#define SETTINGS_ACCELERATION_E1_DRIVEN_SIM_VALUE 0
#define SETTINGS_ACCELERATION_E1_EDGE_TYPE NONE
#define SETTINGS_ACCELERATION_E1_FREQ 50000000
#define SETTINGS_ACCELERATION_E1_HAS_IN 0
#define SETTINGS_ACCELERATION_E1_HAS_OUT 1
#define SETTINGS_ACCELERATION_E1_HAS_TRI 0
#define SETTINGS_ACCELERATION_E1_IRQ_TYPE NONE
#define SETTINGS_ACCELERATION_E1_RESET_VALUE 0

/*
 * Macros for device 'settings_jerk_x', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_JERK_X_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_JERK_X_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_JERK_X_COMPONENT_NAME settings_jerk_x
#define SETTINGS_JERK_X_BASE 0x5240
#define SETTINGS_JERK_X_SPAN 16
#define SETTINGS_JERK_X_END 0x524f
#define SETTINGS_JERK_X_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_JERK_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_JERK_X_CAPTURE 0
#define SETTINGS_JERK_X_DATA_WIDTH 32
#define SETTINGS_JERK_X_DO_TEST_BENCH_WIRING 0
#define SETTINGS_JERK_X_DRIVEN_SIM_VALUE 0
#define SETTINGS_JERK_X_EDGE_TYPE NONE
#define SETTINGS_JERK_X_FREQ 50000000
#define SETTINGS_JERK_X_HAS_IN 0
#define SETTINGS_JERK_X_HAS_OUT 1
#define SETTINGS_JERK_X_HAS_TRI 0
#define SETTINGS_JERK_X_IRQ_TYPE NONE
#define SETTINGS_JERK_X_RESET_VALUE 0

/*
 * Macros for device 'settings_jerk_y', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_JERK_Y_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_JERK_Y_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_JERK_Y_COMPONENT_NAME settings_jerk_y
#define SETTINGS_JERK_Y_BASE 0x5260
#define SETTINGS_JERK_Y_SPAN 16
#define SETTINGS_JERK_Y_END 0x526f
#define SETTINGS_JERK_Y_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_JERK_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_JERK_Y_CAPTURE 0
#define SETTINGS_JERK_Y_DATA_WIDTH 32
#define SETTINGS_JERK_Y_DO_TEST_BENCH_WIRING 0
#define SETTINGS_JERK_Y_DRIVEN_SIM_VALUE 0
#define SETTINGS_JERK_Y_EDGE_TYPE NONE
#define SETTINGS_JERK_Y_FREQ 50000000
#define SETTINGS_JERK_Y_HAS_IN 0
#define SETTINGS_JERK_Y_HAS_OUT 1
#define SETTINGS_JERK_Y_HAS_TRI 0
#define SETTINGS_JERK_Y_IRQ_TYPE NONE
#define SETTINGS_JERK_Y_RESET_VALUE 0

/*
 * Macros for device 'settings_jerk_z', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_JERK_Z_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_JERK_Z_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_JERK_Z_COMPONENT_NAME settings_jerk_z
#define SETTINGS_JERK_Z_BASE 0x5280
#define SETTINGS_JERK_Z_SPAN 16
#define SETTINGS_JERK_Z_END 0x528f
#define SETTINGS_JERK_Z_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_JERK_Z_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_JERK_Z_CAPTURE 0
#define SETTINGS_JERK_Z_DATA_WIDTH 32
#define SETTINGS_JERK_Z_DO_TEST_BENCH_WIRING 0
#define SETTINGS_JERK_Z_DRIVEN_SIM_VALUE 0
#define SETTINGS_JERK_Z_EDGE_TYPE NONE
#define SETTINGS_JERK_Z_FREQ 50000000
#define SETTINGS_JERK_Z_HAS_IN 0
#define SETTINGS_JERK_Z_HAS_OUT 1
#define SETTINGS_JERK_Z_HAS_TRI 0
#define SETTINGS_JERK_Z_IRQ_TYPE NONE
#define SETTINGS_JERK_Z_RESET_VALUE 0

/*
 * Macros for device 'settings_jerk_e0', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_JERK_E0_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_JERK_E0_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_JERK_E0_COMPONENT_NAME settings_jerk_e0
#define SETTINGS_JERK_E0_BASE 0x52a0
#define SETTINGS_JERK_E0_SPAN 16
#define SETTINGS_JERK_E0_END 0x52af
#define SETTINGS_JERK_E0_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_JERK_E0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_JERK_E0_CAPTURE 0
#define SETTINGS_JERK_E0_DATA_WIDTH 32
#define SETTINGS_JERK_E0_DO_TEST_BENCH_WIRING 0
#define SETTINGS_JERK_E0_DRIVEN_SIM_VALUE 0
#define SETTINGS_JERK_E0_EDGE_TYPE NONE
#define SETTINGS_JERK_E0_FREQ 50000000
#define SETTINGS_JERK_E0_HAS_IN 0
#define SETTINGS_JERK_E0_HAS_OUT 1
#define SETTINGS_JERK_E0_HAS_TRI 0
#define SETTINGS_JERK_E0_IRQ_TYPE NONE
#define SETTINGS_JERK_E0_RESET_VALUE 0

/*
 * Macros for device 'settings_jerk_e1', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_JERK_E1_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_JERK_E1_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_JERK_E1_COMPONENT_NAME settings_jerk_e1
#define SETTINGS_JERK_E1_BASE 0x52c0
#define SETTINGS_JERK_E1_SPAN 16
#define SETTINGS_JERK_E1_END 0x52cf
#define SETTINGS_JERK_E1_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_JERK_E1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_JERK_E1_CAPTURE 0
#define SETTINGS_JERK_E1_DATA_WIDTH 32
#define SETTINGS_JERK_E1_DO_TEST_BENCH_WIRING 0
#define SETTINGS_JERK_E1_DRIVEN_SIM_VALUE 0
#define SETTINGS_JERK_E1_EDGE_TYPE NONE
#define SETTINGS_JERK_E1_FREQ 50000000
#define SETTINGS_JERK_E1_HAS_IN 0
#define SETTINGS_JERK_E1_HAS_OUT 1
#define SETTINGS_JERK_E1_HAS_TRI 0
#define SETTINGS_JERK_E1_IRQ_TYPE NONE
#define SETTINGS_JERK_E1_RESET_VALUE 0

/*
 * Macros for device 'settings_max_temp_e0', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_TEMP_E0_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_TEMP_E0_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_TEMP_E0_COMPONENT_NAME settings_max_temp_e0
#define SETTINGS_MAX_TEMP_E0_BASE 0x52e0
#define SETTINGS_MAX_TEMP_E0_SPAN 16
#define SETTINGS_MAX_TEMP_E0_END 0x52ef
#define SETTINGS_MAX_TEMP_E0_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_TEMP_E0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_TEMP_E0_CAPTURE 0
#define SETTINGS_MAX_TEMP_E0_DATA_WIDTH 12
#define SETTINGS_MAX_TEMP_E0_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_TEMP_E0_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_TEMP_E0_EDGE_TYPE NONE
#define SETTINGS_MAX_TEMP_E0_FREQ 50000000
#define SETTINGS_MAX_TEMP_E0_HAS_IN 0
#define SETTINGS_MAX_TEMP_E0_HAS_OUT 1
#define SETTINGS_MAX_TEMP_E0_HAS_TRI 0
#define SETTINGS_MAX_TEMP_E0_IRQ_TYPE NONE
#define SETTINGS_MAX_TEMP_E0_RESET_VALUE 0

/*
 * Macros for device 'settings_max_temp_e1', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_TEMP_E1_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_TEMP_E1_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_TEMP_E1_COMPONENT_NAME settings_max_temp_e1
#define SETTINGS_MAX_TEMP_E1_BASE 0x5300
#define SETTINGS_MAX_TEMP_E1_SPAN 16
#define SETTINGS_MAX_TEMP_E1_END 0x530f
#define SETTINGS_MAX_TEMP_E1_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_TEMP_E1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_TEMP_E1_CAPTURE 0
#define SETTINGS_MAX_TEMP_E1_DATA_WIDTH 12
#define SETTINGS_MAX_TEMP_E1_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_TEMP_E1_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_TEMP_E1_EDGE_TYPE NONE
#define SETTINGS_MAX_TEMP_E1_FREQ 50000000
#define SETTINGS_MAX_TEMP_E1_HAS_IN 0
#define SETTINGS_MAX_TEMP_E1_HAS_OUT 1
#define SETTINGS_MAX_TEMP_E1_HAS_TRI 0
#define SETTINGS_MAX_TEMP_E1_IRQ_TYPE NONE
#define SETTINGS_MAX_TEMP_E1_RESET_VALUE 0

/*
 * Macros for device 'settings_max_temp_bed', class 'altera_avalon_pio'
 * The macros are prefixed with 'SETTINGS_MAX_TEMP_BED_'.
 * The prefix is the slave descriptor.
 */
#define SETTINGS_MAX_TEMP_BED_COMPONENT_TYPE altera_avalon_pio
#define SETTINGS_MAX_TEMP_BED_COMPONENT_NAME settings_max_temp_bed
#define SETTINGS_MAX_TEMP_BED_BASE 0x5320
#define SETTINGS_MAX_TEMP_BED_SPAN 16
#define SETTINGS_MAX_TEMP_BED_END 0x532f
#define SETTINGS_MAX_TEMP_BED_BIT_CLEARING_EDGE_REGISTER 0
#define SETTINGS_MAX_TEMP_BED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SETTINGS_MAX_TEMP_BED_CAPTURE 0
#define SETTINGS_MAX_TEMP_BED_DATA_WIDTH 12
#define SETTINGS_MAX_TEMP_BED_DO_TEST_BENCH_WIRING 0
#define SETTINGS_MAX_TEMP_BED_DRIVEN_SIM_VALUE 0
#define SETTINGS_MAX_TEMP_BED_EDGE_TYPE NONE
#define SETTINGS_MAX_TEMP_BED_FREQ 50000000
#define SETTINGS_MAX_TEMP_BED_HAS_IN 0
#define SETTINGS_MAX_TEMP_BED_HAS_OUT 1
#define SETTINGS_MAX_TEMP_BED_HAS_TRI 0
#define SETTINGS_MAX_TEMP_BED_IRQ_TYPE NONE
#define SETTINGS_MAX_TEMP_BED_RESET_VALUE 0

/*
 * Macros for device 'temp_0', class 'altera_avalon_pio'
 * The macros are prefixed with 'TEMP_0_'.
 * The prefix is the slave descriptor.
 */
#define TEMP_0_COMPONENT_TYPE altera_avalon_pio
#define TEMP_0_COMPONENT_NAME temp_0
#define TEMP_0_BASE 0x6000
#define TEMP_0_SPAN 16
#define TEMP_0_END 0x600f
#define TEMP_0_BIT_CLEARING_EDGE_REGISTER 0
#define TEMP_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TEMP_0_CAPTURE 0
#define TEMP_0_DATA_WIDTH 12
#define TEMP_0_DO_TEST_BENCH_WIRING 0
#define TEMP_0_DRIVEN_SIM_VALUE 0
#define TEMP_0_EDGE_TYPE NONE
#define TEMP_0_FREQ 50000000
#define TEMP_0_HAS_IN 1
#define TEMP_0_HAS_OUT 0
#define TEMP_0_HAS_TRI 0
#define TEMP_0_IRQ_TYPE NONE
#define TEMP_0_RESET_VALUE 0

/*
 * Macros for device 'temp_1', class 'altera_avalon_pio'
 * The macros are prefixed with 'TEMP_1_'.
 * The prefix is the slave descriptor.
 */
#define TEMP_1_COMPONENT_TYPE altera_avalon_pio
#define TEMP_1_COMPONENT_NAME temp_1
#define TEMP_1_BASE 0x6020
#define TEMP_1_SPAN 16
#define TEMP_1_END 0x602f
#define TEMP_1_BIT_CLEARING_EDGE_REGISTER 0
#define TEMP_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TEMP_1_CAPTURE 0
#define TEMP_1_DATA_WIDTH 12
#define TEMP_1_DO_TEST_BENCH_WIRING 0
#define TEMP_1_DRIVEN_SIM_VALUE 0
#define TEMP_1_EDGE_TYPE NONE
#define TEMP_1_FREQ 50000000
#define TEMP_1_HAS_IN 1
#define TEMP_1_HAS_OUT 0
#define TEMP_1_HAS_TRI 0
#define TEMP_1_IRQ_TYPE NONE
#define TEMP_1_RESET_VALUE 0

/*
 * Macros for device 'temp_2', class 'altera_avalon_pio'
 * The macros are prefixed with 'TEMP_2_'.
 * The prefix is the slave descriptor.
 */
#define TEMP_2_COMPONENT_TYPE altera_avalon_pio
#define TEMP_2_COMPONENT_NAME temp_2
#define TEMP_2_BASE 0x6040
#define TEMP_2_SPAN 16
#define TEMP_2_END 0x604f
#define TEMP_2_BIT_CLEARING_EDGE_REGISTER 0
#define TEMP_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TEMP_2_CAPTURE 0
#define TEMP_2_DATA_WIDTH 12
#define TEMP_2_DO_TEST_BENCH_WIRING 0
#define TEMP_2_DRIVEN_SIM_VALUE 0
#define TEMP_2_EDGE_TYPE NONE
#define TEMP_2_FREQ 50000000
#define TEMP_2_HAS_IN 1
#define TEMP_2_HAS_OUT 0
#define TEMP_2_HAS_TRI 0
#define TEMP_2_IRQ_TYPE NONE
#define TEMP_2_RESET_VALUE 0

/*
 * Macros for device 'position_x', class 'altera_avalon_pio'
 * The macros are prefixed with 'POSITION_X_'.
 * The prefix is the slave descriptor.
 */
#define POSITION_X_COMPONENT_TYPE altera_avalon_pio
#define POSITION_X_COMPONENT_NAME position_x
#define POSITION_X_BASE 0x6060
#define POSITION_X_SPAN 16
#define POSITION_X_END 0x606f
#define POSITION_X_BIT_CLEARING_EDGE_REGISTER 0
#define POSITION_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define POSITION_X_CAPTURE 0
#define POSITION_X_DATA_WIDTH 12
#define POSITION_X_DO_TEST_BENCH_WIRING 0
#define POSITION_X_DRIVEN_SIM_VALUE 0
#define POSITION_X_EDGE_TYPE NONE
#define POSITION_X_FREQ 50000000
#define POSITION_X_HAS_IN 0
#define POSITION_X_HAS_OUT 1
#define POSITION_X_HAS_TRI 0
#define POSITION_X_IRQ_TYPE NONE
#define POSITION_X_RESET_VALUE 0

/*
 * Macros for device 'position_y', class 'altera_avalon_pio'
 * The macros are prefixed with 'POSITION_Y_'.
 * The prefix is the slave descriptor.
 */
#define POSITION_Y_COMPONENT_TYPE altera_avalon_pio
#define POSITION_Y_COMPONENT_NAME position_y
#define POSITION_Y_BASE 0x6080
#define POSITION_Y_SPAN 16
#define POSITION_Y_END 0x608f
#define POSITION_Y_BIT_CLEARING_EDGE_REGISTER 0
#define POSITION_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define POSITION_Y_CAPTURE 0
#define POSITION_Y_DATA_WIDTH 12
#define POSITION_Y_DO_TEST_BENCH_WIRING 0
#define POSITION_Y_DRIVEN_SIM_VALUE 0
#define POSITION_Y_EDGE_TYPE NONE
#define POSITION_Y_FREQ 50000000
#define POSITION_Y_HAS_IN 0
#define POSITION_Y_HAS_OUT 1
#define POSITION_Y_HAS_TRI 0
#define POSITION_Y_IRQ_TYPE NONE
#define POSITION_Y_RESET_VALUE 0

/*
 * Macros for device 'position_z', class 'altera_avalon_pio'
 * The macros are prefixed with 'POSITION_Z_'.
 * The prefix is the slave descriptor.
 */
#define POSITION_Z_COMPONENT_TYPE altera_avalon_pio
#define POSITION_Z_COMPONENT_NAME position_z
#define POSITION_Z_BASE 0x60a0
#define POSITION_Z_SPAN 16
#define POSITION_Z_END 0x60af
#define POSITION_Z_BIT_CLEARING_EDGE_REGISTER 0
#define POSITION_Z_BIT_MODIFYING_OUTPUT_REGISTER 0
#define POSITION_Z_CAPTURE 0
#define POSITION_Z_DATA_WIDTH 12
#define POSITION_Z_DO_TEST_BENCH_WIRING 0
#define POSITION_Z_DRIVEN_SIM_VALUE 0
#define POSITION_Z_EDGE_TYPE NONE
#define POSITION_Z_FREQ 50000000
#define POSITION_Z_HAS_IN 0
#define POSITION_Z_HAS_OUT 1
#define POSITION_Z_HAS_TRI 0
#define POSITION_Z_IRQ_TYPE NONE
#define POSITION_Z_RESET_VALUE 0

/*
 * Macros for device 'position_e0', class 'altera_avalon_pio'
 * The macros are prefixed with 'POSITION_E0_'.
 * The prefix is the slave descriptor.
 */
#define POSITION_E0_COMPONENT_TYPE altera_avalon_pio
#define POSITION_E0_COMPONENT_NAME position_e0
#define POSITION_E0_BASE 0x60c0
#define POSITION_E0_SPAN 16
#define POSITION_E0_END 0x60cf
#define POSITION_E0_BIT_CLEARING_EDGE_REGISTER 0
#define POSITION_E0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define POSITION_E0_CAPTURE 0
#define POSITION_E0_DATA_WIDTH 12
#define POSITION_E0_DO_TEST_BENCH_WIRING 0
#define POSITION_E0_DRIVEN_SIM_VALUE 0
#define POSITION_E0_EDGE_TYPE NONE
#define POSITION_E0_FREQ 50000000
#define POSITION_E0_HAS_IN 0
#define POSITION_E0_HAS_OUT 1
#define POSITION_E0_HAS_TRI 0
#define POSITION_E0_IRQ_TYPE NONE
#define POSITION_E0_RESET_VALUE 0

/*
 * Macros for device 'position_e1', class 'altera_avalon_pio'
 * The macros are prefixed with 'POSITION_E1_'.
 * The prefix is the slave descriptor.
 */
#define POSITION_E1_COMPONENT_TYPE altera_avalon_pio
#define POSITION_E1_COMPONENT_NAME position_e1
#define POSITION_E1_BASE 0x60e0
#define POSITION_E1_SPAN 16
#define POSITION_E1_END 0x60ef
#define POSITION_E1_BIT_CLEARING_EDGE_REGISTER 0
#define POSITION_E1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define POSITION_E1_CAPTURE 0
#define POSITION_E1_DATA_WIDTH 12
#define POSITION_E1_DO_TEST_BENCH_WIRING 0
#define POSITION_E1_DRIVEN_SIM_VALUE 0
#define POSITION_E1_EDGE_TYPE NONE
#define POSITION_E1_FREQ 50000000
#define POSITION_E1_HAS_IN 0
#define POSITION_E1_HAS_OUT 1
#define POSITION_E1_HAS_TRI 0
#define POSITION_E1_IRQ_TYPE NONE
#define POSITION_E1_RESET_VALUE 0

/*
 * Macros for device 'position_type', class 'altera_avalon_pio'
 * The macros are prefixed with 'POSITION_TYPE_'.
 * The prefix is the slave descriptor.
 */
#define POSITION_TYPE_COMPONENT_TYPE altera_avalon_pio
#define POSITION_TYPE_COMPONENT_NAME position_type
#define POSITION_TYPE_BASE 0x6100
#define POSITION_TYPE_SPAN 16
#define POSITION_TYPE_END 0x610f
#define POSITION_TYPE_BIT_CLEARING_EDGE_REGISTER 0
#define POSITION_TYPE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define POSITION_TYPE_CAPTURE 0
#define POSITION_TYPE_DATA_WIDTH 1
#define POSITION_TYPE_DO_TEST_BENCH_WIRING 0
#define POSITION_TYPE_DRIVEN_SIM_VALUE 0
#define POSITION_TYPE_EDGE_TYPE NONE
#define POSITION_TYPE_FREQ 50000000
#define POSITION_TYPE_HAS_IN 0
#define POSITION_TYPE_HAS_OUT 1
#define POSITION_TYPE_HAS_TRI 0
#define POSITION_TYPE_IRQ_TYPE NONE
#define POSITION_TYPE_RESET_VALUE 0

/*
 * Macros for device 'position_extruder_type', class 'altera_avalon_pio'
 * The macros are prefixed with 'POSITION_EXTRUDER_TYPE_'.
 * The prefix is the slave descriptor.
 */
#define POSITION_EXTRUDER_TYPE_COMPONENT_TYPE altera_avalon_pio
#define POSITION_EXTRUDER_TYPE_COMPONENT_NAME position_extruder_type
#define POSITION_EXTRUDER_TYPE_BASE 0x6120
#define POSITION_EXTRUDER_TYPE_SPAN 16
#define POSITION_EXTRUDER_TYPE_END 0x612f
#define POSITION_EXTRUDER_TYPE_BIT_CLEARING_EDGE_REGISTER 0
#define POSITION_EXTRUDER_TYPE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define POSITION_EXTRUDER_TYPE_CAPTURE 0
#define POSITION_EXTRUDER_TYPE_DATA_WIDTH 1
#define POSITION_EXTRUDER_TYPE_DO_TEST_BENCH_WIRING 0
#define POSITION_EXTRUDER_TYPE_DRIVEN_SIM_VALUE 0
#define POSITION_EXTRUDER_TYPE_EDGE_TYPE NONE
#define POSITION_EXTRUDER_TYPE_FREQ 50000000
#define POSITION_EXTRUDER_TYPE_HAS_IN 0
#define POSITION_EXTRUDER_TYPE_HAS_OUT 1
#define POSITION_EXTRUDER_TYPE_HAS_TRI 0
#define POSITION_EXTRUDER_TYPE_IRQ_TYPE NONE
#define POSITION_EXTRUDER_TYPE_RESET_VALUE 0

/*
 * Macros for device 'ILC', class 'interrupt_latency_counter'
 * The macros are prefixed with 'ILC_'.
 * The prefix is the slave descriptor.
 */
#define ILC_COMPONENT_TYPE interrupt_latency_counter
#define ILC_COMPONENT_NAME ILC
#define ILC_BASE 0x30000
#define ILC_SPAN 256
#define ILC_END 0x300ff


#endif /* _ALTERA_HPS_0_H_ */
