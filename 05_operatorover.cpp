// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Box{
    public:
    double getVolume(){
        return length * breadth *heigth;
    }
    void setLength( double len){
        length =len;
    }
    void setBreadth( double bre){
        breadth = bre;
    }
    void setHeigth( double hei){
        heigth =hei;
    }
    
    Box operator+(const Box& b){
    Box box;
    box.length=this->length + b.length;
    box.breadth=this->breadth + b.breadth;
    box.heigth=this->heigth + b.heigth;
    
    return box;
    }
    
    private:
        double length;
        double breadth;
        double heigth;
    
};
int main() {
    // Write C++ code here
    
    cout << "Try programiz.pro";
    
    Box box1;
    Box box2;
    Box box3;
    
    double volume=0.0;
    box1.setLength(12);
    box1.setBreadth(13);
    box1.setHeigth(14);
    
    box2.setLength(12);
    box2.setBreadth(13);
    box2.setHeigth(14);
    
    cout<<"Volume of Box1"<<endl;
    cout<<box1.getVolume()<<endl;
    
    cout<<"Volume of Box2"<<endl;
    cout<<box2.getVolume()<<endl;
    
    box3 = box1 + box2 ;
    
    cout<<"Volume of Box3"<<endl;
    cout<<box3.getVolume()<<endl;

    return 0;
}
