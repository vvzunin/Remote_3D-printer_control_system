
//=======================================================
//  This code is generated by Terasic System Builder
//=======================================================

module printer_system(

	//////////// ADC //////////
	output		          		ADC_CONVST,
	output		          		ADC_SCK,
	output		          		ADC_SDI,
	input 		          		ADC_SDO,

	//////////// ARDUINO //////////
	inout 		    [15:0]		ARDUINO_IO,
	inout 		          		ARDUINO_RESET_N,

	//////////// CLOCK //////////
	input 		          		FPGA_CLK1_50,
	input 		          		FPGA_CLK2_50,
	input 		          		FPGA_CLK3_50,

	//////////// HDMI //////////
	inout 		          		HDMI_I2C_SCL,
	inout 		          		HDMI_I2C_SDA,
	inout 		          		HDMI_I2S,
	inout 		          		HDMI_LRCLK,
	inout 		          		HDMI_MCLK,
	inout 		          		HDMI_SCLK,
	output		          		HDMI_TX_CLK,
	output		          		HDMI_TX_DE,
	output		    [23:0]		HDMI_TX_D,
	output		          		HDMI_TX_HS,
	input 		          		HDMI_TX_INT,
	output		          		HDMI_TX_VS,

	//////////// HPS //////////
	inout 		          		HPS_CONV_USB_N,
	output		    [14:0]		HPS_DDR3_ADDR,
	output		     [2:0]		HPS_DDR3_BA,
	output		          		HPS_DDR3_CAS_N,
	output		          		HPS_DDR3_CKE,
	output		          		HPS_DDR3_CK_N,
	output		          		HPS_DDR3_CK_P,
	output		          		HPS_DDR3_CS_N,
	output		     [3:0]		HPS_DDR3_DM,
	inout 		    [31:0]		HPS_DDR3_DQ,
	inout 		     [3:0]		HPS_DDR3_DQS_N,
	inout 		     [3:0]		HPS_DDR3_DQS_P,
	output		          		HPS_DDR3_ODT,
	output		          		HPS_DDR3_RAS_N,
	output		          		HPS_DDR3_RESET_N,
	input 		          		HPS_DDR3_RZQ,
	output		          		HPS_DDR3_WE_N,
	output		          		HPS_ENET_GTX_CLK,
	inout 		          		HPS_ENET_INT_N,
	output		          		HPS_ENET_MDC,
	inout 		          		HPS_ENET_MDIO,
	input 		          		HPS_ENET_RX_CLK,
	input 		     [3:0]		HPS_ENET_RX_DATA,
	input 		          		HPS_ENET_RX_DV,
	output		     [3:0]		HPS_ENET_TX_DATA,
	output		          		HPS_ENET_TX_EN,
	inout 		          		HPS_GSENSOR_INT,
	inout 		          		HPS_I2C0_SCLK,
	inout 		          		HPS_I2C0_SDAT,
	inout 		          		HPS_I2C1_SCLK,
	inout 		          		HPS_I2C1_SDAT,
	inout 		          		HPS_KEY,
	inout 		          		HPS_LED,
	inout 		          		HPS_LTC_GPIO,
	output		          		HPS_SD_CLK,
	inout 		          		HPS_SD_CMD,
	inout 		     [3:0]		HPS_SD_DATA,
	output		          		HPS_SPIM_CLK,
	input 		          		HPS_SPIM_MISO,
	output		          		HPS_SPIM_MOSI,
	inout 		          		HPS_SPIM_SS,
	input 		          		HPS_UART_RX,
	output		          		HPS_UART_TX,
	input 		          		HPS_USB_CLKOUT,
	inout 		     [7:0]		HPS_USB_DATA,
	input 		          		HPS_USB_DIR,
	input 		          		HPS_USB_NXT,
	output		          		HPS_USB_STP,

	//////////// KEY //////////
	input 		     [1:0]		KEY,

	//////////// LED //////////
	output		     [7:0]		LED,

	//////////// SW //////////
	input 		     [3:0]		SW,

	//////////// GPIO_0, GPIO connect to GPIO Default //////////
	inout 		    [35:0]		GPIO_0,

	//////////// GPIO_1, GPIO connect to GPIO Default //////////
	inout 		    [35:0]		GPIO_1
);


