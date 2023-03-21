#include "bricks.h"
#include "create_permutations.h"
#include <iostream>
#include <fstream>
#include <initializer_list>

void permutations(const std::initializer_list<float> list)
{
	const std::string filename = "input_values.txt";
	size_t N = list.size();
	float m[N];
	initialize(list,N,m);
	switch(N)
		{
			case 0: permutations_0(m,filename);
							break;
			case 1: permutations_1(m,filename);
							break;
			case 2: permutations_2(m,filename);
							break;
			case 3: permutations_3(m,filename);
							break;
			case 4: permutations_4(m,filename);
							break;
			case 5: permutations_5(m,filename);
							break;
			case 6: permutations_6(m,filename);
							break;
			default: no_permutations(m,N,filename);
			break;
			
		}
	}

void no_permutations(const float* m, const size_t N, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function no_permutations.\n"; 
	}
	for(size_t i=0; i<N; ++i)
		{					
				write << *(m+i) << " ";
		}
	write << "\n";
}



void permutations_0(const float* m, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function permutations_0.\n"; 
	}
	write.clear();
write << " \n";
	}
void permutations_1(const float* m, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function permutations_1.\n"; 
	}
	write.clear();
	write << *(m+0);
	write << "\n";
	
}


void permutations_2(const float* m, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function permutations_2.\n"; 
	}
	write.clear();
	size_t N = 2;
	float M[N];
	initialize(m,N,M);
	for(size_t i1=0; i1<N; ++i1)
		{
			for(size_t i2=0; i2<N; ++i2)
				{
					if(i2 != i1)
					{
						
									write << *(m+i1) << " "
										<< *(m+i2) << " " ;
									write << "\n";
					}
				}
		}
}


void permutations_3(const float* m, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function permutations_3.\n"; 
	}
	write.clear();
	size_t N = 3;
	float M[N];
	initialize(m,N,M);
	for(size_t i1=0; i1<N; ++i1)
		{
			for(size_t i2=0; i2<N; ++i2)
				{
					if(i2 != i1)
					{
						for(size_t i3=0; i3<N; ++i3)
							{
								if(i3 != i1 && i3 != i2)
								{
									write << *(m+i1) << " "
										<< *(m+i2) << " " 
										<< *(m+i3) << " ";
									write << "\n";
								}
							}
					}
				}
			}
	}

void permutations_4(const float* m, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function permutations_4.\n"; 
	}
	write.clear();
	size_t N = 4;
	float M[N];
	initialize(m,N,M);
	for(size_t i1=0; i1<N; ++i1)
		{
			for(size_t i2=0; i2<N; ++i2)
				{
					if(i2 != i1)
					{
						for(size_t i3=0; i3<N; ++i3)
							{
								if(i3 != i1 && i3 != i2)
								{
									for(size_t i4=0; i4<N; ++i4)
										{
										if(i4 != i1 && i4 != i2 && i4 != i3)
								{
									write << *(m+i1) << " "
										<< *(m+i2) << " " 
										<< *(m+i3) << " "
										<< *(m+i4) << " ";
									write << "\n";
								}
							}
					}
				}
			}
		}
		}
	}


void permutations_5(const float* m, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function permutations_5.\n"; 
	}
	
	size_t N = 5;
	float M[N];
	initialize(m,N,M);
	for(size_t i1=0; i1<N; ++i1)
		{
			for(size_t i2=0; i2<N; ++i2)
				{
					if(i2 != i1)
					{
						for(size_t i3=0; i3<N; ++i3)
							{
								if(i3 != i1 && i3 != i2)
								{
									for(size_t i4=0; i4<N; ++i4)
										{
										if(i4 != i1 && i4 != i2 && i4 != i3)
								{
									for(size_t i5=0; i5<N; ++i5)
										{
										if(i5 != i1 && i5 != i2 && i5 != i3 && i5 != i4)
								{
									write << *(m+i1) << " "
 										<< *(m+i2) << " " 
										<< *(m+i3) << " "
										<< *(m+i4) << " "
									<< *(m+i5) << " ";
									
									write << "\n";
								}
							}
					}
				}
			}
		}
		}
	}
			}
	}


