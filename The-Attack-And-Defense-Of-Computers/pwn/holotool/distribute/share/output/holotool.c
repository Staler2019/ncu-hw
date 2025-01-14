typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef enum Elf64_DynTag {
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

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

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




void _init(void)

{
  __gmon_start__();
  return;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040115d)
// WARNING: Removing unreachable block (ram,0x00401167)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040119f)
// WARNING: Removing unreachable block (ram,0x004011a9)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_8060 == '\0') {
    deregister_tm_clones();
    completed_8060 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



int init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  setvbuf(stdin,(char *)0x0,2,0);
  setvbuf(stdout,(char *)0x0,2,0);
  iVar1 = setvbuf(stderr,(char *)0x0,2,0);
  return iVar1;
}



void banner(void)

{
  puts("");
  puts(&DAT_00402010);
  puts(&DAT_00402060);
  puts(&DAT_004020c0);
  puts(&DAT_00402138);
  puts(&DAT_004021c0);
  puts("");
  return;
}



void init_info(void)

{
  vTubers._0_8_ = 0x7275472072776147;
  vTubers._8_2_ = 0x61;
  vTubers._32_8_ = 0x2f2f3a7370747468;
  vTubers._40_8_ = 0x662f63632e747070;
  vTubers._48_4_ = 0x31365448;
  vTubers._52_2_ = 0x78;
  vTubers._64_8_ = 0x2f2f3a7370747468;
  vTubers._72_8_ = 0x662f63632e747070;
  vTubers._80_4_ = 0x41325048;
  vTubers._84_2_ = 0x78;
  vTubers._96_8_ = 0x41206e6f73746157;
  vTubers._104_4_ = 0x696c656d;
  vTubers._108_2_ = 0x61;
  vTubers._128_8_ = 0x2f2f3a7370747468;
  vTubers._136_8_ = 0x662f63632e747070;
  vTubers._144_4_ = 0x73496149;
  vTubers._148_2_ = 0x78;
  vTubers._160_8_ = 0x2f2f3a7370747468;
  vTubers._168_8_ = 0x662f63632e747070;
  vTubers._176_4_ = 0x4f353736;
  vTubers._180_2_ = 0x78;
  vTubers._192_8_ = 0x7552206168757255;
  vTubers._200_4_ = 0x61696873;
  vTubers[204] = 0;
  vTubers._224_8_ = 0x2f2f3a7370747468;
  vTubers._232_8_ = 0x662f63632e747070;
  vTubers._240_4_ = 0x72784359;
  vTubers._244_2_ = 0x78;
  vTubers._256_8_ = 0x2f2f3a7370747468;
  vTubers._264_8_ = 0x662f63632e747070;
  vTubers._272_4_ = 0x364b6434;
  vTubers._276_2_ = 0x78;
  vTubers._288_8_ = 0x6550206164617355;
  vTubers._296_4_ = 0x61726f6b;
  vTubers[300] = 0;
  vTubers._320_8_ = 0x2f2f3a7370747468;
  vTubers._328_8_ = 0x662f63632e747070;
  vTubers._336_4_ = 0x44506448;
  vTubers._340_2_ = 0x78;
  vTubers._352_8_ = 0x2f2f3a7370747468;
  vTubers._360_8_ = 0x662f63632e747070;
  vTubers._368_4_ = 0x53566271;
  vTubers._372_2_ = 0x78;
  vTubers._384_8_ = 0x6d616b6172696853;
  vTubers._392_8_ = 0x696b756275462069;
  vTubers[400] = 0;
  vTubers._416_8_ = 0x2f2f3a7370747468;
  vTubers._424_8_ = 0x662f63632e747070;
  vTubers._432_4_ = 0x43553547;
  vTubers._436_2_ = 0x78;
  vTubers._448_8_ = 0x2f2f3a7370747468;
  vTubers._456_8_ = 0x662f63632e747070;
  vTubers._464_4_ = 0x5550456d;
  vTubers._468_2_ = 0x78;
  return;
}



void read_int(void)

{
  char local_18 [16];
  
  read(0,local_18,0x10);
  atoi(local_18);
  return;
}



void show_info(void)

{
  int iVar1;
  
  puts("Enter which info to read (index should between 0-4)");
  write(1,"idx> ",5);
  iVar1 = read_int();
  if (iVar1 < 5) {
    printf("name: %s\n",vTubers + (long)iVar1 * 0x60);
    printf("YT channel: %s\n",(long)iVar1 * 0x60 + 0x4040c0);
    printf("Twitter: %s\n",(long)iVar1 * 0x60 + 0x4040e0);
  }
  else {
    puts("Invalid index!!");
  }
  return;
}



void edit_info(void)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  puts("Enter which info to edit (index should between 0-4)");
  write(1,"idx> ",5);
  local_c = read_int();
  if (4 < local_c) {
    puts("Invalid index!!");
    return;
  }
  puts("Enter which info to edit");
  puts("1.name");
  puts("2.YT cahnnel");
  puts("3.Twitter");
  write(1,&DAT_0040231b,2);
  local_10 = read_int();
  if ((local_10 < 1) || (3 < local_10)) {
    puts("Wrong argument");
    return;
  }
  write(1,"Content: ",9);
  read(0,&local_38,0x20);
  if (local_10 == 3) {
    lVar1 = (long)local_c * 0x60;
    *(undefined8 *)(vTubers + lVar1 + 0x40) = local_38;
    *(undefined8 *)(vTubers + lVar1 + 0x48) = local_30;
    *(undefined8 *)(vTubers + lVar1 + 0x50) = local_28;
    *(undefined8 *)(vTubers + lVar1 + 0x58) = local_20;
    goto LAB_004017e9;
  }
  if (local_10 < 4) {
    if (local_10 == 1) {
      lVar1 = (long)local_c * 0x60;
      *(undefined8 *)(vTubers + lVar1) = local_38;
      *(undefined8 *)(vTubers + lVar1 + 8) = local_30;
      *(undefined8 *)(vTubers + lVar1 + 0x10) = local_28;
      *(undefined8 *)(vTubers + lVar1 + 0x18) = local_20;
      goto LAB_004017e9;
    }
    if (local_10 == 2) {
      lVar1 = (long)local_c * 0x60;
      *(undefined8 *)(vTubers + lVar1 + 0x20) = local_38;
      *(undefined8 *)(vTubers + lVar1 + 0x28) = local_30;
      *(undefined8 *)(vTubers + lVar1 + 0x30) = local_28;
      *(undefined8 *)(vTubers + lVar1 + 0x38) = local_20;
      goto LAB_004017e9;
    }
  }
  puts("Invalid argument");
LAB_004017e9:
  puts("Edit success");
  return;
}



void main(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  
  init(param_1);
  banner();
  init_info();
  do {
    puts("1. show info");
    puts("2. edit info");
    puts("3. exit");
    write(1,&DAT_0040231b,2);
    iVar1 = read_int();
    if (iVar1 == 3) {
      puts("bye~");
                    // WARNING: Subroutine does not return
      exit(0);
    }
    if (iVar1 < 4) {
      if (iVar1 == 1) {
        show_info();
      }
      else {
        if (iVar1 != 2) goto LAB_004018b0;
        edit_info();
      }
    }
    else {
LAB_004018b0:
      puts("Invalie choice!!");
    }
    puts("");
  } while( true );
}



void __libc_csu_init(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init();
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


