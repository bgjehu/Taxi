#include <iostream>  
#include <time.h>  
using namespace std;  
void dsptime(const struct tm *); //���ʱ�䡣  

int main()  
{
	int pause;
	time_t nowtime;  
	nowtime = time(NULL); //��ȡ����ʱ��   

	struct tm *local;
	local=localtime(&nowtime);  //��ȡ��ǰϵͳʱ��  
	dsptime(local);
	for(int i=999999999;i!=0;i--)
	{}
	nowtime = time(NULL);
	local=localtime(&nowtime);
	dsptime(local);


	cout<<"��ӭʹ�����ǵĽγ����ͷ���"<<endl;
	cin>>pause;
}   
void dsptime(const struct tm * ptm)  
{  
	char *pxq[]={"��","һ","��","��","��","��","��"};  
	cout << ptm->tm_year+1900 << "��" << ptm->tm_mon+1 << "��" << ptm->tm_mday << "�� " ;  
	cout << ptm->tm_hour << ":" << ptm->tm_min << ":" << ptm->tm_sec <<" " ;  
	cout << " ����" <<pxq[ptm->tm_wday] << endl;  
}