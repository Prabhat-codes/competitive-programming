// HackerRank, Classes and Objects: how many students score more than the first one?
// Input: the number of students, then five marks for each.
#include <iostream>
#include <vector>
using namespace std;

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
        int sum=0;
        int i=0;
        while(i<5){
            sum=sum+scores[i];
            i++;
        }
        return sum;
    }    
};

int main(){
    int n;
    cin>>n;
    vector<Student> students(n);
    for(int i=0;i<n;i++){
        students[i].input();
    }
    int first=students[0].calculateTotalScore();
    int higher=0;
    for(int i=1;i<n;i++){
        if(students[i].calculateTotalScore()>first){
            higher++;
        }
    }
    cout<<higher<<endl;
    return 0;
}
