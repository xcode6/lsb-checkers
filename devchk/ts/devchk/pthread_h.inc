#ifndef LSBCC_MODE
struct _pthread_cleanup_buffer;
void _pthread_cleanup_pop(struct _pthread_cleanup_buffer *, int);
void _pthread_cleanup_push(struct _pthread_cleanup_buffer *, void(*fptr10)(void *), void *);
int __register_atfork(void (*)(void), void (*)(void), void (*)(void), void *);
#endif