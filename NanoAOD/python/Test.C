#include<iostream>
using namespace std;

class KinFit{

public:
int x;


KinFit(int a);




};

KinFit::KinFit(int a){

x=a;
}



void Test(){

KinFit s(12);
  
int a=10;
int b=11;

if(typeid(s)==typeid(b))std::cout<<"bbbb: "<<std::endl;

}















