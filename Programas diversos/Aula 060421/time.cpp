#include "Time.h" 

Time::Time(int hour, int minute, int second) { 
   setTime(hour, minute, second); 
} 

void Time::setTime( int hour, int minute, int second ){
   setHour( hour );
   setMinute( minute );
   setSecond( second );
} 
void Time::setHour( int h ){
   hour = ( h >= 0 && h < 24 ) ? h : 0; // valida horas
} 
void Time::setMinute( int m ){ 
   minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
} 
void Time::setSecond( int s ){ 
   second = ( s >= 0 && s < 60 ) ? s : 0; // valida segundos
} 
int Time::getHour() const {// fun��es get devem ser const
   return hour; 
} 
int Time::getMinute() const{
   return minute; 
} 
int Time::getSecond() const{ 
   return second;
} 
void Time::printUniversal() const{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minute << ":" << setw( 2 ) << second<<endl;
} 
void Time::printStandard(){ // note a falta da declara��o const
   cout << setfill( '0' ) << setw( 2 ) <<( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
      << ":" <<  setw( 2 ) << minute
      << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" )<<endl;
} 

