#include <kernel/vm/vm.h>
#include <kernel/def.h>

uint8_t vm_op_loada(t_vm *dxvm)
{
  (dxvm->reg)[0] = (dxvm->mem)[++(dxvm->ip) % VM_MEM_SIZE];
  return (VM_STAT_RUN);
}
