#include "atm.h"

unsigned int get_money(unsigned short int amount)
{
  unsigned int counts = 0x0;
  unsigned short int remaining_amount = amount;
  unsigned short int notes[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
  if (remaining_amount <= 31999)
  {
    for (int i = 0; i < 8; i++)
    {
      counts = counts << 4;
      counts += remaining_amount / notes[i];
      remaining_amount %= notes[i];
    }
  }
  return counts;
}