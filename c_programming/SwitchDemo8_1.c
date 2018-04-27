#include <stdio.h>
#include <stdlib.h>

int main(){
  char card_name[3];

  puts("Enter card name: ");
  scanf("%2s",card_name);

  int val = 0;

  switch(card_name[0]){
     case 'K':
     case 'Q':
     case 'J':
        val = 10;
        break;
     case 'A':
        val = 11;
        break;
     default:
        val = atoi(card_name);
  }

  /* Check if value is 3 to 6*/
  if((3 <= val) && (val <= 6))
     puts("Count has gone up");

  //We need just a single value
  if(val == 10)
     puts("Count has gone down");

  return 0;

}
