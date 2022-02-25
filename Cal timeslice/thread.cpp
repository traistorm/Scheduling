#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <time.h>
#include <pthread.h>
#include <sys/prctl.h>
#include <chrono>
#include <iostream>

using namespace std::chrono;
using namespace std;

int a = 5;
int currentThread = 0; 
high_resolution_clock::time_point t1 = high_resolution_clock::now();
high_resolution_clock::time_point t2 = high_resolution_clock::now();

void* Thread1(void *pp)
{
	//prctl(PR_SET_NAME,"ThreadA\0",NULL,NULL,NULL);
	
	
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	printf("Created thread A\n");
	int i = 100;
	t1 = high_resolution_clock::now();
	while (1)
	{
		//printf("A\n");
		if (currentThread != 0)
		{
			t2 = high_resolution_clock::now();
			//duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
			cout << duration_cast<nanoseconds>(t2 - t1).count() <<endl;
			t1 = high_resolution_clock::now();
			currentThread = 0;
		}
	}
	return NULL;
}
void* Thread2(void *pp)
{
	//prctl(PR_SET_NAME,"ThreadA\0",NULL,NULL,NULL);
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	printf("Created thread B\n");
	int i = 100;
	t1 = high_resolution_clock::now();
	while (1)
	{
		//printf("B\n");
		if (currentThread != 1)
		{
			t2 = high_resolution_clock::now();
			//duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
			cout << duration_cast<nanoseconds>(t2 - t1).count() <<endl;
			t1 = high_resolution_clock::now();
			currentThread = 1;
		}
	}
	return NULL;
}
void* Thread3(void *pp)
{
	//prctl(PR_SET_NAME,"ThreadA\0",NULL,NULL,NULL);
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	printf("Created thread B\n");
	int i = 100;
	t1 = high_resolution_clock::now();
	while (1)
	{
		//printf("C\n");
		if (currentThread != 2)
		{
			t2 = high_resolution_clock::now();
			//duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
			cout << duration_cast<nanoseconds>(t2 - t1).count() <<endl;
			t1 = high_resolution_clock::now();
			currentThread = 2;
		}
	}
	return NULL;
}
void* Thread4(void *pp)
{
	//prctl(PR_SET_NAME,"ThreadA\0",NULL,NULL,NULL);
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	printf("Created thread B\n");
	int i = 100;
	t1 = high_resolution_clock::now();
	while (1)
	{
		//printf("D\n");
		if (currentThread != 3)
		{
			t2 = high_resolution_clock::now();
			//duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
			cout << duration_cast<nanoseconds>(t2 - t1).count() <<endl;
			t1 = high_resolution_clock::now();
			currentThread = 3;
		}
	}
	return NULL;
}
void* Thread5(void *pp)
{
	//prctl(PR_SET_NAME,"ThreadA\0",NULL,NULL,NULL);
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	printf("Created thread D\n");
	int i = 100;
	while (i > 0)
	{
		t2 = high_resolution_clock::now();
		for (int j = 0; j < 1000000; j++)
		{
			
		}
		i--;
		//printf("B\n");
		time_span = duration_cast<duration<double>>(t2 - t1);
		printf("Time reach to %f D\n", time_span.count());
		t1 = high_resolution_clock::now();
	}
	return NULL;
}
void* Thread6(void *pp)
{
	//prctl(PR_SET_NAME,"ThreadA\0",NULL,NULL,NULL);
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	printf("Created thread D\n");
	int i = 100;
	while (i > 0)
	{
		t2 = high_resolution_clock::now();
		for (int j = 0; j < 1000000; j++)
		{
			
		}
		i--;
		//printf("B\n");
		time_span = duration_cast<duration<double>>(t2 - t1);
		printf("Time reach to %f D\n", time_span.count());
		t1 = high_resolution_clock::now();
	}
	return NULL;
}
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
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	//high_resolution_clock::time_point t2 = high_resolution_clock::now();
	
	/*int numberThread = 20;
	pthread_t pthread_t_List[100];
	pthread_attr_t pthread_attr_t_List[100];
	struct sched_param param1;
	//pthread_attr_init(&attr1);
	
	for (int i = 0; i < 100; i++)
	{
		pthread_attr_init(&pthread_attr_t_List[i]);
		param1.sched_priority = 1;
	    	pthread_attr_setschedpolicy(&pthread_attr_t_List[i],SCHED_OTHER);
	    	pthread_attr_setschedparam(&pthread_attr_t_List[i],&param1);
	    	
	    	//prctl(PR_SET_NAME,"ThreadA",NULL,NULL,NULL);
	    	int err = pthread_create(&pthread_t_List[i],&pthread_attr_t_List[i],&Thread1,NULL);
	}
	for (int i = 0; i < 100; i++)
	{
		pthread_join(pthread_t_List[i],NULL);
	}*/
	pthread_t ppid1,ppid2,ppid3, ppid4;
    
    	struct sched_param param1;
    	struct sched_param param2;
    	struct sched_param param3;
    	struct sched_param param4;
    	//struct sched_param param5;
    	//struct sched_param param6;
    	
    	pthread_attr_t attr1,attr2,attr3, attr4;
    	
    	pthread_attr_init(&attr1);
    	pthread_attr_init(&attr2);
    	pthread_attr_init(&attr3);
    	pthread_attr_init(&attr4);
    	//pthread_attr_init(&attr5);
    	//pthread_attr_init(&attr6);
    	
    	param1.sched_priority = 10;
    	pthread_attr_setinheritsched(&attr1,PTHREAD_EXPLICIT_SCHED);
    	pthread_attr_setschedpolicy(&attr1,SCHED_RR);
    	
    	pthread_attr_setschedparam(&attr1,&param1);
    	
    	//prctl(PR_SET_NAME,"ThreadA",NULL,NULL,NULL);
    	
    	
    	param2.sched_priority = 10;
    	pthread_attr_setinheritsched(&attr2,PTHREAD_EXPLICIT_SCHED);
    	pthread_attr_setschedpolicy(&attr2,SCHED_RR);
    	
    	pthread_attr_setschedparam(&attr2,&param2);
    	
    	//prctl(PR_SET_NAME,"ThreadB",NULL,NULL,NULL);
    	
    	
    	
    	
        param3.sched_priority = 10;
        pthread_attr_setinheritsched(&attr3,PTHREAD_EXPLICIT_SCHED);
    	pthread_attr_setschedpolicy(&attr3,SCHED_RR);
    	
    	pthread_attr_setschedparam(&attr3,&param3);
    	
    	
    	
    	param4.sched_priority = 10;
    	pthread_attr_setinheritsched(&attr4,PTHREAD_EXPLICIT_SCHED);
    	pthread_attr_setschedpolicy(&attr4,SCHED_RR);
    	
    	pthread_attr_setschedparam(&attr4,&param4);
    	if (0 != pthread_attr_setschedparam(&attr4,&param4))
    	{
    		
    	}
    	
    	
    	
    	//err = pthread_create(&ppid6,&attr6,&Thread6,NULL);
    	struct timespec ts;
	int ret;

	/* real apps must check return values */
	ret = sched_rr_get_interval(0, &ts);

	printf("Timeslice: %luns\n", ts.tv_nsec);
	
	int err = pthread_create(&ppid1,&attr1,Thread1,NULL);
	err = pthread_create(&ppid2,&attr2,Thread2,NULL);
	err = pthread_create(&ppid3,&attr3,Thread3,NULL);
	err = pthread_create(&ppid4,&attr4,Thread4,NULL);
	
    	pthread_join(ppid1,NULL);
    	pthread_join(ppid2,NULL);
    	pthread_join(ppid3,NULL);
    	pthread_join(ppid4,NULL);
    	//pthread_join(ppid5,NULL);
	//pthread_join(ppid6,NULL);
}

