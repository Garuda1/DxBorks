#include <kernel/vm/vm.h>
#include <kernel/def.h>

uint8_t vm_op_or(t_vm *dxvm)
{
  (dxvm->reg)[0] |= (dxvm->reg)[1];
  return (KSUCCESS);
}
