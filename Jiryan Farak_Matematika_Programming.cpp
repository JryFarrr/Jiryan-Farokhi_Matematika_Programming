// NAMA		: Jiryan Farokhi
// NRP		: 5002221102
// Jurusan	: Matematika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

    float mencari_v0 (float x,float y)
    {

    float v0;
    //mencari jarak
    v0 = pow(x,y)*sin(2*SUDUT)/GRAVITASI;
    
    return v0;
    }
    
    int speed_dgn_loss(int x)
    {
    START_PENGUKURAN;
    x = START_PENGUKURAN ;
    return x;
    }
    
    int main()
    {
    cin >> mencari_v0;
    cout << mencari_v0(x,y) << endl;
    
    cout << START_PENGUKURAN;
    
    return 0;