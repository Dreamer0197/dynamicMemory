//
//  dynamicMemory.h
//  dynamicMemory
//
//  Created by Kaan Şengün on 17.11.2023.
//
#include <iostream>
using namespace std;

class Example{
public:
    int x,y;
    Example(int mainX=0,int mainY=0){
        this->x=mainX;
        this->y=mainY;
        cout<<"Constructor worked."<<endl;
    }
    ~Example(){
        cout<<"Destructor worked."<<endl;
    }
    void print(){
        cout<<"X Value:"<<x<<" Y Value:"<<y<<endl;
    }
    Example addExample(Example &oth){//this her nesne için ayrıca oluşur. Tamamiyle pointer mantığı
        Example obj4,*ptrObj4;
        ptrObj4=&obj4;
        ptrObj4->x=5;
        this->x+=oth.x;
        this->y+=oth.y;
        return *this;// nesnenin değerini dönderdik
    }
    
};
