#include <stdio.h>
#include <stdint.h>
#include <a_proto.h>

/******************************************************************************/
/************************** macro definitions *********************************/
/******************************************************************************/
/* peripheral configuration */
#define TX_PIN_NO   5
#define RX_PIN_NO   7
#define DATA_RATE   9600

/* Transmission Mode */
#define TX_MODE_EN  1
#define TX_MODE_DIS 0

/* Receiving Mode */
#define RX_MODE_EN  1
#define RX_MODE_DIS 0

/******************************************************************************/
/************************ Functions Declarations ******************************/
/******************************************************************************/

/* user configuration of peripheral setting */
void proto_peripheral_init(void);



/******************************************************************************/
/************************ Functions Definitions *******************************/
/******************************************************************************/

/*******************************************************************************
 * @brief function for initialization the peripheral
 *
*******************************************************************************/ 
void proto_peripheral_init(void)
{
    /* Peripheral Configuration */
    proto_commn_peripheral_t    Proto_Commn_Peripheral = {
        .tx_pin_no  =   TX_PIN_NO,
        .rx_pin_no  =   RX_PIN_NO,
        .data_rate  =   DATA_RATE
        };
    printf("\nTransmitter Pin of Peripheral = %d\n", Proto_Commn_Peripheral.tx_pin_no);
    printf("\nReceiver Pin of Peripheral = %d\n", Proto_Commn_Peripheral.rx_pin_no);
    printf("\nData Rate of Peripheral = %d\n", Proto_Commn_Peripheral.data_rate);


    /* Transmission Mode */
    proto_tx_mode_t proto_tx_mode = {
        .enable     = TX_MODE_EN,
        .disable    = TX_MODE_DIS
    };
    printf("\nEnable the Transmission mode of Peripheral = %d\n", proto_tx_mode.enable);
    printf("\nDisable the Transmission mode of Peripheral = %d\n", proto_tx_mode.disable);


    /* Receiving Mode */
    proto_rx_mode_t proto_rx_mode = {
        .enable     = RX_MODE_EN,
        .disable    = RX_MODE_DIS
    };
    printf("\nEnable the Receiving mode of Peripheral = %d\n", proto_rx_mode.enable);
    printf("\nDisable the Transmission mode of Peripheral = %d\n", proto_rx_mode.disable);
}


int main()
{
    /* user initialization of peripheral setting */
    proto_peripheral_init();

    return 0;
}
