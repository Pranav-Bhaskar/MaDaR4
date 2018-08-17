#include "./header/prog.dec"

int main (int argc, char const* argv[])
{	
	database = NULL;
	table = NULL;
	load = NULL;
	int t = 0;
	do{
		t = enter_query();
	}while(t);
	footer();
	return 0;
}
