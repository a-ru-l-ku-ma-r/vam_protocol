
#ifndef __PROTO_H__
#define __PROTO_H__

/******************************************************/
/*******************Include Files**********************/
/******************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>


/*
 * The structure describes the proto communication 
 * structure holding configuration setting for the
 * peripheral
 */
typedef struct{
    uint32_t tx_pin_no;
    uint32_t rx_pin_no;
    uint32_t data_rate;
}proto_commn_peripheral_t;




#endif	/*  __PROTO_H__  */