//Декларация основных сигнальных кабелей
wire	[0:2]		heaters;
wire	[0:2]		motors	[0:4]; //{enable, step, dir}
wire	[0:5]		endstops;
wire				bar_end;
wire	[1:0]		uart; //RX, TX
wire	[1:0]		i2c; //SDA, SCL
wire	[11:0]	temp		[0:2];
wire	[11:0]	analog	[0:7];
wire	[11:0]	temp_0;
wire	[11:0]	temp_1;
wire	[11:0]	temp_2;
wire	[31:0]	command_type;
wire	[31:0]	command_x;
wire	[31:0]	command_y;
wire	[31:0]	command_z;
wire	[31:0]	command_e0;
wire	[31:0]	command_e1;
wire	[31:0]	new_command_x;
wire	[31:0]	new_command_y;
wire	[31:0]	new_command_z;
wire	[31:0]	new_command_e0;
wire	[31:0]	new_command_e1;
wire	[31:0]	command_f;
wire	[31:0]	command_t;
wire	[31:0]	command_dt;
wire	[31:0]	settings_max_speed_e1;
wire	[31:0]	settings_max_speed_e0;
wire	[31:0]	settings_max_speed_z_;
wire	[31:0]	settings_max_speed_y_;
wire	[31:0]	settings_max_speed_x_;
wire	[31:0]	settings_acceleration_x;
wire	[31:0]	settings_acceleration_y;
wire	[31:0]	settings_acceleration_z;
wire	[31:0]	settings_acceleration_e0;
wire	[31:0]	settings_acceleration_e1;
wire	[31:0]	settings_jerk_x;
wire	[31:0]	settings_jerk_e1;
wire	[31:0]	settings_jerk_e0;
wire	[31:0]	settings_jerk_z;
wire	[31:0]	settings_jerk_y;
wire	[11:0]	settings_max_temp_e0;
wire	[11:0]	settings_max_temp_e1;
wire	[11:0]	settings_max_temp_bed;
wire	[31:0]	flags_in;
wire	[31:0]	flags_out;
reg 	[31:0] 	flags_read;

wire	signed	[31:0]	pos_x;
wire	signed	[31:0]	pos_y;
wire	signed	[31:0]	pos_z;
wire	signed	[31:0]	pos_e0;
wire	signed	[31:0]	pos_e1;
//Clocks
wire CLK_100MHz;
wire CLK_10MHz;
wire CLK_5MHz;
wire CLK_1MHz;

wire					hps_fpga_reset_n;
wire	[1:	0] 	fpga_debounced_buttons;
wire	[6:	0] 	fpga_led_internal;
wire	[2:	0] 	hps_reset_req;
wire	       	hps_cold_reset;
wire	       	hps_warm_reset;
wire	       	hps_debug_reset;
wire	[27: 0]	stm_hw_events;
wire	       	fpga_clk_50;

wire					finish_driving;
wire					start_move;
wire					change_position;
wire	[0:2]		heaters_finish;
wire	[0:2]		start_heat;
wire	[0:2]		start_heat_long;
wire					enable_steppers;
wire					disable_steppers;
wire					cooling;

wire					is_related;
wire					is_related_extruder;

