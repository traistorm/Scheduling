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
	while(1)
	{
		//sched_rr_get_interval(pid, &time);
		//printf("Time slice process B : %lu\n", time.tv_nsec);
		printf("Process B");
	}
}
