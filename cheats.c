void	__Endless_Mode_Hax__(void)
{
}

void	Score_Hack(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x00082E4, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	#_Tries_Hack(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x00082FC, 0x00000000);
	WRITEU32(offset + 0x0A85F20, 0x00000000);
	offset = 0;
	data = 0;
}

void	__Tries_Hack(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x0A1AF1C, 0x00000000);
	offset = 0;
	data = 0;
}
