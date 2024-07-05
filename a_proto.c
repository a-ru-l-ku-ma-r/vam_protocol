/**********************************************************************************/
/********************************** Include Files *********************************/
/**********************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "a_proto.h"


int sum_of_string(uint8_t *str)
{
  int sum_t = 0;
  
  while(*str){
    sum += str;
    str++;
  }
  return sum_t;
}

int checksum_cal(int *_data_, int length)
{
  char loop_i;

  int checksum = 0;;

  for(loop_i = 0; loop_i < length ; loop_i++)
    {
      checksum =~  _data_[loop_i];
    }
}

int lrc_cal(int *_data_, int length)
{
  char loop_i;

  int lrc = 0;;

  for(loop_i = 0; loop_i < length; loop_i++)
  {
    lrc =^ _data_[loop_i];      
  }
}

void transmit(uint8_t value)
{
  
}
