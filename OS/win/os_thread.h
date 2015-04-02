#ifndef _OS_THREAD_H_
#define _OS_THREAD_H_

namespace los
{
typedef uintptr_t os_thread_t;

typedef struct os_thread_attr_
{
    int nPriority;
}os_thread_attr;

typedef DWORD os_tid_t;

}//namespace los

#endif