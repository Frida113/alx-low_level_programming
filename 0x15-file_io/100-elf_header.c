#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error_and_exit(const char *format, const char *arg)
{
	fprintf(stderr, format, arg);
	exit(98);
}

void print_elf_header_info(Elf64_Ehdr *ehdr)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT, i++)
		printf("%02x ", ehdr->e_ident[i]);
	printf("\n");

	printf("Class: %u\n", ehdr->e_ident[EI_CLASS]);
	printf("Data: %u\n", ehdr->e_ident[EI_DATA]);
	printf("Version: %u\n", ehdr->e_ident[EI_VERSION]);
	printf("OS/ABI: %u\n", ehdr->e_ident[EI_OSABI]);
	printf("ABI Version: %u\n", ehdr->e_ident[EI_ABIVERSION]};

			printf("Type: %u\n", ehdr->e_type);
			printf("Entry point address: 0xlx\n", ehdr->e_entry);
			}

			int main(int argc, char *argv[])
			{
			if (argc != 2)
			{
			print_error_and_exit("Usage: %s elf_filename\n", argv[0]);
			}

			int fd = open(argv[1], O_RDONLY);
			if (fd == -1)
			{
			print_error_and_exit("Error: Can't open file %s\n", argv[1])
			}

			Elf64_Ehdr ehdr;
			if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
			{
				print_error_and_exit("ERROR: Failed to read ELF header from file %s\n", argv[1]);
			}

			if (lseek(fd, 0, SEEK_SET) == -1)
			{
				print_error_and_exit("Error: Failed to reset file pointer for %s\n", argv[1]);
			}

			if (ehdr.e_ident[EI_MAGO] != ELFMAG0 ||
					ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
					ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
					ehdr.e_ident[EI_MAG3] != ELFMAG3)
			{
				print_error_and_exit("Error: File %s is not an ELF file\n", argv[1]);
			}

			print_elf_header_info(&ehdr);

			close(fd);

			return (0);
			}
