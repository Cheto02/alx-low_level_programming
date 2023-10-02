#include <stdio.h>
#include <elf.h>
#include "main.h"
void print_version(Elf64_Ehdr *header) {
    printf("  Version:                           %d ", header->e_ident[EI_VERSION]);
    if (header->e_ident[EI_VERSION] == EV_CURRENT) {
        printf("(current)\n");
    } else {
        printf("(unknown)\n");
    }
}

void print_osabi(Elf64_Ehdr *header) {
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        /* Add other cases based on the possible values of EI_OSABI */
        default:
            printf("Unknown OS/ABI\n");
            break;
    }
}

void print_abi_version(Elf64_Ehdr *header) {
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
}

void print_type(Elf64_Ehdr *header) {
    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("No file type\n");
            break;
        case ET_REL:
            printf("Relocatable file\n");
            break;
        case ET_EXEC:
            printf("Executable file\n");
            break;
        case ET_DYN:
            printf("Shared object file\n");
            break;
        case ET_CORE:
            printf("Core file\n");
            break;
        /* Add other cases based on the possible values of e_type */
        default:
            printf("Unknown type\n");
            break;
    }
}

void print_entry_point_address(Elf64_Ehdr *header) {
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}


