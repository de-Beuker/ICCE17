#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_


class CPU
{
	int d_registers[NREGISTERS];
    public:
        CPU();
        void start();
    private:
    	bool error();
};
        
#endif