void permutations_6(const float* m, const std::string& filename)
{
	std::ofstream write(filename, std::ios::trunc);
	if(!write.is_open())
	{
		std::cout << "The file \"" << filename << "\" can't be opened in function permutations_.\n"; 
	}
	size_t N = 6;
	float M[N];
	initialize(m,N,M);
	for(size_t i1=0; i1<N; ++i1)
		{
			for(size_t i2=0; i2<N; ++i2)
				{
					if(i2 != i1)
					{
						for(size_t i3=0; i3<N; ++i3)
							{
								if(i3 != i1 && i3 != i2)
								{
									for(size_t i4=0; i4<N; ++i4)
										{
										if(i4 != i1 && i4 != i2 && i4 != i3)
								{
									for(size_t i5=0; i5<N; ++i5)
										{
										if(i5 != i1 && i5 != i2 && i5 != i3 && i5 != i4)
								{
								for(size_t i6=0; i6<N; ++i6)
										{
										if(i6 != i1 && i6 != i2 && i6 != i3 && i6 != i4 && i6 != i5)
								{
								write << *(m+i1) << " "
 										<< *(m+i2) << " " 
										<< *(m+i3) << " "
										<< *(m+i4) << " "
									<< *(m+i5) << " "
										<< *(m+i6) << " ";
									
									write << "\n";
								}
							}
						}
					}
				}
			}
		}
	}
}
}
}
}


			
void permutations_15(const float* m)
{
	size_t N = 15;
	float M[N];
	initialize(m,N,M);
	for(size_t i1=0; i1<N; ++i1)
		{
			for(size_t i2=0; i2<N; ++i2)
				{
					if(i2 != i1)
					{
						for(size_t i3=0; i3<N; ++i3)
							{
								if(i3 != i1 && i3 != i2)
								{
									for(size_t i4=0; i4<N; ++i4)
										{
									if( i4 != i3 && i4 != i2 && i4 != i1)
											{
		
for(size_t i5=0; i5<N; ++i5)
										{
										if(i5 != i4  && i5 != i3 && i5 != i2 && i5 != i1)
											{
		
for(size_t i6=0; i6<N; ++i6)
										{
											if( i6 != i5 && i6 != i4  && i6 != i3 && i6 != i2 && i6 != i1)
											{
											for(size_t i7=0; i7<N; ++i7)
										{
											if(   i7 != i6 && i7 != i5 && i7 != i4  && i7 != i3 && i7 != i2 && i7 != i1)
											{
											for(size_t i8=0; i8<N; ++i8)
										{
											if(  i8 != i7 && i8 != i6 && i8 != i5 && i8 != i4  && i8 != i3 && i8 != i2 && i8 != i1)
											{
											for(size_t i9=0; i9<N; ++i9)
										{
											if( i9 != i8 && i9 != i7 && i9 != i6 && i9 != i5 && i9 != i4  && i9 != i3 && i9 != i2 && i9 != i1)
											{
											for(size_t i10=0; i10<N; ++i10)
										{
											if( i10 != i9 && i10 != i8 && i10 != i7 && i10 != i6 && i10 != i5 && i10 != i4  && i10 != i3 && i10 != i2 && i10 != i1)
											{
											for(size_t i11=0; i11<N; ++i11)
										{
											if( i11 != i10 && i11 != i9 && i11 != i8 && i11 != i7 && i11 != i6 && i11 != i5 && i11 != i4  && i11 != i3 && i11 != i2 && i11 != i1)
											{
											for(size_t i12=0; i12<N; ++i12)
										{
											if( i12 != i11 && i12 != i10 && i12 != i9 && i12 != i8 && i12 != i7 && i12 != i6 && i12 != i5 && i12 != i4  && i12 != i3 && i12 != i2 && i12 != i1)
											{
											for(size_t i13=0; i13<N; ++i13)
										{
											if( i13 != i12 && i13 != i11 && i13 != i10 && i13 != i9 && i13 != i8 && i13 != i7 && i13 != i6 && i13 != i5 && i13 != i4  && i13 != i3 && i13 != i2 && i13 != i1)
											{
											for(size_t i14=0; i14<N; ++i14)
										{
											
											if( i14 != i13 && i14 != i12 && i14 != i11 && i14 != i10 && i14 != i9 && i14 != i8 && i14 != i7 && i14 != i6 && i14 != i5 && i14 != i4  && i14 != i3 && i14 != i2 && i14 != i1)
											{
											for(size_t i15=0; i15<N; ++i15)
										{
											if(i15 != i14 && i15 != i13 && i15 != i12 && i15 != i11 && i15 != i10 && i15 != i9 && i15 != i8 && i15 != i7 && i15 != i6 && i15 != i5 && i15 != i4  && i15 != i3 && i15 != i2 && i15 != i1)
											{
												std::cout << *(M+i1) << " "
													<< *(M+i2) << " "
													<< *(M+i3) << " "
													<< *(M+i4) << " "
													<< *(M+i5) << " "
													<< *(M+i6) << " "
													<< *(M+i7) << " "
													<< *(M+i8) << " "
													<< *(M+i9) << " "
													<< *(M+i10) << " "
													<< *(M+i11) << " "
													<< *(M+i12) << " "
													<< *(M+i13) << " "
													<< *(M+i14) << " "
													<< *(M+i15) << " ";
												std::cout << "\n";
											}
										}}}}}
							}}}}}	
				}}}}}
	}}}}}
}}}}}
}}}
	}

							