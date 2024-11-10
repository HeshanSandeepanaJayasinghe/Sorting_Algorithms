#include <iostream>
#include <ctime>
using namespace std;

void generator(int array[], int size);

void sort(int array[], int size);

int main(){
    int size = 10, array[size];

    generator(array, size);

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << "______After Selection sorting______";

    sort(array, size);

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }



    return 0;
}

void generator(int array[],int size){
    srand(time(NULL));
    
    for (int i=0; i<size ; i++){
        array[i] = i + 1;
    }

    for (int j=0; j<10; j++){
        int m = rand() % size;
        swap(array[j], array[m]);
    }
    
}

void sort(int array[], int size){
    for (int j=0; j<size-1; j++){
        for (int i = 0; i<size-1; i++){
            int minindex = i;
            if (array[i+1]<array[minindex]){
                minindex = i + 1;
            }
        swap(array[i], array[minindex]);
        }
    }
}