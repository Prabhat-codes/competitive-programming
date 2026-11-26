// HackerRank, Rectangle Area. Input: width and height.
#include <iostream>
using namespace std;

/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
   public:
   int width,height;
   void display(){
       cout<<width<<" "<<height<<endl;
   }  
};

class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin>>width>>height;
    }
    void display(){
        cout<<width*height<<endl;
    }
};

int main(){
    RectangleArea r;
    r.read_input();
    r.Rectangle::display();  // the size
    r.display();             // the area
    return 0;
}
