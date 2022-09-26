#include <iostream> 
#include <fstream>
#include <map>

struct MY_CPU
{
	int r1 = 0;
	int r2 = 0;
	int r3 = 0;
	int r4 = 0;
	int r5 = 0;
	int r6 = 0;
	int r7 = 0;
	int r8 = 0;
	int r9 = 0;
	int r10 = 0;
}CPU;

std::map<std::string,int > gl_mp;

void gum(std::string str1, std::string str2)
{
	gl_mp[str1] += gl_mp[str2];
}
void han(std::string str1,std::string str2)
{
	gl_mp[str1] -= gl_mp[str2];
}
void baj(std::string str1,std::string str2)
{
	gl_mp[str1] /= gl_mp[str2];
}
void baz(std::string str1,std::string str2)
{
	gl_mp[str1] *= gl_mp[str2];
}
void pat(std::string str1,std::string str2)
{
	gl_mp[str1] = gl_mp[str2];
}
void hav(std::string str, int x)
{
	gl_mp[str] = x;
}
void evv(std::string str1, std::string str2)
{
	gl_mp[str1] &= gl_mp[str2];
}
void kam(std::string str1,std::string str2)
{
	gl_mp[str1] |= gl_mp[str2];
}
void che(std::string str,std::string strx)// che r1 che
{
	gl_mp[str] = ~gl_mp[str];
}
void ham(std::string str1,std::string str2)
{
	if (gl_mp[str1] > gl_mp[str2])
	{	
		std::cout << gl_mp[str1];
	}
	else {
		std::cout << gl_mp[str2];
	}
}
			
int main ()
{
	gl_mp["r1"] = CPU.r1;
	gl_mp["r2"] = CPU.r2;
	gl_mp["r3"] = CPU.r3;
	gl_mp["r4"] = CPU.r4;
	gl_mp["r5"] = CPU.r5;
	gl_mp["r6"] = CPU.r6;
	gl_mp["r7"] = CPU.r7;
	gl_mp["r8"] = CPU.r8;
	gl_mp["r9"] = CPU.r9;
	gl_mp["r10"] = CPU.r10;

	std::ifstream fin;
		
	fin.open("ars.txt");
	
	std::map<std::string,void (*) (std::string,std::string)> m;

        m["gum"] = &gum;
        m["han"] = &han;
        m["baj"] = &baj;
        m["baz"] = &baz;
        m["pat"] = &pat;
	m["evv"] = &evv;
	m["kam"] = &kam;
	
	std::string str[5][3];
 
	for (int i = 0; i < 5; ++i)
	{
		fin >> str[i][0];
		
	        if (str[i][0] == "hav")
		{
			int x;
			fin >> str[i][1];
			fin >> x;
			hav(str[i][1],x);
		}
		else if (str[i][0] == "che")
		{
			fin >> str[i][1];
			fin >> str[i][2];
			che(str[i][1],str[i][2]);
		}	
		else {
			for (int j = 1; j < 3; ++j)
			{
				fin >> str[i][j];
			}
			m[str[i][0]](str[i][1],str[i][2]);
		}	
	}
	
	CPU.r1 = gl_mp["r1"];
	CPU.r2 = gl_mp["r2"];
	CPU.r3 = gl_mp["r3"];
	CPU.r4 = gl_mp["r4"];
	CPU.r5 = gl_mp["r5"];
	CPU.r6 = gl_mp["r6"];
	CPU.r7 = gl_mp["r7"];
	CPU.r8 = gl_mp["r8"];
	CPU.r9 = gl_mp["r9"];
	CPU.r10 = gl_mp["r10"];

	std::cout << CPU.r1;
}
