#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);

/**
 * check_elf - Checks if the file is an ELF file.
 * @e_ident: Points to the array containing the ELF magic number.
 * Description: If the file is not an ELF file, exits with exit code 98.
 */

void check_elf(unsigned char *e_ident)
{
int k;
for (k = 0; k < 4; k++)
{
if (e_ident[k] != 127 &&
e_ident[k] != 'E' &&
e_ident[k] != 'L' &&
e_ident[k] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - Prints the magic number of an ELF header.
 * @e_ident: Points to an array containing the ELF magic number.
 * Description: The magic numbers are separated by spaces or whitespace.
 */
void print_magic(unsigned char *e_ident)
{
int k;

printf("  Magic:   ");
for (k = 0; k < EI_NIDENT; k++)
{
printf("%02x", e_ident[k]);
if (k == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: Points to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
* print_version - A version of an ELF header is been printed.
* @e_ident: points to an array containing the ELF versions.
*/
void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d",
e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
* print_data - datas of an ELF header is to be printed.
* @e_ident: points to an array containing the ELF class or data.
*/
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
* print_osabi - OS/ABI of an ELF header is to be printed.
* @e_ident: points to an array containing the ELF version.
*/

void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
* print_abi - ABI version of an ELF header has been printed.
* @e_ident: points to an array containing the ELF ABI version.
*/
void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n",
e_ident[EI_ABIVERSION]);
}

/**
* print_type - a type of an ELF header is to be printed.
* @e_type: This is an ELF type.
* @e_ident: point to an array containing the ELF class.
*/
void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf("  Type:                              ");

switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}

/**
* print_entry -  an entry point of an ELF header is to be printed.
* @e_entry: The address of the ELF entry is been point.
* @e_ident: points to an array containing the ELF class.
*/
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);

else
printf("%#lx\n", e_entry);
}

/**
* close_elf - Closes an ELF file.
* @elf : The=is is  file descriptor for ELF file.
*
* Description: when the file cannot be closed or finished - exit code 98.
* close_elf - Closes an ELF file.
* @elf : The file descriptor of the ELF file.
*
* Description : If the file cannot be closed - exit code 98.
*/

void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}



/**
* main - shows the information  in the
*  ELF header at the start of an ELF file displaying.
* @arc: E num of args given to the program.
* @arv: array of points to the arguments.
* Return: exit 0 on success.
* Description: when the file is not an ELF File or
* the function fails - exit code 98.
*/
int main(int __attribute__((__unused__)) arc, char *arv[])
{
Elf64_Ehdr *header;
int m, v;
m = open(arv[1], O_RDONLY);
if (m == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(m);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arv[1]);
exit(98);
}
v = read(m, header, sizeof(Elf64_Ehdr));
if (v == -1)
{
free(header);
close_elf(m);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", arv[1]);
exit(98);
}
check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abi(header->e_ident);
print_type(header->e_type, header->e_ident);
print_entry(header->e_entry, header->e_ident);
free(header);
close_elf(m);
return (0);
}

