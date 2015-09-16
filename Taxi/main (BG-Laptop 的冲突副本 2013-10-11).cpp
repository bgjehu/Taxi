#include <iostream>  
#include <time.h>  
using namespace std;  
void dsptime(const struct tm *); //输出时间。  

int main()  
{
	int pause;
	time_t nowtime;  
	nowtime = time(NULL); //获取日历时间   

	struct tm *local;
	local=localtime(&nowtime);  //获取当前系统时间  
	dsptime(local);
	for(int i=999999999;i!=0;i--)
	{}
	nowtime = time(NULL);
	local=localtime(&nowtime);
	dsptime(local);


	cout<<"欢迎使用我们的轿车接送服务"<<endl;
	cin>>pause;
}   
void dsptime(const struct tm * ptm)  
{  
	char *pxq[]={"日","一","二","三","四","五","六"};  
	cout << ptm->tm_year+1900 << "年" << ptm->tm_mon+1 << "月" << ptm->tm_mday << "日 " ;  
	cout << ptm->tm_hour << ":" << ptm->tm_min << ":" << ptm->tm_sec <<" " ;  
	cout << " 星期" <<pxq[ptm->tm_wday] << endl;  
}