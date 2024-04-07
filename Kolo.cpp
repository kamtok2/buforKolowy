//
// Created by tokar on 26.10.2023.
//
#include <iostream>
#include "Kolo.h"

//Kolo::Kolo(int s){
//    bufor.resize(s);
//    head=&bufor[0];
//    tail=&bufor[0];
//    size=0;
//}
//void Kolo::show() {
////for(int i = bufor.size()-1;i>=0;i--){
////    std::cout<<bufor[i]<<" ";
////}
// for(auto &a:bufor){
//     std::cout<<a<<" ";
// }
//    std::cout<<std::endl;
//}
//bool Kolo::isEmpty() {
//    if(size==0){
//        return true;
//    }
//    return false;
//}
//void Kolo::push_back(int value){
//
//    if(size<bufor.size()){  //sprawdzam czy jest miejsce w buforze
//        size++;
//        *tail=value;
//
//        if(tail==&bufor[bufor.size()-1]){
//            tail=&bufor[0];
//        }else {
//            tail++;
//            // jesli tail nie jest ostatnim elementem bufora to tail przesuwam na kolejny element tablicy
//        }
//    } else{
//        std::cout<<"Bufor jest pelny!!!"<<std::endl;
//    }
//}
//
//int Kolo::popfront() {
//    int value;
//
//    if (isEmpty())
//        return -1;
//    else {
//        value = *head;
//        *head=0;
//        size--;
//       if(head==&bufor[bufor.size()-1]){
//           head=&bufor[0];
//       }else {
//           head++;
//       }
//    }
//
//    return value;
//}

//    int value;
//    if(isEmpty())
//        return -1;
//    else{
//        value=*head;
//        head++;
//        size--;
//        bufor.erase(bufor.begin()+1);
//    }
//    return value;

//int value=-1;
//    if(!isEmpty()){
//        value = *head;
//        head++;
//        size--;
//        bufor.erase(bufor.begin());
//        bufor.resize(size);
//        if(head==&bufor[bufor.size()-1]){
//            head=&bufor[0];
//        }
//    }
//return value;
