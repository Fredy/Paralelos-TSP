#include <fstream>
#include <random>
using namespace std;

int main(){
    ofstream fileo("./file.out");
    fileo << 15 << ' ';
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(1,30);
    for(int i=0;i<15;i++){
        for(int j = 0; j < 15; ++j){
            auto random_integer = uni(rng);
            if(i == j)fileo << 0 << ' ';
            else {
                if (random_integer == 0)random_integer ++;
                fileo << random_integer << ' ';
            }
        }
    }
    fileo.close();
}
