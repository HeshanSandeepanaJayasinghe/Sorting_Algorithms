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

    cout << "______After Insertion sorting______";

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
    for (int i = 1; i< size; i++){
        int j = i -1;
        int key = array[i];
        while ((j>=0)&&(array[j] > key)){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}