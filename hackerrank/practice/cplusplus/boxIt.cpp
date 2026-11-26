// HackerRank, Box It!: a class with constructors and overloaded operators.
// Input: the number of queries, then one query per line (types 1 to 5).
#include <iostream>
using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box{
  private:
  int l,b,h;
  public:
  Box(){
      b=h=l=0;
  }  
  Box(int a,int c,int d){
      l=a;
      b=c;
      h=d;
  }
  Box(const Box& B){
      l=B.l;
      h=B.h;
      b=B.b;
  }
  int getLength(){
      return l;
  }
  int getBreadth(){
      return b;
  }
  int getHeight(){
      return h;
  }
  long long CalculateVolume(){
      return (long long)b*l*h;
  }
  friend bool operator < ( Box&A,Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

int main(){
    int n,type;
    cin>>n;
    Box box;
    while(n--){
        cin>>type;
        if(type==1){            // show the box
            cout<<box<<endl;
        } else if(type==2){     // replace the box
            int l,b,h;
            cin>>l>>b>>h;
            box=Box(l,b,h);
            cout<<box<<endl;
        } else if(type==3){     // compare a new box with it
            int l,b,h;
            cin>>l>>b>>h;
            Box other(l,b,h);
            cout<<(other<box ? "Lesser" : "Greater")<<endl;
        } else if(type==4){     // volume
            cout<<box.CalculateVolume()<<endl;
        } else if(type==5){     // copy it
            Box copy(box);
            cout<<copy<<endl;
        }
    }
    return 0;
}
