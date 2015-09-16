//Jieyi Hu
//timeimp.h
#ifndef TIMEIMP_H
#include <time.h>
#include <iostream>
using namespace std;

void dsptime(const struct tm * m_time)  
{  
	if(m_time->tm_hour>12)
	{cout<<m_time->tm_hour-12<<":"<<m_time->tm_min<<"pm";}
	else{cout<<m_time->tm_hour<<":"<<m_time->tm_min<<"am";}
	
}
void renew(struct tm * m_time)
{
	time_t o_time;
	o_time = time(NULL); //获取日历时间
	m_time=localtime(&o_time);  //获取当前系统时间
}

class timeframe
{
public:
	struct tm* m_start;
	struct tm* m_end;
	bool setstartyet;
	bool setendyet;
	void settime(struct tm*);
	void cal();
	int m_min;
	double m_fee;
	char m_type;
	timeframe();
	
};
timeframe::timeframe()
{
	setstartyet=false;
	setendyet=false;
}
void timeframe::settime(struct tm* m_time)
{
	if(setstartyet==false)
	{
		dsptime(m_time);
		cout<<"计时开始"<<endl;
		m_start=m_time;
		setstartyet=true;
	}
	else
	{
		dsptime(m_time);
		cout<<"计时停止"<<endl;
		m_end=m_time;
		setendyet=true;
	}
}
void timeframe::cal()
{
	m_min=(m_end->tm_hour-m_start->tm_hour)*60+m_end->tm_min-m_start->tm_min;
	if(m_type=='r')
	{
		if(m_min%3==0){m_fee=(m_min/3)*1.5;}
		else{m_fee=(int(m_min/3)+1)*1.5;}
	}
	else
	{
		if(m_min%3==0){m_fee=(m_min/3)*.5;}
		else{m_fee=(int(m_min/3)+1)*.5;}
	}
}




#endif // !TIMEIMP_H
