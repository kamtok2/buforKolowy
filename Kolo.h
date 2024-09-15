//
// Created by tokar on 26.10.2023.
//

#ifndef BUFORKOLOWY_KOLO_H
#define BUFORKOLOWY_KOLO_H


#include <vector>
template<typename T>
class Kolo {
    T *head;
    T *tail;
    std::vector<T> bufor;
    int size;


public:

    Kolo(int s);
    T popfront(); //usuwa element z poczatku kolejki
    void push_back(T val); // dodaje element do kolejki
    T firstElement();
    bool isEmpty(); // sprawdza czy kolejka jest pusta
    void clear();
    void show();

};
template<typename T>
Kolo<T>::Kolo(int s){
    bufor.resize(s);
    head=&bufor[0];
    tail=&bufor[0];
    size=0;
}
template<typename T>
void Kolo<T>::show() {

    for(auto &a:bufor){
        std::cout<<a<<" ";
    }
    std::cout<<std::endl;
}
template<typename T>
bool Kolo<T>::isEmpty() {
    if(size==0){
        return true;
    }
    return false;
}
template<typename T>
void Kolo<T>::push_back(T value){

    if(size<bufor.size()){  //sprawdzam czy jest miejsce w buforze
        size++;
        *tail=value;

        if(tail==&bufor[bufor.size()-1]){
            tail=&bufor[0];
        }else {
            tail++;
            // jesli tail nie jest ostatnim elementem bufora to tail przesuwam na kolejny element tablicy
        }
    } else{
        std::cout<<"Bufor jest pelny!!!"<<std::endl;
    }
}
template<typename T>
T Kolo<T>::popfront() {
    T value;

    if (isEmpty())
        return -1;
    else{
        value = *head;
        *head=0;
        size--;
        if(head==&bufor[bufor.size()-1]){
            head=&bufor[0];
        }else {
            head++;
        }
    }
return value;
}
template<typename T>
T Kolo<T>::firstElement() {

    if(isEmpty())
        return -1;
    else
        return *head;
}

#endif //BUFORKOLOWY_KOLO_H
