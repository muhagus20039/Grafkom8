#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int N,x,y,i,kordinatY;
    float x1,x2,y1,y2,nilaiX,nilaiY,m,rumusY;

    cout<<"Masukan x1   : ";cin>>x1;
    cout<<"Masukan y1   : ";cin>>y1;
    cout<<"Masukan x2   : ";cin>>x2;
    cout<<"Masukan y2   : ";cin>>y2;
    cout<<"------------------------------------"<<endl;

    nilaiY = y2 - y1;
    nilaiX = x2 - x1;
    N = x2 -  x1 + 1;

    x = x1;
    y = y1;

    i = 1;

    if (x1 == x2){
        int titikA[] = {};
        int titikB[] = {};
        while (i < y2){
            if (y1 == y2){
                cout<<"Garis yang di lewati yaitu "<<x<<","<<y<<endl;
                int titikA[] = {x};
                int titikB[] = {y};
            }
            else{
                cout<<"Garis yang di lewati yaitu "<<x<<","<<y+i<<endl;
                int titikA[] = {x};
                int titikB[] = {y+i};
            }
            i++;
        }
    }

    else if (y1 == y2){
        int titikA[] = {};
        int titikB[] = {};
        while (i < y2){
            if (x1 == x2){
                cout<<"Garis yang di lewati yaitu "<<x<<","<<y<<endl;
                int titikA[] = {x};
                int titikB[] = {y};
            }
            else{
                cout<<"Garis yang di lewati yaitu "<<x+i<<","<<y<<endl;
                int titikA[] = {x+i};
                int titikB[] = {y};
            }
            i++;
        }
    }

    else{
        int titikA[] = {};
        int titikB[] = {};
        while (i <= N){
            m = nilaiY / nilaiX;
            rumusY = m * (x - x1) + y1;
            kordinatY = round(rumusY);
            x+=1;
            cout<<"Garis yang di lewati yaitu "<<x-1<<","<<kordinatY<<endl;
            int titikA[] = {x-1};
            int titikB[] = {kordinatY};
            i++;
        }
    }


    return 0;
}
