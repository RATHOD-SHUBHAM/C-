#include <iostream>
#include <string>


using namespace std;



int main()
 {

     static const char * originalfile = "originalFile.txt";
     static const char * editedfile = "editedFile.txt";
     

     // Todo: renamed file
     rename(originalfile, editedfile);

     // Todo: remove file
     remove(editedfile);
     
//     Todo: File open and close
//     FILE * fh = fopen(originalfile, "w");
//     fclose(fh);
     
     
    return 0;
 }
