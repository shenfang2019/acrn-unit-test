#ifndef VMALLOC_H
#define VMALLOC_H 1

extern void *alloc_vpages(ulong nr);
extern void *alloc_vpage(void);
extern void init_alloc_vpage(void *top);
extern void setup_vm();

extern void *setup_mmu(phys_addr_t top);

#endif
