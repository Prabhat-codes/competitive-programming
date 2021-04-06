
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

