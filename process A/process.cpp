#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <time.h>

int main(int argc, char *argv[])
{
	//time_t seconds;
	//int currentTime, lastTime = 0;
	//seconds = time(NULL);
	//int pid_t = getpid();
	//printf("process id : %d\n", pid_t);
	//setpriority(PRIO_PROCESS, pid_t, 20);
	//currentTime = static_cast<int> (time(NULL));
	//printf("time in seconds : %d\n", currentTime);
	//pid_t pid = getpid();
	//timespec time;
	//high_resolution_clock::time_point t1 = high_resolution_clock::now();
	//high_resolution_clock::time_point t2 = high_resolution_clock::now();
	while(1)
	{
		//t2 = high_resolution_clock::now();
		//duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
		//sched_rr_get_interval(pid, &time);
		//t1 = high_resolution_clock::now();
		//printf("Time slice process A : %lu\n", time.tv_nsec);
		printf("Process A");
		
		
	}
}
