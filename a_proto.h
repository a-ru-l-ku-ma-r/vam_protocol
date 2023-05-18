/************************************************************************************
The packet format is as below |SOF| OPCODE| TYPE| LENGTH |VALUE | CHECKSUM |

SOF - Start of Frame, which is a '$' character. If the data also contains '$' then that character is preceded by a '/'

OPCODE - The opcode can be either a GET or SET

TYPE - The type of data that is present in the packet. The current values supported as INT, CHAR, STR

LENGTH - The length of the payload

VALUE - The actual value of the payload

CHECKSUM - It is running summation of all the fields and it's one's complement

************************************************************************************/
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



/*
 * The structure describes the status of proto peripheral
 * transmission mode enabled / disabled
 */
typedef struct{
    bool enable =   1;
    bool disble =   0;   
}proto_tx_mode_t;    



/*
 * The structure describes the status of proto peripheral
 * receiving mode enabled / disabled
 */
typedef struct{
    bool enable =   1;
    bool disble =   0;   
}proto_rx_mode_t; 


/*************************************************************************************
****                         packet format definitions                            ****
*************************************************************************************/
/*
 * The SOF variable define the value of Start Of Frame (SOF) format packet 
 */
uint8_t SOF = '$';


/*
 * The structure describes the SET a value or GET a value 
 * during the communication process
 */
typedef enum{
    GET = 0,
    SEt = 1,
}opcode;


/*
 * The structure describes the type of data that is present in the packet.
 * during the communication process
 */
typedef enum{
    CHAR    =   0,
    INT     =   1,
    STR     =   2,
}type;




































#endif	/*  __PROTO_H__  */
