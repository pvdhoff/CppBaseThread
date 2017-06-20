/*
 * BaseThread.cpp
 *
 *  Created on: 18.08.2014
 *      Author: pvh
 */
#include <stdio.h>
#include "BaseThread.h"

BaseThread::BaseThread() {
}

BaseThread::~BaseThread() {
}

static void * ThreadFunction(void* arg)
{
	BaseThread* thread = static_cast<BaseThread*>(arg);
	thread->run();
	return 0;
}

void BaseThread::start()
{
	pthread_attr_t pthread_custom_attr;
	pthread_attr_init(&pthread_custom_attr);
	pthread_create(&m_thread, &pthread_custom_attr, &ThreadFunction, (void*) this);
}

void BaseThread::stop()
{
	pthread_join(m_thread,NULL);
}

void BaseThread::run()
{
	printf("Hallo from default run\n");
	return;
}

