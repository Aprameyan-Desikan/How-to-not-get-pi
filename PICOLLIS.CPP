#include<iostream.h>
#include<process.h>
#include<conio.h>
void firstcollision(long double M,long double &V,long double &v)
{
	v=(2*M*V)/(M+1);
	V=((M-1)/(M+1))*V;

	cout<<"Velocity of big block after first collision is "<<V<<endl;
	cout<<"Velocity of small block after first collision is "<<v<<endl;
}
void continuouscollision(long double M,long double &V,long double &v)
{
	long double u,U;
	u=v;
	U=V;
	v=(((2*M*U+(M-1)*u))/(M+1));
	V=((2*(-1)*u+(M-1)*U)/(M+1));

}
void continuouscollision2(long double M,long double &V,long double &v)
{
	double long u,U;
	u=v;
	U=V;
	v=(((2*M*U-(M-1)*u))/(M+1));
	V=((2*u+(M-1)*U)/(M+1));


}
void main()
{
	clrscr();
	long double M,V,v,k=0,h=0;
	cout<<"Enter the mass of big block ";
	cin>>M;
	cout<<"Enter the velocity of big block ";
	cin>>V;
	v=0;
	firstcollision(M,V,v);
	k=2;
	cout<<"First loop "<<endl;
	while(V>=0)
	{
		continuouscollision(M,V,v);
		k++;
		h++;

		cout<<"Big block: "<<V<<"m/s  Small block: "<<v<<"m/s"<<endl;

	}
	k+=h;
	h=0;
	V=(-1)*V;
	cout<<"Velocity of first block after reversing direction is "<<V<<endl;

	cout<<"Second loop "<<endl;
	while(V<=v)
	{
		continuouscollision2(M,V,v);
		k++;
		h++;

		cout<<"Big block: "<<V<<"m/s  Small block: "<<v<<"m/s"<<endl;
		v=(-1)*v;
	}
	k+=h;
	if(v<=0)
	cout<<"The number of collisions is "<<k-1;
	else
	cout<<"The number of collisions is "<<k;
	getch();
}



