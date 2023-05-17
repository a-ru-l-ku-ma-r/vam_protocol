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
    proto_commn_peripheral_t    Proto_Commn_Peripheral = {
        .tx_pin_no  =   TX_PIN_NO,
        .rx_pin_no  =   RX_PIN_NO,
        .data_rate  =   DATA_RATE
        };

    printf("Transmitter Pin of Peripheral = %d\n", Proto_Commn_Peripheral.tx_pin_no);
    printf("Receiver Pin of Peripheral = %d\n", Proto_Commn_Peripheral.rx_pin_no);
    printf("Data Rate of Peripheral = %d\n", Proto_Commn_Peripheral.data_rate);
}


int main()
{
    /* user configuration of peripheral setting */
    proto_peripheral_init();

    return 0;
}
