#include<cstdio>
#include<cstring>
#include<cassert>

bool is_line2_in_line1(const char* line1, const char* line2);

void test();

int main()
{
	char a[] = "sdf";
	char b[] = "adf";

	printf ("\n%d\n",is_line2_in_line1(a,b));

	return 0;

}

bool is_line2_in_line1(const char* line1, const char* line2)
{
	if(std::strlen(line1) == 0 || std::strlen(line2) == 0 
			|| std::strlen(line2) > std::strlen(line1)
			|| line2[std::strlen(line2)] != '\0' || line1[std::strlen(line1)] != '\0'
	  )
	{
		return false;
	}

	int k=0;
	for(size_t i=0; i<std::strlen(line1); ++i)
	{
		if(line1[i] == line2[k++])
		{
			if(k == std::strlen(line2))
			{
				return true;
			}
		}
		else
		{
			if(i > (std::strlen(line1)-std::strlen(line2)))
			{
				return false;
			}
			k = 0;
			
		}
	
	}
	return false;

}

void test()
{
	{
	const char s1[] = "\0";
	const char s2[] = "\0";

	assert(is_line2_in_line1(s1,s2) == false);
	}
	{
	const char s1[] = "f\0";
	const char s2[] = "\0";

	assert(is_line2_in_line1(s1,s2) ==  false);
	}

	{
	const char s1[] = "\0";
	const char s2[] = "f\0";

	assert(is_line2_in_line1(s1,s2) == false);
	}
	{
	const char s1[] = "sdf\0";
	const char s2[] = "s\0";

	assert(is_line2_in_line1(s1,s2) == true);
	}

	{
	const char s1[] = "sdf\0";
	const char s2[] = "d\0";

	assert(is_line2_in_line1(s1,s2) == true);
	}
	{
	const char s1[] = "sdf\0";
	const char s2[] = "f\0";

	assert(is_line2_in_line1(s1,s2) ==  true);
	}

	{
	const char s1[] = "sdf\0";
	const char s2[] = "sdfs\0";

	assert(is_line2_in_line1(s1,s2) == false);
	}

	{
	const char s1[] = "sdf\0";
	const char s2[] = "sd\0";

	assert(is_line2_in_line1(s1,s2) ==  true);
	}

	{
	const char s1[] = "sdf\0";
	const char s2[] = "df\0";

	assert(is_line2_in_line1(s1,s2) ==  true);
	}

	{
	const char s1[] = "sdf\0";
	const char s2[] = "sf\0";

	assert(is_line2_in_line1(s1,s2) ==  false);
	}

	{
	const char s1[] = "sdf\0";
	const char s2[] = "fa\0";

	assert(is_line2_in_line1(s1,s2) ==  false);
	}

	{
	const char s1[] = "sdf\0";
	const char s2[] = "as\0";

	assert(is_line2_in_line1(s1,s2) == false);
	}

	{
	const char s1[] = "sdfsd\0";
	const char s2[] = "fsd\0";

	assert(is_line2_in_line1(s1,s2) == true);
	}
	{
	const char s1[] = "sdfsdf\0";
	const char s2[] = "sdf\0";

	assert(is_line2_in_line1(s1,s2) ==  true);
	}

	{
	const char s1[] = "sdfsdf\0";
	const char s2[] = "dfs\0";

	assert(is_line2_in_line1(s1,s2) ==  true);
	}

	{
	const char s1[] = "sdfsdf\0";
	const char s2[] = "sdfsdf\0";

	assert(is_line2_in_line1(s1,s2) == true);
	}

	{
	const char s1[] = "sdrfsdf\0";
	const char s2[] = "sdf\0";

	assert(is_line2_in_line1(s1,s2) ==  true);
	}

{
	const char s1[] = "sdf";
	const char s2[] = "as\0";

	assert(is_line2_in_line1(s1,s2) == false);
	}

{
	const char s1[] = "sdf\0";
	const char s2[] = "as\0";

	assert(is_line2_in_line1(s1,s2) == false);
	}





}


