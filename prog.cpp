#include "./header/prog.dec"

int main (int argc, char const* argv[])
{	
	database = NULL;
	table = NULL;
	load = NULL;
	while(enter_query());
	footer();
	return 0;
}
