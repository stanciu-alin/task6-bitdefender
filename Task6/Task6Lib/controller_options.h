#pragma once

#include "Utility.h"

extern int TASK6_ACTIVE_THREADS;
extern int TASK6_WORKING_THREADS;

#define TASK6_SHUTDOWN_TIMEOUT 500
#define DATA_BUFFER_SIZE 0x10000

#define TASK6_SHUTDOWN_COMP_KEY 0x00
#define TASK6_PIPE_SERVER_COMP_KEY 0x01
#define TASK6_SHARED_MEMORY_SERVER_COMP_KEY 0x02
#define TASK6_SOCKET_SERVER_COMP_KEY 0x03

#define TASK6_PIPE_SERVER_NAME "\\\\.\\pipe\\task6_pipe_server"
#define TASK6_PIPE_SERVER_MAX_CLIENTS 0x100

#define TASK6_SHARED_MEMORY_NAME "task6_shared_memory"
#define TASK6_SHARED_MEMORY_SVTOCL_EVENT_NAME "task6_svtocl_event"
#define TASK6_SHARED_MEMORY_CLTOSV_EVENT_NAME "task6_cltosv_event"
