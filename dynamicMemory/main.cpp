//
//  main.cpp
//  dynamicMemory
//
//  Created by Kaan Şengün on 17.11.2023.
//

#include <iostream>
#include "dynamicMemory.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    /*
    Example exObj,*exPtr;
    exPtr=&exObj;
    
    exObj.x=5;
    exObj.y=3;
    exObj.print();
    
    (*exPtr).x=6;
    (*exPtr).y=4;
    (*exPtr).print();
     
     
    exPtr->x=6;
    exPtr->y=4;
    exPtr->print();
    
    
    int *ptr=new int;//Yeni bir int değişken oluşturuyorduk bunun adresini de pointera atıyorduk
    Example *ptrExample=new Example;
    
    ptrExample->x=5;
    ptrExample->y=6;
    ptrExample->print();
    
    delete ptr;
    delete ptrExample;
     
         Single Dimensinal Array
    int *ptrArray=new int[5];//5 elemalı bir dizinin başlangıç adresini pointerArraya atadık
    
    Example *ptrExArray=new Example[5];// Example tipinde 5 nesne oluşturduk. Constructorlar new ile tetiklenirken destructorlar delete ile tetikleniyor
    
    for(int i=0;i<5;i++){
        ptrExArray[i].x=i;
        ptrExArray[i].y=i*i;
        ptrExArray[i].print();
    }
    
    
    delete[] ptrArray;
    delete[] ptrExArray;
    
    
    int **ptr2DArray= new int*[5];//işaretçilerin adresini tutan işaretçi oluşturup ona işaretçinin adresini atadık
    
    Example **ptrEx2DArray=new Example*[5];
    
    
    for(int i=0;i<5;i++){
        ptr2DArray[i]=new int[5];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            ptr2DArray[i][j]=i;
            
        }
    }
    for(int i=0;i<5;i++){
        ptrEx2DArray[i]=new Example[5];
        
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            ptrEx2DArray[i][j].x=i;
            ptrEx2DArray[i][j].y=j;
            ptrEx2DArray[i][j].print();
            
        }
    }
    for(int i=0;i<5;i++){         //Satırlardaki nesneleri sildik
        delete[] ptrEx2DArray[i];
    }
    delete [] ptrEx2DArray;      //Pointer to pointerı sildik
    
                
                1 2 3 4 5
     ptr->ptr-> - - - - -    (-)->Verileri temsil ediyor
          ptr-> - - - - -
          ptr-> - - - - -
          ptr-> - - - - -
          ptr-> - - - - -
     
     
     
                    1 2 3 4 5
     ptrEx->ptrEx-> - - - - -  (-)->Nesneleri temsil ediyor
            ptrEx-> - - - - -
            ptrEx-> - - - - -
            ptrEx-> - - - - -
            ptrEx-> - - - - -
     */
    
    
    
    Example exObj(5,5),exObj2(4,4);
    Example exObj3=exObj.addExample(exObj2);
    exObj3.print();
    
    
    
    
    
    
    
    
    return 0;
}
