#include<iostream>
using namespace std;
class Log{
public:
    const int LogLevelError=0;    
    const int LogLevelWarning=1;
    const int LogLevelInfo=2;
private:
    int m_LogLevel=LogLevelInfo;
public:
    void setLevel(int level){
        
        m_LogLevel=level;
    }
    void warn(const char* message){
        if(m_LogLevel>=LogLevelWarning)
        cout<<"WARNING "<<message<<endl;
    }
    void error(const char* message){
        if(m_LogLevel>=LogLevelError)
        cout<<"ERROR "<<message<<endl;
    }
    void info(const char* message){
        if(m_LogLevel>=LogLevelInfo)
        cout<<"INFO "<<message<<endl;
    }

};

int main(){
    Log log;
    log.setLevel(log.LogLevelError);
    log.warn("Hello");

    log.info("Hello");
    log.error("Hello");
    return 0;
}