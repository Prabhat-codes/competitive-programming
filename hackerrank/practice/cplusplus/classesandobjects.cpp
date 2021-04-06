

// Write your Student class here
class Student{
    public:
    int scores[5];
    
    void input(){
        int i=0;
        while(i<5){
            cin>>scores[i];
            i++;
        }
    }
    
    int calculateTotalScore(){
        int sum;
        int i=0;
        while(i<5){
            sum=sum+scores[i];
            i++;
        }
        return sum;
    }    
};

