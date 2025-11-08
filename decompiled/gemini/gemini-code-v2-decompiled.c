typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef ulong size_t;



int DAT_00104014;
undefined FUN_001010e0;
char DAT_00104010;
undefined *PTR_LOOP_00104008;

void _DT_INIT(void)

{
  __gmon_start__();
  return;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void FUN_00101080(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



void __printf_chk(void)

{
  __printf_chk();
  return;
}



undefined8 FUN_001010e0(void)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  int iVar6;
  uint uVar7;
  long in_FS_OFFSET;
  ulong local_f8;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_88 [4];
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  long local_20;
  ulong uVar5;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puts("--- C Function Demonstration ---");
  __printf_chk(0x400921fb54411744,2,"Global Constant Value (PI Approximation): %.10f\n");
  __printf_chk(2,"Initial Global Operation Counter: %d\n\n",DAT_00104014);
  __printf_chk(2,"1. Simple Addition: %d + %d = %d\n\n",0x2a,0x12,0x3c);
  DAT_00104014 = DAT_00104014 + 1;
  __printf_chk(2,"   [SIDE EFFECT] Global counter incremented to: %d\n");
  DAT_00104014 = DAT_00104014 + 1;
  __printf_chk(2,"   [SIDE EFFECT] Global counter incremented to: %d\n");
  __printf_chk(2,"2. Subtraction 1: 100 - 25 = %d\n",0x4b);
  __printf_chk(2,"2. Subtraction 2: 50 - 10 = %d\n",0x28);
  __printf_chk(2,"   Final Global Operation Counter after two calls: %d\n\n",DAT_00104014);
  __printf_chk(0x4004000000000000,0x4043880000000000,2,"3. Power Function: %.2f ^ %d = %.4f\n\n",4);
  __printf_chk(2,"4. XOR Encryption/Decryption (Key: \'%c\')\n",0x4b);
  __printf_chk(2,"   Original Message: %s\n","Hello C World!");
  uStack_f0 = 0x2739241c;
  local_f8 = 0x6b086b2427272e03;
  uStack_ec = 0x6a2f;
  uStack_ea = 0;
  __printf_chk(2,"   Encrypted Message (Ciphertext): %s\n",&local_f8);
  sVar3 = strlen((char *)&local_f8);
  uVar1 = (uint)sVar3;
  if (uVar1 == 0) goto LAB_00101360;
  if (uVar1 - 1 < 0xf) {
    uVar5 = 0;
    uVar4 = 0;
LAB_001013d7:
    uVar7 = uVar1 - (int)uVar5;
    if (6 < uVar7 - 1) {
      *(ulong *)((long)local_88 + uVar5) = *(ulong *)((long)&local_f8 + uVar5) ^ 0x4b4b4b4b4b4b4b4b;
      uVar4 = uVar4 + (uVar7 & 0xfffffff8);
      if ((uVar7 & 7) == 0) goto LAB_00101360;
    }
  }
  else {
    uVar4 = (uint)(sVar3 >> 4) & 0xfffffff;
    local_88[0] = local_f8 ^ 0x4b4b4b4b4b4b4b4b;
    local_88[1] = CONCAT17(uStack_e9,CONCAT16(uStack_ea,CONCAT24(uStack_ec,uStack_f0))) ^
                  0x4b4b4b4b4b4b4b4b;
    if (uVar4 == 1) {
LAB_001013cc:
      uVar4 = uVar1 & 0xfffffff0;
      uVar5 = (ulong)uVar4;
      if ((sVar3 & 0xf) == 0) goto LAB_00101360;
      goto LAB_001013d7;
    }
    local_88[2] = local_e8 ^ 0x4b4b4b4b4b4b4b4b;
    local_88[3] = uStack_e0 ^ 0x4b4b4b4b4b4b4b4b;
    if (uVar4 == 2) goto LAB_001013cc;
    local_68 = local_d8 ^ 0x4b4b4b4b4b4b4b4b;
    uStack_60 = uStack_d0 ^ 0x4b4b4b4b4b4b4b4b;
    if (uVar4 == 3) goto LAB_001013cc;
    local_58 = local_c8 ^ 0x4b4b4b4b4b4b4b4b;
    uStack_50 = uStack_c0 ^ 0x4b4b4b4b4b4b4b4b;
    if (uVar4 == 4) goto LAB_001013cc;
    local_48 = local_b8 ^ 0x4b4b4b4b4b4b4b4b;
    uStack_40 = uStack_b0 ^ 0x4b4b4b4b4b4b4b4b;
    if (uVar4 != 6) goto LAB_001013cc;
    uVar4 = 0x60;
    local_38 = local_a8 ^ 0x4b4b4b4b4b4b4b4b;
    uStack_30 = uStack_a0 ^ 0x4b4b4b4b4b4b4b4b;
    if (sVar3 == 0x60) goto LAB_00101360;
  }
  *(byte *)((long)local_88 + (long)(int)uVar4) =
       *(byte *)((long)&local_f8 + (long)(int)uVar4) ^ 0x4b;
  iVar2 = uVar4 + 1;
  if (iVar2 < (int)uVar1) {
    *(byte *)((long)local_88 + (long)iVar2) = *(byte *)((long)&local_f8 + (long)iVar2) ^ 0x4b;
    iVar2 = uVar4 + 2;
    if (iVar2 < (int)uVar1) {
      *(byte *)((long)local_88 + (long)iVar2) = *(byte *)((long)&local_f8 + (long)iVar2) ^ 0x4b;
      iVar2 = uVar4 + 3;
      if (iVar2 < (int)uVar1) {
        *(byte *)((long)local_88 + (long)iVar2) = *(byte *)((long)&local_f8 + (long)iVar2) ^ 0x4b;
        iVar2 = uVar4 + 4;
        if (iVar2 < (int)uVar1) {
          *(byte *)((long)local_88 + (long)iVar2) = *(byte *)((long)&local_f8 + (long)iVar2) ^ 0x4b;
          iVar2 = uVar4 + 5;
          if (iVar2 < (int)uVar1) {
            iVar6 = uVar4 + 6;
            *(byte *)((long)local_88 + (long)iVar2) =
                 *(byte *)((long)&local_f8 + (long)iVar2) ^ 0x4b;
            if (iVar6 < (int)uVar1) {
              *(byte *)((long)local_88 + (long)iVar6) =
                   *(byte *)((long)&local_f8 + (long)iVar6) ^ 0x4b;
            }
          }
        }
      }
    }
  }
LAB_00101360:
  *(undefined1 *)((long)local_88 + sVar3) = 0;
  __printf_chk(2,"   Decrypted Message (Plaintext): %s\n\n",local_88);
  iVar2 = strcmp("Hello C World!",(char *)local_88);
  if (iVar2 == 0) {
    puts("--- Demonstration Successful: Decryption matched original message. ---");
  }
  else {
    puts("--- Demonstration Failed. ---");
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(FUN_001010e0,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101513)
// WARNING: Removing unreachable block (ram,0x0010151f)

void FUN_00101500(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101554)
// WARNING: Removing unreachable block (ram,0x00101560)

void FUN_00101530(void)

{
  return;
}



void _FINI_0(void)

{
  if (DAT_00104010 != '\0') {
    return;
  }
  FUN_00101080(PTR_LOOP_00104008);
  FUN_00101500();
  DAT_00104010 = 1;
  return;
}



void _INIT_0(void)

{
  FUN_00101530();
  return;
}



int FUN_001015c0(int param_1,int param_2)

{
  return param_1 + param_2;
}



int FUN_001015d0(int param_1,int param_2)

{
  DAT_00104014 = DAT_00104014 + 1;
  __printf_chk(2,"   [SIDE EFFECT] Global counter incremented to: %d\n");
  return param_1 - param_2;
}



double FUN_00101610(double param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  if (param_2 == 0) {
    return 1.0;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    param_1 = 1.0 / param_1;
    uVar1 = param_2 & 1;
  }
  else {
    uVar1 = param_2 & 1;
  }
  uVar2 = 0;
  dVar3 = 1.0;
  if (uVar1 != 0) {
    uVar2 = 1;
    dVar3 = param_1;
    if (param_2 == 1) {
      return param_1;
    }
  }
  do {
    uVar2 = uVar2 + 2;
    dVar3 = dVar3 * param_1 * param_1;
  } while (uVar2 != param_2);
  return dVar3;
}



void FUN_00101690(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((int)param_3 < 1) goto LAB_001017f7;
  if ((param_3 - 1 < 7) || ((ulong)(param_2 - (param_1 + 1)) < 0xf)) {
    lVar2 = 0;
    do {
      *(byte *)(param_2 + lVar2) = *(byte *)(param_1 + lVar2) ^ 0x4b;
      lVar2 = lVar2 + 1;
    } while (lVar2 != (int)param_3);
    *(undefined1 *)(param_2 + (int)param_3) = 0;
    return;
  }
  if (param_3 - 1 < 0xf) {
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = param_3;
LAB_00101735:
    *(ulong *)(param_2 + uVar3) = *(ulong *)(param_1 + uVar3) ^ 0x4b4b4b4b4b4b4b4b;
    uVar4 = uVar4 + (uVar6 & 0xfffffff8);
    if ((uVar6 & 7) == 0) goto LAB_001017f7;
  }
  else {
    lVar2 = 0;
    do {
      uVar3 = ((ulong *)(param_1 + lVar2))[1];
      *(ulong *)(param_2 + lVar2) = *(ulong *)(param_1 + lVar2) ^ 0x4b4b4b4b4b4b4b4b;
      ((ulong *)(param_2 + lVar2))[1] = uVar3 ^ 0x4b4b4b4b4b4b4b4b;
      lVar2 = lVar2 + 0x10;
    } while ((ulong)(param_3 >> 4) << 4 != lVar2);
    uVar4 = param_3 & 0xfffffff0;
    uVar3 = (ulong)uVar4;
    if (param_3 == uVar4) goto LAB_001017f7;
    uVar6 = param_3 - uVar4;
    if (6 < (param_3 - uVar4) - 1) goto LAB_00101735;
  }
  *(byte *)(param_2 + (int)uVar4) = *(byte *)(param_1 + (int)uVar4) ^ 0x4b;
  iVar1 = uVar4 + 1;
  if (iVar1 < (int)param_3) {
    *(byte *)(param_2 + iVar1) = *(byte *)(param_1 + iVar1) ^ 0x4b;
    iVar1 = uVar4 + 2;
    if (iVar1 < (int)param_3) {
      *(byte *)(param_2 + iVar1) = *(byte *)(param_1 + iVar1) ^ 0x4b;
      iVar1 = uVar4 + 3;
      if (iVar1 < (int)param_3) {
        *(byte *)(param_2 + iVar1) = *(byte *)(param_1 + iVar1) ^ 0x4b;
        iVar1 = uVar4 + 4;
        if (iVar1 < (int)param_3) {
          *(byte *)(param_2 + iVar1) = *(byte *)(param_1 + iVar1) ^ 0x4b;
          iVar1 = uVar4 + 5;
          if (iVar1 < (int)param_3) {
            iVar5 = uVar4 + 6;
            *(byte *)(param_2 + iVar1) = *(byte *)(param_1 + iVar1) ^ 0x4b;
            if (iVar5 < (int)param_3) {
              *(byte *)(param_2 + iVar5) = *(byte *)(param_1 + iVar5) ^ 0x4b;
            }
          }
        }
      }
    }
  }
LAB_001017f7:
  *(undefined1 *)(param_2 + (int)param_3) = 0;
  return;
}



void _DT_FINI(void)

{
  return;
}


