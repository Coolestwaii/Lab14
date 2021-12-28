#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool image[][M], int a, int b, int c){
    double n;
    for(int x = 0; x < N; x++){
        for(int y = 0; y < M; y++){
            n = sqrt(pow((x - b), 2) + pow((y - c), 2)) + 1;
            if(n <= a){
                image[x][y] = 1;
            }
        }
    }
}

void showImage(const bool image[][M]){
    cout << "------------------------------------------------------------------------\n";
    for(int x = 0; x < N; x++){
        cout << "|";
        for(int y = 0; y < M; y++){
            if(image[x][y] == 0) cout << " ";
            if(image[x][y] == 1) cout << "*";
        }
    cout << "|\n";
    }
    cout << "------------------------------------------------------------------------\n";
}