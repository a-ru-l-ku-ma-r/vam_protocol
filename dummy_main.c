#include <stdio.h>
#include <stdint.h>
#include <a_proto.h>

int main()
{
    /* user configuration of peripheral setting */
    proto_commn_peripheral_t Proto_Commn_Peripheral = {5, 6, 9600};
    
    printf("Transmitter Pin of Peripheral = %d\n", Proto_Commn_Peripheral.tx_pin_no);
    printf("Receiver Pin of Peripheral = %d\n", Proto_Commn_Peripheral.rx_pin_no);
    printf("Data Rate of Peripheral = %d\n", Proto_Commn_Peripheral.data_rate);



    return 0;
}
