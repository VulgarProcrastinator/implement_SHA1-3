#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>

void sha384_hash(const unsigned char *data, size_t len, unsigned char *hash){
   SHA384(data, len, hash);
}

int main(int argc, char* argv[]){
   if (argc !=2){
        printf("To use: %s 'string' \n", argv[0]);
        return 1;
   }
   const char *input = argv[1];
   unsigned char hash[SHA384_DIGEST_LENGTH];
   sha384_hash((unsigned char*)input, strlen(input), hash);

   printf("SHA384: ");
   for (int i=0; i < SHA384_DIGEST_LENGTH; i++){
      printf("%02x", hash[i]);
   }
   printf("\n");
   return 0;

}
