int Filter(char* src, vector<char>& dest)
{
	while(1)
	{
		if (*src == 32)
			src++;
		else if (*src == 0)
			return -1;//表示空字符串
		else
		{
			while (1)
			{
				dest.push_back(*src++);
				if (*src == 0)
					return 0;
				else if (*src != 32)
				{
					continue;
				}
				else
				{
					//is 32
					char* temp = src;
					int count = 1;
					while (1)
					{
						src++;
			
						if (*src == 0)
						{
							//push_back
				
							break;
						}
						else if (*src != 32)
						{
							//push_back
							for (int i = 0; i < count; i++)
							{
								dest.push_back(*temp++);
							}
							break;
						}
						else
						{
							count++;
							continue;
						}
					
					}
				}
			
			
			}
		}
	}
}
//const& ?

//1.去首空；2.压入，若遇到空格，判断该压入2（1）还是结束2（2），若该压入2（1），则压入当中空格，再回到2（循环），若该结束break。（\0的判断？）

//引用的出现主要是为了支持运算符的重载
