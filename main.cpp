#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

void file(std::string in){
    //std::ifstream fin("/home/felixxx/Clion/HW01/in.txt"); //это в убунту
    std::ifstream fin(in); //винда
    //std::ofstream fileout("/home/felixxx/Clion/HW01/out.txt"); //это в убунту
    std::ofstream fileout("out.txt"); //винда

    if(fin.is_open() && fileout.is_open()) {
        int size;
        while (!fin.eof()) {
            fin >> size;
            fileout << size;
            std::cout << size << ' ' << '\n';
            fileout << '\n';

            int *mas = new int[size];
            for (int i = size-1; i >= 0 ; i--) {
                fin >> mas[i];
            }


            for (int i = 0; i < size; i++){
                fileout << mas[i] << ' ';
                std::cout << mas[i] << ' ';
            }

            std::cout << '\n';
            fileout << '\n';

            delete[] mas;
        }
    } else{
        std:: cout << "File is not open!";
    }
    fin.close();
    fileout.close();
}

int main() {

    file("in.txt");

    return 0;
}
