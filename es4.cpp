/*5) Realizzare un programma che 
ricevuto in ingresso un file chiamato “input.txt”
 stampa sulla console da quanti caratteri è formato.
 */

#include <fstream>
#include <iostream>

int main(){

    //declaration of variables
    int char_count{};
    char char_buf{};
    std::string path_file{"input.txt"};
    std::ifstream inFile;

    //reading from file via ifstream
    inFile.open(path_file);
    if(inFile.is_open()){
        while(inFile.get(char_buf))
            ++char_count;
    }
    inFile.close();

    //print result
    std::cout << "Total chars:[" << char_count << ']' <<std::endl;

    return 0;
}