// connection of internal logics
//assign LED[7: 6] = fpga_led_internal;
assign fpga_clk_50 = FPGA_CLK1_50;
assign stm_hw_events = {{15{1'b0}}, SW, fpga_led_internal, fpga_debounced_buttons};


//Модуль для чтения аналоговых сигналов
adc_control ac0 (
	.CLOCK    (FPGA_CLK1_50),    //                clk.clk
	.ADC_SCLK (ADC_SCK), // external_interface.SCLK
	.ADC_CS_N (ADC_CONVST), //                   .CS_N
	.ADC_DOUT (ADC_SDO), //                   .DOUT
	.ADC_DIN  (ADC_SDI),  //                   .DIN
	.CH0      (analog[0]),      //           readings.CH0
	.CH1      (analog[1]),      //                   .CH1
	.CH2      (analog[2]),      //                   .CH2
	.CH3      (analog[3]),      //                   .CH3
	.CH4      (analog[4]),      //                   .CH4
	.CH5      (analog[5]),      //                   .CH5
	.CH6      (analog[6]),      //                   .CH6
	.CH7      (analog[7]),      //                   .CH7
	.RESET    (!KEY[0])     //              reset.reset
);

//Связь сигнальных кабелей с входными портами
assign {GPIO_1[31], GPIO_1[33], GPIO_1[35]}	=	heaters;
assign {GPIO_0[1],  GPIO_0[3],  GPIO_0[5]}	=	motors[0]; //Motor X
assign {GPIO_0[11], GPIO_0[13], GPIO_0[15]}	=	motors[1]; //Motor Y
assign {GPIO_0[17], GPIO_0[19], GPIO_0[21]}	=	motors[2]; //Motor Z
assign {GPIO_1[19], GPIO_1[21], GPIO_1[23]}	=	motors[3]; //Motor E0
assign {GPIO_1[25], GPIO_1[27], GPIO_1[29]}	=	motors[4]; //Motor E1
assign GPIO_1[12] = cooling;
assign endstops 	= {GPIO_1[11] ^ flags_read[6], 
							GPIO_1[9]  ^ flags_read[7], 
							GPIO_1[7]  ^ flags_read[8], 
							GPIO_1[5]  ^ flags_read[9], 
							GPIO_1[3]  ^ flags_read[10], 
							GPIO_1[1]  ^ flags_read[11]};
assign bar_end 	= GPIO_1[13] ^ flags_read[12];
//assign uart			= {GPIO_0[35], GPIO_0[33]};
//assign i2c			= {GPIO_0[29], GPIO_0[31]};
assign temp[0] 	= analog[1];
assign temp[1] 	= analog[3];
assign temp[2] 	= analog[5];

assign flags_in[0] = endstops[0];
assign flags_in[1] = endstops[1];
assign flags_in[2] = endstops[2];
assign flags_in[3] = endstops[3];
assign flags_in[4] = endstops[4];
assign flags_in[5] = endstops[5];
assign flags_in[6] = bar_end;

adctemp_temp att0(.clk(clk),
					.adc_temp(temp[0]),
					.res(100000),
					.voltage(33), //Напряжение, умноженное на k
					.k(10),
					.temp(temp_0));
adctemp_temp att1(.clk(clk),
					.adc_temp(temp[1]),
					.res(100000),
					.voltage(33), //Напряжение, умноженное на k
					.k(10),
					.temp(temp_1));
adctemp_temp att2(.clk(clk),
					.adc_temp(temp[2]),
					.res(100000),
					.voltage(33), //Напряжение, умноженное на k
					.k(10),
					.temp(temp_2));

assign temp_0 = temp[0];
assign temp_1 = temp[1];
assign temp_2 = temp[2];
assign flags_in[12] = heaters[0];
assign flags_in[13] = heaters[1];
assign flags_in[14] = heaters[2];
assign flags_in[15] = ~KEY[0];
assign flags_in[16] = ~KEY[1];
assign flags_in[17] = SW[0];
assign flags_in[18] = SW[1];
assign flags_in[19] = SW[2];
assign flags_in[20] = SW[3];

assign LED[0] = heaters[0];
assign LED[1] = heaters[1];
assign LED[2] = heaters[2];
assign LED[3] = flags_read[0];
assign LED[4] = flags_in[7];
assign LED[5] = flags_in[21];
assign LED[6] = finish_driving;
assign LED[7] = flags_in[22];

soc_system ss0 (
	.clk_clk                                             (FPGA_CLK1_50),                                             //                                          clk.clk
	
	.reset_reset_n                                       (hps_fpga_reset_n),                                       //                                        reset.reset_n
	
	.hps_0_f2h_cold_reset_req_reset_n                    (~hps_cold_reset),                    //                     hps_0_f2h_cold_reset_req.reset_n
	.hps_0_f2h_debug_reset_req_reset_n                   (~hps_debug_resetstm_hw_events),                   //                    hps_0_f2h_debug_reset_req.reset_n
	.hps_0_f2h_stm_hw_events_stm_hwevents                (stm_hw_events),                //                      hps_0_f2h_stm_hw_events.stm_hwevents
	.hps_0_f2h_warm_reset_req_reset_n                    (~hps_warm_reset),                    //                     hps_0_f2h_warm_reset_req.reset_n
	.hps_0_h2f_reset_reset_n                             (hps_fpga_reset_n),                             //                              hps_0_h2f_reset.reset_n
	//HPS ethernet
	.hps_0_hps_io_hps_io_emac1_inst_TX_CLK               (HPS_ENET_GTX_CLK),               //                                 hps_0_hps_io.hps_io_emac1_inst_TX_CLK
	.hps_0_hps_io_hps_io_emac1_inst_TXD0                 (HPS_ENET_TX_DATA[0]),                 //                                             .hps_io_emac1_inst_TXD0
	.hps_0_hps_io_hps_io_emac1_inst_TXD1                 (HPS_ENET_TX_DATA[1]),                 //                                             .hps_io_emac1_inst_TXD1
	.hps_0_hps_io_hps_io_emac1_inst_TXD2                 (HPS_ENET_TX_DATA[2]),                 //                                             .hps_io_emac1_inst_TXD2
	.hps_0_hps_io_hps_io_emac1_inst_TXD3                 (HPS_ENET_TX_DATA[3]),                 //                                             .hps_io_emac1_inst_TXD3
	.hps_0_hps_io_hps_io_emac1_inst_RXD0                 (HPS_ENET_RX_DATA[0]),                 //                                             .hps_io_emac1_inst_RXD0
	.hps_0_hps_io_hps_io_emac1_inst_MDIO                 (HPS_ENET_MDIO),                 //                                             .hps_io_emac1_inst_MDIO
	.hps_0_hps_io_hps_io_emac1_inst_MDC                  (HPS_ENET_MDC),                  //                                             .hps_io_emac1_inst_MDC
	.hps_0_hps_io_hps_io_emac1_inst_RX_CTL               (HPS_ENET_RX_DV),               //                                             .hps_io_emac1_inst_RX_CTL
	.hps_0_hps_io_hps_io_emac1_inst_TX_CTL               (HPS_ENET_TX_EN),               //                                             .hps_io_emac1_inst_TX_CTL
	.hps_0_hps_io_hps_io_emac1_inst_RX_CLK               (HPS_ENET_RX_CLK),               //                                             .hps_io_emac1_inst_RX_CLK
	.hps_0_hps_io_hps_io_emac1_inst_RXD1                 (HPS_ENET_RX_DATA[1]),                 //                                             .hps_io_emac1_inst_RXD1
	.hps_0_hps_io_hps_io_emac1_inst_RXD2                 (HPS_ENET_RX_DATA[2]),                 //                                             .hps_io_emac1_inst_RXD2
	.hps_0_hps_io_hps_io_emac1_inst_RXD3                 (HPS_ENET_RX_DATA[3]),                 //                                             .hps_io_emac1_inst_RXD3
	//HPS SD card
	.hps_0_hps_io_hps_io_sdio_inst_CMD                   (HPS_SD_CMD),                   //                                             .hps_io_sdio_inst_CMD
	.hps_0_hps_io_hps_io_sdio_inst_D0                    (HPS_SD_DATA[0]),                    //                                             .hps_io_sdio_inst_D0
	.hps_0_hps_io_hps_io_sdio_inst_D1                    (HPS_SD_DATA[1]),                    //                                             .hps_io_sdio_inst_D1
	.hps_0_hps_io_hps_io_sdio_inst_CLK                   (HPS_SD_CLK),                   //                                             .hps_io_sdio_inst_CLK
	.hps_0_hps_io_hps_io_sdio_inst_D2                    (HPS_SD_DATA[2]),                    //                                             .hps_io_sdio_inst_D2
	.hps_0_hps_io_hps_io_sdio_inst_D3                    (HPS_SD_DATA[3]),                    //                                             .hps_io_sdio_inst_D3
	//HPS USB
	.hps_0_hps_io_hps_io_usb1_inst_D0                    (HPS_USB_DATA[0]),                    //                                             .hps_io_usb1_inst_D0
	.hps_0_hps_io_hps_io_usb1_inst_D1                    (HPS_USB_DATA[1]),                    //                                             .hps_io_usb1_inst_D1
	.hps_0_hps_io_hps_io_usb1_inst_D2                    (HPS_USB_DATA[2]),                    //                                             .hps_io_usb1_inst_D2
	.hps_0_hps_io_hps_io_usb1_inst_D3                    (HPS_USB_DATA[3]),                    //                                             .hps_io_usb1_inst_D3
	.hps_0_hps_io_hps_io_usb1_inst_D4                    (HPS_USB_DATA[4]),                    //                                             .hps_io_usb1_inst_D4
	.hps_0_hps_io_hps_io_usb1_inst_D5                    (HPS_USB_DATA[5]),                    //                                             .hps_io_usb1_inst_D5
	.hps_0_hps_io_hps_io_usb1_inst_D6                    (HPS_USB_DATA[6]),                    //                                             .hps_io_usb1_inst_D6
	.hps_0_hps_io_hps_io_usb1_inst_D7                    (HPS_USB_DATA[7]),                    //                                             .hps_io_usb1_inst_D7
	.hps_0_hps_io_hps_io_usb1_inst_CLK                   (HPS_USB_CLKOUT),                   //                                             .hps_io_usb1_inst_CLK
	.hps_0_hps_io_hps_io_usb1_inst_STP                   (HPS_USB_STP),                   //                                             .hps_io_usb1_inst_STP
	.hps_0_hps_io_hps_io_usb1_inst_DIR                   (HPS_USB_DIR),                   //                                             .hps_io_usb1_inst_DIR
	.hps_0_hps_io_hps_io_usb1_inst_NXT                   (HPS_USB_NXT),                   //                                             .hps_io_usb1_inst_NXT
	//HPS SPI
	.hps_0_hps_io_hps_io_spim1_inst_CLK                  (HPS_SPIM_CLK),                  //                                             .hps_io_spim1_inst_CLK
	.hps_0_hps_io_hps_io_spim1_inst_MOSI                 (HPS_SPIM_MOSI),                 //                                             .hps_io_spim1_inst_MOSI
	.hps_0_hps_io_hps_io_spim1_inst_MISO                 (HPS_SPIM_MISO),                 //                                             .hps_io_spim1_inst_MISO
	.hps_0_hps_io_hps_io_spim1_inst_SS0                  (HPS_SPIM_SS),                  //                                             .hps_io_spim1_inst_SS0
	//HPS UART
	.hps_0_hps_io_hps_io_uart0_inst_RX                   (HPS_UART_RX),                   //                                             .hps_io_uart0_inst_RX
	.hps_0_hps_io_hps_io_uart0_inst_TX                   (HPS_UART_TX),                   //                                             .hps_io_uart0_inst_TX
	//HPS I2C0
	.hps_0_hps_io_hps_io_i2c0_inst_SDA                   (HPS_I2C0_SDAT),                   //                                             .hps_io_i2c0_inst_SDA
	.hps_0_hps_io_hps_io_i2c0_inst_SCL                   (HPS_I2C0_SCLK),                   //                                             .hps_io_i2c0_inst_SCL
	//HPS I2C1
	.hps_0_hps_io_hps_io_i2c1_inst_SDA                   (HPS_I2C1_SDAT),                   //                                             .hps_io_i2c1_inst_SDA
	.hps_0_hps_io_hps_io_i2c1_inst_SCL                   (HPS_I2C1_SCLK),                   //                                             .hps_io_i2c1_inst_SCL
	
	.hps_0_hps_io_hps_io_gpio_inst_GPIO09                (HPS_CONV_USB_N),                //                                             .hps_io_gpio_inst_GPIO09
	.hps_0_hps_io_hps_io_gpio_inst_GPIO35                (HPS_ENET_INT_N),                //                                             .hps_io_gpio_inst_GPIO35
	.hps_0_hps_io_hps_io_gpio_inst_GPIO40                (HPS_LTC_GPIO),                //                                             .hps_io_gpio_inst_GPIO40
	.hps_0_hps_io_hps_io_gpio_inst_GPIO53                (HPS_LED),                //                                             .hps_io_gpio_inst_GPIO53
	.hps_0_hps_io_hps_io_gpio_inst_GPIO54                (HPS_KEY),                //                                             .hps_io_gpio_inst_GPIO54
	.hps_0_hps_io_hps_io_gpio_inst_GPIO61                (HPS_GSENSOR_INT),                //                                             .hps_io_gpio_inst_GPIO61
	
	.hps_0_uart1_cts                                     (),                                     //                                  hps_0_uart1.cts
	.hps_0_uart1_dsr                                     (),                                     //                                             .dsr
	.hps_0_uart1_dcd                                     (),                                     //                                             .dcd
	.hps_0_uart1_ri                                      (),                                      //                                             .ri
	.hps_0_uart1_dtr                                     (),                                     //                                             .dtr
	.hps_0_uart1_rts                                     (),                                     //                                             .rts
	.hps_0_uart1_out1_n                                  (),                                  //                                             .out1_n
	.hps_0_uart1_out2_n                                  (),                                  //                                             .out2_n
	.hps_0_uart1_rxd                                     (uart[1]),                                     //                                             .rxd
	.hps_0_uart1_txd                                     (uart[0]),                                     //                                             .txd
	//HPS DDR3
	.memory_mem_a                                        (HPS_DDR3_ADDR),                                        //                                       memory.mem_a
	.memory_mem_ba                                       (HPS_DDR3_BA),                                       //                                             .mem_ba
	.memory_mem_ck                                       (HPS_DDR3_CK_P),                                       //                                             .mem_ck
	.memory_mem_ck_n                                     (HPS_DDR3_CK_N),                                     //                                             .mem_ck_n
	.memory_mem_cke                                      (HPS_DDR3_CKE),                                      //                                             .mem_cke
	.memory_mem_cs_n                                     (HPS_DDR3_CS_N),                                     //                                             .mem_cs_n
	.memory_mem_ras_n                                    (HPS_DDR3_RAS_N),                                    //                                             .mem_ras_n
	.memory_mem_cas_n                                    (HPS_DDR3_CAS_N),                                    //                                             .mem_cas_n
	.memory_mem_we_n                                     (HPS_DDR3_WE_N),                                     //                                             .mem_we_n
	.memory_mem_reset_n                                  (HPS_DDR3_RESET_N),                                  //                                             .mem_reset_n
	.memory_mem_dq                                       (HPS_DDR3_DQ),                                       //                                             .mem_dq
	.memory_mem_dqs                                      (HPS_DDR3_DQS_P),                                      //                                             .mem_dqs
	.memory_mem_dqs_n                                    (HPS_DDR3_DQS_N),                                    //                                             .mem_dqs_n
	.memory_mem_odt                                      (HPS_DDR3_ODT),                                      //                                             .mem_odt
	.memory_mem_dm                                       (HPS_DDR3_DM),                                       //                                             .mem_dm
	.memory_oct_rzqin                                    (HPS_DDR3_RZQ),                                    //                                             .oct_rzqin
	
	.pll_sys_outclk100mhz_clk                            (CLK_100MHz),                            //                         pll_sys_outclk100mhz.clk
	.pll_sys_outclk10mhz_clk                             (CLK_10MHz),                             //                          pll_sys_outclk10mhz.clk
	.pll_sys_outclk1mhz_clk                              (CLK_1MHz),                              //                           pll_sys_outclk1mhz.clk
	.pll_sys_outclk5mhz_clk                              (CLK_5MHz),                              //                           pll_sys_outclk5mhz.clk
	
	.temp_2_external_connection_export                   (temp_2),                   //                   temp_2_external_connection.export
	.temp_1_external_connection_export                   (temp_1),                   //                   temp_1_external_connection.export
	.temp_0_external_connection_export                   (temp_0),                   //                   temp_0_external_connection.export
	.command_type_external_connection_export             (command_type),             //             command_type_external_connection.export
	.command_x_external_connection_export                (command_x),                //                command_x_external_connection.export
	.command_y_external_connection_export                (command_y),                //                command_y_external_connection.export
	.command_z_external_connection_export                (command_z),                //                command_z_external_connection.export
	.command_e0_external_connection_export               (command_e0),               //               command_e0_external_connection.export
	.command_e1_external_connection_export               (command_e1),               //               command_e1_external_connection.export
	.command_f_external_connection_export                (command_f),                //                command_f_external_connection.export
	.command_t_external_connection_export                (command_t),                //                command_t_external_connection.export
	.command_dt_external_connection_export               (command_dt),               //               command_dt_external_connection.export
	.settings_max_speed_e1_external_connection_export    (settings_max_speed_e1),    //    settings_max_speed_e1_external_connection.export
	.settings_max_speed_e0_external_connection_export    (settings_max_speed_e0),    //    settings_max_speed_e0_external_connection.export
	.settings_max_speed_z_external_connection_export     (settings_max_speed_z),     //     settings_max_speed_z_external_connection.export
	.settings_max_speed_y_external_connection_export     (settings_max_speed_y),     //     settings_max_speed_y_external_connection.export
	.settings_max_speed_x_external_connection_export     (settings_max_speed_x),     //     settings_max_speed_x_external_connection.export
	.settings_acceleration_x_external_connection_export  (settings_acceleration_x),  //  settings_acceleration_x_external_connection.export
	.settings_acceleration_y_external_connection_export  (settings_acceleration_y),  //  settings_acceleration_y_external_connection.export
	.settings_acceleration_z_external_connection_export  (settings_acceleration_z),  //  settings_acceleration_z_external_connection.export
	.settings_acceleration_e0_external_connection_export (settings_acceleration_e0), // settings_acceleration_e0_external_connection.export
	.settings_acceleration_e1_external_connection_export (settings_acceleration_e1), // settings_acceleration_e1_external_connection.export
	.settings_jerk_x_external_connection_export          (settings_jerk_x),          //          settings_jerk_x_external_connection.export
	.settings_jerk_e1_external_connection_export         (settings_jerk_e1),         //         settings_jerk_e1_external_connection.export
	.settings_jerk_e0_external_connection_export         (settings_jerk_e0),         //         settings_jerk_e0_external_connection.export
	.settings_jerk_z_external_connection_export          (settings_jerk_z),          //          settings_jerk_z_external_connection.export
	.settings_jerk_y_external_connection_export          (settings_jerk_y),           //          settings_jerk_y_external_connection.export
	.flags_in_external_connection_export                 (flags_in),                 //                 flags_in_external_connection.export
	.flags_out_external_connection_export                (flags_out),                //                flags_out_external_connection.export
	.settings_max_temp_e0_external_connection_export     (settings_max_temp_e0),                //                settings_max_temp_e0_external_connection.export
	.settings_max_temp_e1_external_connection_export     (settings_max_temp_e1),                //                settings_max_temp_e1_external_connection.export
	.settings_max_temp_bed_external_connection_export    (settings_max_temp_bed),                //               settings_max_temp_bed_external_connection.export
	.position_x_external_connection_export					  (pos_x),
	.position_y_external_connection_export					  (pos_y),
	.position_z_external_connection_export					  (pos_z),
	.position_e0_external_connection_export				  (pos_e0),
	.position_e1_external_connection_export				  (pos_e1),
	.position_type_external_connection_export				  (is_related),
	.position_extruder_type_external_connection_export	  (is_related_extruder)
);

control_unit cu0(
	.clk(FPGA_CLK1_50),
	.reset(hps_fpga_reset_n),
	.start(flags_read[0]),
	.command_type(command_type),
	.command_x(command_x),
	.command_y(command_y),
	.command_z(command_z),
	.command_e0(command_e0),
	.command_e1(command_e1),
	.pos_x(pos_x),
	.pos_y(pos_y),
	.pos_z(pos_z),
	.pos_e0(pos_e0),
	.pos_e1(pos_e1),
	.finish_driving(finish_driving),	
	.heaters_finish(heaters_finish),
	
	.new_command_x(new_command_x),
	.new_command_y(new_command_y),
	.new_command_z(new_command_z),
	.new_command_e0(new_command_e0),
	.new_command_e1(new_command_e1),
	.is_realative(is_related),
	.is_realative_extruder(is_related_extruder),
	.start_move(start_move),
	.start_heat(start_heat),
	.start_heat_long(start_heat_long),
	//.change_position(),
	.enable_steppers(enable_steppers),
	.disable_steppers(disable_steppers),
	.start_cooling(cooling),
	.finish(flags_in[7]),
	.error(flags_in[21])
	);

positioning p0(
	.reset(hps_fpga_reset_n),


	//Управляющие сигналы двигателей
	//Двигатель a
	.stepper_x_enable(motors[0][0]),
	.stepper_x_step(motors[0][1]),
	.stepper_x_direction(motors[0][2]),	
	
	//Двигатель b
	.stepper_y_enable(motors[1][0]),
	.stepper_y_step(motors[1][1]),
	.stepper_y_direction(motors[1][2]),	
	
	//Двигатель оси z
	.stepper_z_enable(motors[2][0]),
	.stepper_z_step(motors[2][1]),
	.stepper_z_direction(motors[2][2]),	
	
	//Двигатель экструдера 0 (подачи пластика)
	.stepper_e0_enable(motors[3][0]),
	.stepper_e0_step(motors[3][1]),
	.stepper_e0_direction(motors[3][2]),
	
	//Двигатель экструдера 1 (подачи пластика)
	.stepper_e1_enable(motors[4][0]),
	.stepper_e1_step(motors[4][1]),
	.stepper_e1_direction(motors[4][2]),
	
	//Сигналы для установки новых координат
	.stepper_x_set_new_coordinates(flags_read[13]),
	.stepper_y_set_new_coordinates(flags_read[14]),
	.stepper_z_set_new_coordinates(flags_read[15]),
	.stepper_e0_set_new_coordinates(flags_read[16]),
	.stepper_e1_set_new_coordinates(flags_read[17]),
	//Значения новых координат
	.new_pos_x(command_x),
	.new_pos_y(command_y),
	.new_pos_z(command_z),
	.new_pos_e0(command_e0),
	.new_pos_e1(command_e1),
		
	//Текущая позиция
	.pos_x(pos_x),
	.pos_y(pos_y),
	.pos_z(pos_z),
	.pos_e0(pos_e0),
	.pos_e1(pos_e1)
);

//Подключение модуля управления движением каретки
jerk_acc_speed jas0( 	
	.clk(CLK_1MHz),
	.reset(hps_fpga_reset_n),	
	.max_speed_x(settings_max_speed_x), //микрошагов/сек
	.max_speed_y(settings_max_speed_y), //микрошагов/сек
	.max_speed_z(settings_max_speed_z), //микрошагов/сек
	.max_speed_e0(settings_max_speed_e0), //микрошагов/сек
	.max_speed_e1(settings_max_speed_e1), //микрошагов/сек
	.acceleration_x(settings_acceleration_x), //микрошагов/сек^2
	.acceleration_y(settings_acceleration_y), //микрошагов/сек^2
	.acceleration_z(settings_acceleration_z), //микрошагов/сек^2
	.acceleration_e0(settings_acceleration_e0), //микрошагов/сек^2
	.acceleration_e1(settings_acceleration_e1), //микрошагов/сек^2
	.jerk_x(settings_jerk_x), //микрошагов/сек
	.jerk_y(settings_jerk_y), //микрошагов/сек
	.jerk_z(settings_jerk_z), //микрошагов/сек
	.jerk_e0(settings_jerk_e0), //микрошагов/сек
	.jerk_e1(settings_jerk_e1), //микрошагов/сек
	.stepper_x_inversion(flags_read[1]),
	.stepper_y_inversion(flags_read[2]),
	.stepper_z_inversion(flags_read[3]),
	.stepper_e0_inversion(flags_read[4]),
	.stepper_e1_inversion(flags_read[5]),
	.speed(command_type), //микрошагов/сек
	.num_x_m(new_command_x), //микрошагов
	.num_y_m(new_command_y), //микрошагов
	.num_z_m(new_command_z), //микрошагов
	.num_e0_m(new_command_e0), //микрошагов
	.num_e1_m(new_command_e1), //микрошагов
	.start_driving_main(start_move),
	.endstops_nf(endstops),
	.bar_end_nf(bar_end),
	.enable_steppers(enable_steppers),
	.disable_steppers(disable_steppers),
	.stepper_x_enable(motors[0][0]),
	.stepper_x_step(motors[0][1]),
	.stepper_x_direction(motors[0][2]),	
	.stepper_y_enable(motors[1][0]),
	.stepper_y_step(motors[1][1]),
	.stepper_y_direction(motors[1][2]),	
	.stepper_z_enable(motors[2][0]),
	.stepper_z_step(motors[2][1]),
	.stepper_z_direction(motors[2][2]),
	.stepper_e0_enable(motors[3][0]),
	.stepper_e0_step(motors[3][1]),
	.stepper_e0_direction(motors[3][2]),
	.stepper_e1_enable(motors[4][0]),
	.stepper_e1_step(motors[4][1]),
	.stepper_e1_direction(motors[4][2]),
	.finish(finish_driving),
	.error(flags_in[22])
	);

heater_control hc0(	
	.clk(FPGA_CLK1_50),
	.temp(temp[0]),
	.t(command_t),
	.dt(command_dt),
	.max_temp(settings_max_temp_e0),
	.heat(start_heat[0]),
	.heat_long(start_heat_long[0]),

	.enable_heater(heaters[0]),
	.f(heaters_finish[0]));

heater_control hc1(	
	.clk(FPGA_CLK1_50),
	.temp(temp[1]),
	.t(command_t),
	.dt(command_dt),
	.max_temp(settings_max_temp_e1),
	.heat(start_heat[1]),
	.heat_long(start_heat_long[1]),

	.enable_heater(heaters[1]),
	.f(heaters_finish[1]));

heater_control hc2(	
	.clk(FPGA_CLK1_50),
	.temp(temp[2]),
	.t(command_t),
	.dt(command_dt),
	.max_temp(settings_max_temp_bed),
	.heat(start_heat[2]),
	.heat_long(start_heat_long[2]),

	.enable_heater(heaters[2]),
	.f(heaters_finish[2]));


always @(posedge CLK_1MHz)
begin
	flags_read = flags_out;
end

// Debounce logic to clean out glitches within 1ms
debounce debounce_inst(
             .clk(fpga_clk_50),
             .reset_n(hps_fpga_reset_n),
             .data_in(KEY),
             .data_out(fpga_debounced_buttons)
         );
defparam debounce_inst.WIDTH = 2;
defparam debounce_inst.POLARITY = "LOW";
defparam debounce_inst.TIMEOUT = 50000;               // at 50Mhz this is a debounce time of 1ms
defparam debounce_inst.TIMEOUT_WIDTH = 16;            // ceil(log2(TIMEOUT))

// Source/Probe megawizard instance
hps_reset hps_reset_inst(
              .source_clk(fpga_clk_50),
              .source(hps_reset_req)
          );

altera_edge_detector pulse_cold_reset(
                         .clk(fpga_clk_50),
                         .rst_n(hps_fpga_reset_n),
                         .signal_in(hps_reset_req[0]),
                         .pulse_out(hps_cold_reset)
                     );
defparam pulse_cold_reset.PULSE_EXT = 6;
defparam pulse_cold_reset.EDGE_TYPE = 1;
defparam pulse_cold_reset.IGNORE_RST_WHILE_BUSY = 1;

altera_edge_detector pulse_warm_reset(
                         .clk(fpga_clk_50),
                         .rst_n(hps_fpga_reset_n),
                         .signal_in(hps_reset_req[1]),
                         .pulse_out(hps_warm_reset)
                     );
defparam pulse_warm_reset.PULSE_EXT = 2;
defparam pulse_warm_reset.EDGE_TYPE = 1;
defparam pulse_warm_reset.IGNORE_RST_WHILE_BUSY = 1;

altera_edge_detector pulse_debug_reset(
                         .clk(fpga_clk_50),
                         .rst_n(hps_fpga_reset_n),
                         .signal_in(hps_reset_req[2]),
                         .pulse_out(hps_debug_reset)
                     );
defparam pulse_debug_reset.PULSE_EXT = 32;
defparam pulse_debug_reset.EDGE_TYPE = 1;
defparam pulse_debug_reset.IGNORE_RST_WHILE_BUSY = 1;

endmodule
