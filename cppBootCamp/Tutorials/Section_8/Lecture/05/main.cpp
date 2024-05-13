#include <iostream>
#include <string>

constexpr int maxbuffer = 1024; // To flush out the buffer

using namespace std;


int main()
 {

     const char * filename = "mythisfile.txt";
     const char * information = "lorem ipsum dolor sit amet";
     
//     FILE * fh = fopen(filename, "a");
//
//     for (int i = 0; i < 50; ++i) {
//         fputs(information, fh);
//     }
//     fclose(fh);
     
     char buf[maxbuffer];
     
     FILE * fh = fopen(filename, "r");
     while (fgets(buf, maxbuffer, fh)) {
         fputs(buf, stdout);
     }
     fclose(fh);
     
     
    return 0;
 }
