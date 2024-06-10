#include<iostream>
#include<cmath>
using namespace std;
class circle
{
    protected : 
	            float a,c;
	            double dis;
	            
	public: void getcircle(int r)
	        {
                 a=3.14*r*r;
				 c=2*3.14*r;
				 	        	
			}	
			void getcircle(int cx,int cy,int A,int B,int C)
			{
				dis=(A*cx+B*cy+C)/sqrt(A*A+B*B);
			}			
			void showcircle()
			{
			    cout<<"area =   "<<a<<endl;
			    cout<<"circumf =   "<<c<<endl;
			    cout<<"dis = "<<dis<<endl;
                cout<<"------------------------------------------------------------------------------------"<<endl;				
			}
			void tgt()
 	        {
 	        	if(dis==0)
 	        	{
 	        		cout<<"tangent"<<endl;
				 }
				 else if(dis>0)
				      {
				      	  cout<<"intercept at 2 point "<<endl;
					  }
					  else if(dis<0)
					       {
					       	   cout<<"not tgt"<<endl;
					       	   
						   }
			 }	
};
class line
{
    protected : int x1,x2,y1,y2;
	            float s,i;
					
	public: void getline(int x1,int x2,int y1,int y2)
	        {
	             s=(y2-y1)/(x2-x1);
	             i=y1-s*x1;
	             
				 cout<<"Slope =  "<<s<<endl;
				 cout<<"Intercept =  "<<i<<endl;
				 								
			}				
 	        
};
int main()
{
	circle x;
	x.getcircle(2);
	x.getcircle(2,2,1,2,3);
		x.tgt();
	x.showcircle();
	line l;
	l.getline(1,2,3,4);

}
