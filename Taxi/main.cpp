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
	o_time = time(NULL); //��ȡ����ʱ��   
	r_time=localtime(&o_time);  //��ȡ��ǰϵͳʱ��  
	cout<<"��ӭʹ�����ǵĽγ����ͷ���"<<endl;
	renew(r_time);
	cout<<"����ʱ�� ";dsptime(r_time);cout<<endl;
	timeframe* part=new timeframe[19];
	while(eot==false)
	{
		cout<<"R-�г���W-�ȴ���E-����"<<endl;
		cin>>command;
		while(!(command=='r'||command=='w'||command=='e'))
		{
			cout<<"����ָ�����������"<<endl;
			cout<<"R-�г���W-�ȴ���E-����"<<endl;
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
			cout<<"�г�";
			dsptime(part[j].m_start);cout<<"-";dsptime(part[j].m_end);
			cout<<endl;
		}
		else if(part[j].m_type=='w')
		{
			cout<<"�ȴ�";
			dsptime(part[j].m_start);cout<<"-";dsptime(part[j].m_end);
			cout<<endl;
		}*/
		
	}





	cin>>pause;
}   
