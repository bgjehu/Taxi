//Jieyi Hu
//main.cpp
#include"timeimp.h"
using namespace std;  

int main()  
{
	int pause;
	int i=0;
	double totalfee;
	char command;
	bool eot=false;
	time_t o_time;  
	struct tm*r_time;
	o_time = time(NULL); //获取日历时间   
	r_time=localtime(&o_time);  //获取当前系统时间  
	cout<<"欢迎使用我们的轿车接送服务"<<endl;
	renew(r_time);
	cout<<"现在时间 ";dsptime(r_time);cout<<endl;
	timeframe* part=new timeframe[19];
	while(eot==false)
	{
		cout<<"R-行车；W-等待；E-结束"<<endl;
		cin>>command;
		while(!(command=='r'||command=='w'||command=='e'))
		{
			cout<<"错误指令，请重新输入"<<endl;
			cout<<"R-行车；W-等待；E-结束"<<endl;
			cin>>command;
		}
		if(command=='r'||command=='w')
		{
			if(part[i].setstartyet==true&&part[i].setendyet==true){i++;}
			else{}
			part[i].m_type=command;
			renew(r_time);
			part[i].settime(r_time);
			
		}
		else{eot=true;}
	}
	dsptime(part[0].m_start);
	dsptime(part[0].m_end);
	dsptime(part[1].m_start);
	dsptime(part[1].m_end);
	for(int j=0;j<=i;j++)
	{
	/*	if(part[j].m_type=='r')
		{
			cout<<"行车";
			dsptime(part[j].m_start);cout<<"-";dsptime(part[j].m_end);
			cout<<endl;
		}
		else if(part[j].m_type=='w')
		{
			cout<<"等待";
			dsptime(part[j].m_start);cout<<"-";dsptime(part[j].m_end);
			cout<<endl;
		}*/
		
	}





	cin>>pause;
}   
