#include <stdio.h>
#include "sodium.h"

/*#define MESSAGE ((const unsigned char *) "Arbitrary data to hash")
#define MESSAGE_LEN 22*/

int main(void)
{
    unsigned char buf[128];
    if (sodium_init() == -1) {
        return 1;
    }
    //printf("Hello World\n");
    randombytes_buf(buf, sizeof((buf)));
    printf("%lu\n", sizeof(buf));
    for (int i = 0; i < sizeof(buf); i++)
        printf("%02x ", (unsigned int)buf[i]);
    printf("\n");
    /*
    unsigned char hash[crypto_generichash_BYTES];
    crypto_generichash(hash, sizeof hash,
                     MESSAGE, MESSAGE_LEN,
                     NULL, 0);
    for (int i = 0; i < sizeof(hash); i++)
      printf("%02x ",(unsigned int)hash[i]);
    printf("\n");
    printf("%d\n", crypto_generichash_BYTES);
  */


}