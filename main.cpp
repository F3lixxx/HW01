#include <iostream>
#include <vector>
#include <fstream>

int main(){
    int sizeN = 0;
    int sizeM = 0;

    std::ifstream fin("in.txt"); //винда
    std::ofstream fileout("out.txt"); //винда

    if(fin.is_open() && fileout.is_open()) {
        fin >>sizeN;
        int* masN = new int [sizeN];
        for (int i = 0; i < sizeN; ++i) {
            fin >> masN[i];
        }

        fin >>sizeM;

        int* masM = new int [sizeM];
        for (int i = 0; i < sizeM; ++i) {
            fin >> masM[i];
        }

        fileout << sizeM << ' ' << '\n';
        std::cout << sizeM << '\n';
        for (int i = sizeM - 1; i >= 0; --i) {
            fileout << masM[i] << ' ';
            std:: cout << masM[i] << ' ';
        }
            fileout << '\n';
            std:: cout << '\n';


        fileout << sizeN << ' ' << '\n';
        std::cout << sizeN << '\n';
        for (int i = sizeN - 1; i >= 0; --i) {
            fileout << masN[i] << ' ';
            std:: cout << masN[i] << ' ';
        }
        fileout << '\n';
        std:: cout << '\n';
        }
        return 0;
    }