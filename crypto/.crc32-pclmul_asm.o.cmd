cmd_arch/x86/crypto/crc32-pclmul_asm.o := gcc -Wp,-MD,arch/x86/crypto/.crc32-pclmul_asm.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.9/include -I./arch/x86/include -Iarch/x86/include/generated/uapi -Iarch/x86/include/generated  -Iinclude -I./arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__   -D__ASSEMBLY__ -m64 -DCONFIG_X86_X32_ABI -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1  -Wa,-gdwarf-2  -mfentry -DCC_USING_FENTRY -DCC_HAVE_ASM_GOTO           -DMODULE  -c -o arch/x86/crypto/crc32-pclmul_asm.o arch/x86/crypto/crc32-pclmul_asm.S

source_arch/x86/crypto/crc32-pclmul_asm.o := arch/x86/crypto/crc32-pclmul_asm.S

deps_arch/x86/crypto/crc32-pclmul_asm.o := \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/x86/include/asm/linkage.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/alignment/16.h) \
  arch/x86/include/asm/inst.h \

arch/x86/crypto/crc32-pclmul_asm.o: $(deps_arch/x86/crypto/crc32-pclmul_asm.o)

$(deps_arch/x86/crypto/crc32-pclmul_asm.o):
