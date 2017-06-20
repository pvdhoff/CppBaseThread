/*
 * BaseThread.h
 *
 *  Created on: 18.08.2014
 *      Author: pvh
 *      basic thead class
 */

#ifndef BASETHREAD_H_
#define BASETHREAD_H_

#include <pthread.h>

class BaseThread {
public:
	BaseThread();
	virtual ~BaseThread();
	virtual void run(void);
	void start();
	void stop();
private:
	pthread_t m_thread;
};

#endif /* BASETHREAD_H_ */
