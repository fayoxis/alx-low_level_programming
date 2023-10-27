#include "main.h"

/* 
 * Function: _strspn
 * ------------------------------
 * Purpose:   Gets the length of a prefix substring.
 *
 * Parameters:
 *    s:      Initial segment.
 *    accept: Accepted bytes.
 *
 * Returns:   The number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int k, v, b;
for (k = 0; *(s + k) != '\0'; k++)

{
b = 1;

/* Iterate through the accept string */

for (v = 0; *(accept + v) != '\0'; v++)
{
/* If a character from the accept string matches
* the current character in s,
* set b to 0 (false) and break the loop.
*/
if (*(s + k) == *(accept + v))
{
b = 0;
break;
}
}
/* If b is still 1 (true) after iterating
* through the accept string,
* it means the current character in s 
* is not present in accept. In this case, break
* the loop and return the current value of k.
*/
if (b == 1)
break;
}


return (k);
}
