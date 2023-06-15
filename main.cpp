#include <iostream>
#include <vector>
#include <fstream>

int main() {
    int size;
    std::ifstream fin("/home/felixxx/Clion/HW01/in.txt");
    std::ofstream fileout("/home/felixxx/Clion/HW01/out.txt");


    if(fin.is_open()) {
        while (!fin.eof()) {
            int* mas = new int [size];
            fin >> size;
            fileout << size;
            std::rotate (size, size-1);
            std::cout << size << ' '<< '\n';
            fileout << '\n';

            for (int i = 0; i < size; i++)
            {
                fin >> mas[i];
            }

            std:: reverse (mas, mas+size);

            for (int i = 0; i < size; i++) {
                fileout << mas[i] << ' ';
                std::cout << mas[i] << ' ';
            }
            std:: cout << '\n';
            fileout << '\n';

            delete[] mas;
        }
    }
    else{
        std:: cout << "File is not open!";
    }
        fin.close();
    return 0;
}
