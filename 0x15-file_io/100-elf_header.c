#include "main.h"
#include <elf.h>

void print_magic(Elf64_Ehdr *header);
void print_class(Elf64_Ehdr *header);
void print_data(Elf64_Ehdr *header);
void print_version(Elf64_Ehdr *header);
void print_osabi(Elf64_Ehdr *header);
void print_abi_version(Elf64_Ehdr *header);
void print_type(Elf64_Ehdr *header);
void print_entry_point_address(Elf64_Ehdr *header);

int main(int argc, char *argv[])
{
    
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        perror("read");
        close(fd);
        exit(98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Not an ELF file\n");
        close(fd);
        exit(98);
    }

    printf("ELF Header:\n");
    print_magic(&header);
    print_class(&header);
    print_data(&header);
    print_version(&header);
    print_osabi(&header);
    print_abi_version(&header);
    print_type(&header);
    print_entry_point_address(&header);

    close(fd);
    return 0;
}

