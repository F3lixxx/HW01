#include <iostream>
#include <fstream>

int main() {
    int size = 0;
    std::ifstream fin("/home/felixxx/Clion/HW01/in.txt");
    std::ofstream fileout("/home/felixxx/Clion/HW01/out.txt");


    if(fin.is_open()) {
        int* mas = new int [size];
        while (!fin.eof()) {
            fin >> size;
            fileout << size;
            std::cout << size << ' '<< '\n';
            fileout << '\n';
            for (int i = 0; i < size; i++) {
                fin >> mas[i];
                    fileout << mas[i] << ' ';
                    std::cout << mas[i] << ' ';

            }
            std:: cout << '\n';
            fileout << '\n';
        }
    }
    else{
        std:: cout << "File is not open!";
    }
        fin.close();
    return 0;
}
