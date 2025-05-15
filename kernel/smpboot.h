#ifndef SMPBOOT_H
#define SMPBOOT_H

struct task_struct;

int smpboot_prepare(unsigned int cpu);


struct task_struct *idle_thread_get(unsigned int cpu);
void idle_thread_set_boot_cpu(void);
void idle_threads_init(void);


int smpboot_create_threads(unsigned int cpu);
void smpboot_park_threads(unsigned int cpu);
void smpboot_unpark_threads(unsigned int cpu);

#endif
