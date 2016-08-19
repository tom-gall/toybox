#ifndef _TEMP_SYSINFO_H
#define _TEMP_SYSINFO_H

struct sysinfo {
	long uptime;
	unsigned long loads[3];
	unsigned long totalram;
	unsigned long freeram;
	unsigned long sharedram;
	unsigned long bufferram;
	unsigned long totalswap;
	unsigned long freeswap;
	short procs;
	short pad;
	unsigned long totalhigh;
	unsigned long freehigh;
	unsigned int mem_unit;
	char _padding[20-2*sizeof(unsigned long)-sizeof(unsigned int)];
	/* The padding is claimed for libc5 compat, sounds worthless
	 * perhaps.
	 */
};

#endif
