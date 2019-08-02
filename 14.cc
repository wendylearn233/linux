
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int i,m,k,j;
    float c[3],b[3];
    vector<vector<int>> obj(3);//二维数组的定义,建立一个二维数组
    for(int i=0; i<3; i++)//size表示行的容量
    {
    	obj[i].resize(3);//再把每一行生3列
    }
    
    
       
   for(int i = 0; i < obj.size() ;++i)
   {
        for(int j = 0 ;j< obj[0].size();++j)//resize对应这里的size
        {
        	cout<<"输入2维数组";
        	cout << obj[i][j];//能不能不是值
                cin>>obj[i][j];
        }
       
   }
     
     
     
   for(int i = 0; i < obj.size() ;++i)
   {
        for(int j = 0 ;j< obj[0].size();++j)
        {
            cout << obj[i][j] << "  ";
        }
        cout << endl ;
   }
     
     
     
   for(i=0;i<3;i++)//向量
   {
  	   cout<<"输入向量";
  	   cin>>b[i];
   }
  
  
   for(i=0;i<3;i++)
   {
  	  cout<< b[i];
  	  cout<<"\n";
   }
   
  	
   for(i=0;i<3;i++)
   {
  	 c[i]=0;
   }
   
  cout<<"演化次数:";
  cin>>m;
  
  for(k=1;k<=m;k++)
  {
  	for(i=0;i<3;i++)//行
  	{
  		for(j=0;j<3;j++)//列
  		{
  			c[i]+=obj[i][j]*b[j];
  		}
  	}
  	
  }
  
  
  
  for(i=0;i<3;i++)
   {
  	  cout<< c[i];
  	  cout<<"\n";
   }
  
 
 
     

     return 0;
}


